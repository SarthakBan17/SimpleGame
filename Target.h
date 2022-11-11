#ifndef TARGET_H_EXIST
#define TARGET_H_EXIST

#include <iostream>
#include <stdlib.h>

class Target{
private:
    int health;

public:
    Target();
    //void setHealth(int health);
    int getHealth();
    int conditionWin();
    void status(int damage, int effect);
};

#endif // TARGET_H_EXIST

