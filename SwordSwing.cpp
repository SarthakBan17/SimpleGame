#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "FireBall.h"
#include "Player.h"
#include "SwordSwing.h"
#include "Target.h"
#include "Attack.h"

SwordSwing::SwordSwing(){
}//end of SwordSwing constructor

void SwordSwing::setAttack(int attack){
    SwordSwing::attack = attack;
    //std::cout << "The sword skill attack is now: " << SwordSwing::attack << std::endl;
}// end of SetAttack method

int SwordSwing::calculateHit(){
    SwordSwing::randomChance = rand();
    SwordSwing::randomCrit = rand();
    if(SwordSwing::randomChance % 2 == 1){
        if(SwordSwing::randomCrit % 2 == 1){
            SwordSwing::damageNumb = SwordSwing::attack * 5;
        }
        else{
            SwordSwing::damageNumb += SwordSwing::attack;
        }
    }
    else{
        SwordSwing::damageNumb = 0;
    }
    std::cout << "The amount of damage you have dealt is: " << SwordSwing::damageNumb << std::endl;
    return SwordSwing::damageNumb;
}//end of calculate hit method
