#include "position.h"

void position::setPosition(int new_x, int new_y, int new_z)
{
    aktuellePosition.x = new_x;
    aktuellePosition.y = new_y;
    aktuellePosition.z = new_z;
}
koordinaten position::getposition()
{
    return aktuellePosition;
}

position::position()
{
    aktuellePosition.x = 0;
    aktuellePosition.y = 0;
    aktuellePosition.z = 0; 
}
