#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "FireBall.h"
#include "Player.h"
#include "SwordSwing.h"
#include "Target.h"
#include "Attack.h"

Target::Target(){
    Target::health = 100;
}// end of target constructor

/*void Target::setHealth(int health){
    Target::health = health;
    //std::cout << "The health of the target is: "<< Target::health << std::endl;
}//end of setHealth method*/

int Target::getHealth(){
    return Target::health;
}

void Target::status(int damage, int effect){
    if(effect == 0){
        Target::health = Target::health - damage;
        std::cout << "The health is now! " << Target::health << std::endl;
    }
    /*else if(effect == 1){
        int damage_total = damage + (health * 0.1);
        Target::health = Target::health - damage_total;
    }*/
    else{
        std::cout << "Error has happened in the CODE!!" << std::endl;
    }
}//end of status method

int Target::conditionWin(){
    if(Target::health <= 0){
        //std::cout << "The Target has died a horrible death!" << std::endl;
        return 1;
    }
}//end of condition loose method
