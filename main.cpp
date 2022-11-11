#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "FireBall.h"
#include "Player.h"
#include "SwordSwing.h"
#include "Target.h"
#include "Attack.h"

int main(){
    std::string nameUser;
    int healthTarget, choice;
    bool condition = true;
    Player* player = new Player();
    std::cout << "Welcome to the RPG Battle Simulator System where you fight against a target to test your skills and attacks!!" << std::endl;
    std::cout << "Please enter your Name: " << std::endl;
    std::cin >> nameUser;
    //std::cout << "Please enter the amount of HP you want to give your target: " << std::endl;
    //std::cin >> healthTarget;
    //player->setHealth(healthTarget);

    while(condition){
        std::cout << "Please use one of the following skills for your character to do: " << std::endl;
        std::cout << "1) To Sword Attack the enemy! " << std::endl;
        std::cout << "2) To Fire Ball the enemy! " << std::endl;
        std::cout << "3) To Use Buff Skill! " << std::endl;
        std::cout << "0) To Concede before killing the test target! " << std::endl;
        std::cout << "Please make your choice: " << std::endl;
        std::cin >> choice;
        switch(choice){
        case 1:
            player -> swordSkill();
            break;
        case 2:
            player -> fireballSkill();
            break;
        case 3:
            player -> buff();
            break;
        case 0:
            delete player;
            exit(0);
        }//end of switch case
        player -> takeDamage();
        int numbW = player -> conditionWin();
        int numbL = player -> conditionLoss();
        if(numbW == 1){
            std::cout << "The Target has been Crushed And you have WON!!!" << std::endl;
            exit(0);
        }
        else if(numbL == 1){
            std::cout << "You have lost all your health and have died sadly!" << std::endl;
            exit(0);
        }
    }//end of the while loop
    delete player;
}//end of main

