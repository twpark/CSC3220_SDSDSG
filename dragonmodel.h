#ifndef DRAGONMODEL_H
#define DRAGONMODEL_H

#include <QObject>

class DragonModel
{
    int hp;
    bool isDead;
public:
    DragonModel();

    void hit();
    void revive();

    int getDragonHP();
    bool isDragonDead();
};









#endif // DRAGONMODEL_H
