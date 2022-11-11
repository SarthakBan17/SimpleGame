#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "FireBall.h"
#include "Player.h"
#include "SwordSwing.h"
#include "Target.h"
#include "Attack.h"

Player::Player(){
    Player::attack = 10;
    Player::health = 100;
    swordAttack = new SwordSwing();
    fireBall = new FireBall();
    target = new Target();
}//end of the player constructor

Player::~Player(){
    delete swordAttack;
    delete fireBall;
    delete target;
}//end of the player distructor

/*void Player::setHealth(int health){
    target->setHealth(health);
}*/

void Player::takeDamage(){
    int healthTarget = target -> getHealth();
    //std::cout << healthTarget << std::endl;
    if(healthTarget > 50){
        std::cout << "The Target has attacked you for 10 damage!!"<<std::endl;
        Player::health = Player::health - 10;
        std::cout << "Your current health is now: " << Player::health << std::endl;
    }
    else if(healthTarget <= 50){
        std::cout << "You have Enraged the Target and now take 50 damage!!" << std::endl;
        Player::health = Player::health - 20;
        std::cout << "Your Current Health is now: " << Player::health << std::endl;
    }
    else{
        std::cout << "code not working as intended" << std::endl;
    }
}//end of the taken damage method

int Player::conditionLoss(){
    if(Player::health <= 0){
        return 1;
    }
}//end of the loss condition

void Player::buff(){
    Player::attack += 10;
}//end of the buff method

void Player::swordSkill(){
    //std::cout << "This Part actually worked! " << Player::attack << std::endl;
    swordAttack -> setAttack(Player::attack);
    Player::attack = 10;
    Player::damageNumb = swordAttack ->calculateHit();
    target ->status(Player::damageNumb, 0);
    Player::damageNumb = 0;
}//emd pf the swordSkill method

void Player::fireballSkill(){
    fireBall -> setAttack(Player::attack);
    Player::attack = 10;
    Player::damageNumb = fireBall ->calculateHit();
    target ->status(Player::damageNumb, 0);
    Player::damageNumb = 0;
}//end of the Fireball skill method

int Player::conditionWin(){
    int condition = target ->conditionWin();
    return condition;
}//end of the condition win method

