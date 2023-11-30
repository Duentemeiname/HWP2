#include "akku.h"
int max_ladung = 5000;

float akku::getKapazitaet()
{
    return kapazitaet;
}

void akku::setKapazitaet(int new_kapazitaet)
{
    if(new_kapazitaet > max_ladung)
    {
        kapazitaet = max_ladung;
    }
    else
    {
        kapazitaet = new_kapazitaet;
    }
    
}

akku::akku()
{
    kapazitaet = 0;
}