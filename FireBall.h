#ifndef FIREBALL_H_EXIST
#define FIREBALL_H_EXIST

#include <iostream>
#include <stdlib.h>
#include "Target.h"
#include "Attack.h"

class FireBall: public Attack{

public:
    FireBall();
    void setAttack(int attack);
    int calculateHit();
};

#endif // FIREBALL_H_EXIST

