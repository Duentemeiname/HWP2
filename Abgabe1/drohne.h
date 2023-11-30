#include "akku.h"
#include "position.h"

class drohne
{
    private:
        akku batterie;
        position drohnePos;

        void verbrauch(int new_verbauch);

    public:
        void steige(int new_z);
        void sinke(int new_z);
        void fliegVorwaerts(int new_x);
        void fliegRueckwaerts(int new_x);
        void fliegLinks(int new_y);
        void fliegRechts(int new_y);
        void drohneLaden(int new_kapazitaet);
        void restKapazitaet();
        void aktuellPosition();
        drohne();


};