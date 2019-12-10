#include "herbivores.h"
#include "animal.h"
#include <iostream>

using namespace std;

Herbivores::Herbivores(int food, string prey,int isFemale,int isMale,int childByGeneration,int nb_population,int maxPopulation)
    : Animal( food, prey, isFemale, isMale, childByGeneration, nb_population, maxPopulation)
{
    this->food=food;
    this->nb_population=nb_population;

}

void Herbivores:: harvest(int cycles)//objectif lier la récolte aux cycles
{

    enum harvest{/*semerCarote=0, pas_encoreCarote=4, */recolteCarote=8,/*bientotChou,semerChou=12, pas_encoreChou*/ recolteChou=20,/*bientotBanane,semerBanane=24, pas_encoreBanane*/ recolteBanane=32 };

    switch(cycles)
    {

       case 8:
       {
           food=food+200;
           cout <<"Recolte de carotte"<<endl;
           break;
       }
       case 20:
       {
           food=food+500;
           cout <<"Recolte de chou"<<endl;
           break;
       }
       case 32:
       {
           food=food+1000;
           cout <<"Recolte de banane"<<endl;
           break;
       }
    }
}
