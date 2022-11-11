#ifndef ATTACK_H_EXIST
#define ATTACK_H_EXIST

#include <iostream>
#include <stdlib.h>

class Attack{
public:
    int attack;
    int randomChance;
    int damageNumb;
    int randomCrit;

public:
    virtual void setAttack(int attack) = 0;
    virtual int calculateHit() = 0;
};
#endif // ATTACK_H_EXIST

