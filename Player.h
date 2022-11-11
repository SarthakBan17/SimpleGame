#ifndef PLAYER_H_EXIST
#define PLAYER_H_EXIST

#include <iostream>
#include <stdlib.h>
#include "SwordSwing.h"
#include "FireBall.h"

class Player{
private:
    int health;
    int attack;
    int damageNumb;
    SwordSwing* swordAttack;
    FireBall* fireBall;
    Target* target;

public:
    Player();
    ~Player();
    void swordSkill();
    //void setHealth(int health);
    void fireballSkill();
    void takeDamage();
    int conditionLoss();
    void buff();
    int conditionWin();
};

#endif

