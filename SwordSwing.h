#ifndef SWORDSWING_H_EXIST
#define SWORDSWING_H_EXIST

#include <iostream>
#include <stdlib.h>
#include "Target.h"
#include "Attack.h"

class SwordSwing: public Attack{

public:
    SwordSwing();
    void setAttack(int attack);
    int calculateHit();
};

#endif // SWORDSWING_H_EXIST

