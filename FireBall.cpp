#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "FireBall.h"
#include "Player.h"
#include "SwordSwing.h"
#include "Target.h"
#include "Attack.h"

FireBall::FireBall(){
}//end of FireBall constructor

void FireBall::setAttack(int attack){
    FireBall::attack = attack;
}//end of setAttack for fireball

int FireBall::calculateHit(){
    FireBall::randomChance = rand();
    FireBall::randomCrit = rand();
    if(FireBall::randomChance % 2 == 1){
        if(FireBall::randomCrit % 2 == 1){
            FireBall::damageNumb = FireBall::attack * 5;
        }
        else{
            FireBall::damageNumb += FireBall::attack;
        }
    }
    else{
        FireBall::damageNumb = 0;
    }
    std::cout << "The amount of damage You dealt is: " << FireBall::damageNumb << std::endl;
    return FireBall::damageNumb;
}//end of calculate hit method

