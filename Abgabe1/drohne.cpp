#include "drohne.h"
#include "iostream"

void drohne::steige(int new_z)
{
    drohnePos.setPosition(drohnePos.getposition().x,drohnePos.getposition().y, drohnePos.getposition().z + new_z);
    verbrauch(new_z);
}
void drohne::sinke(int new_z)
{
    // if(drohnePos.getposition().z - new_z <= 0) würde Sinn machen, eine Drohne kann nicht "im" Boden fliegen
    // {
    //     new_z = 0;
    //     std::cout<<"Drohne gelandet";
    // }
    drohnePos.setPosition(drohnePos.getposition().x, drohnePos.getposition().y, drohnePos.getposition().z - new_z);
    verbrauch(new_z);
}
void drohne::fliegVorwaerts(int new_x)
{
    drohnePos.setPosition(drohnePos.getposition().x  + new_x, drohnePos.getposition().y, drohnePos.getposition().z);
    verbrauch(new_x);
}
void drohne::fliegRueckwaerts(int new_x)
{
    drohnePos.setPosition(drohnePos.getposition().x - new_x, drohnePos.getposition().y, drohnePos.getposition().z);
    verbrauch(new_x);
}
void drohne::fliegLinks(int new_y)
{
    drohnePos.setPosition(drohnePos.getposition().x, drohnePos.getposition().y + new_y, drohnePos.getposition().y);
    verbrauch(new_y);
}
void drohne::fliegRechts(int new_y)
{
    drohnePos.setPosition(drohnePos.getposition().x, drohnePos.getposition().y + new_y, drohnePos.getposition().y);
    verbrauch(new_y);
}
void drohne::drohneLaden(int new_kapazitaet)
{
    batterie.setKapazitaet(batterie.getKapazitaet() + new_kapazitaet);

}
void drohne::restKapazitaet()
{
    std::cout<<"Restkapazität: "<< batterie.getKapazitaet();
}
void drohne::aktuellPosition()
{
    std::cout<<"Standort x: "<< drohnePos.getposition().x;
    std::cout<<"Standort y: "<< drohnePos.getposition().y;
    std::cout<<"Standort z: "<< drohnePos.getposition().z;
}

void drohne::verbrauch(int new_verbrauch)
{
    	 batterie.setKapazitaet((batterie.getKapazitaet() - (300* new_verbrauch)));
	 if(batterie.getKapazitaet()<0)
	 {
	 	drohnePos.setPosition(	drohnePos.getposition().x, drohnePos.getposition().y, 0);
		std::cout<<"Abgestürtzt";
		aktuellPosition();
	 }
}
drohne::drohne()
{
	batterie.setKapazitaet(0);
	drohnePos.setPosition(0,0,0);
}


