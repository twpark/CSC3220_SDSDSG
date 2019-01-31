#include "dragonmodel.h"

DragonModel::DragonModel()
{
    hp = 100;
    isDead = false;
}

void DragonModel::hit()
{
    if (!isDead) {
        hp -= 9;
    }

    if (hp <= 0) {
        isDead = true;
        hp = 0;
    }
}

void DragonModel::revive()
{
    if(isDead) {
        isDead = false;
        hp = 100;
    }
}

int DragonModel::getDragonHP()
{
    return hp;
}

bool DragonModel::isDragonDead()
{
    return isDead;
}




