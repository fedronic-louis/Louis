#include "carnivores.h"
#include"animal.h"
#include<iostream>
#include <string>

using namespace std;

Carnivores::Carnivores(int nb_prey,string predators, int food, string namePrey, int isFemale,int isMale,int  childByGeneration,int nb_population,int maxPopulation)
    : Animal(food, namePrey, isFemale,isMale,childByGeneration,nb_population,maxPopulation)// avoir dans les exos précédents il y a une démonstration

           //   ---------OBJECTIF--------
// coder l'appétit des carnivores de façon général
// Idée Faim ou Pas_Faim; si Faim -> Part à la chasse  (définir un taux de succes pour chasser) si réussi nb de population évolue sinon mort de l'individu.
{

    this->nb_prey=nb_prey;
    this->nb_population=nb_population; // est ce nécessaire car déclaré dans animal
    this->predators=predators;
}



int Carnivores ::goToHunt (int hungry,bool hunt,int nb_prey, int successRate,string predators)
{
   // Carnivores *carnivores= new Carnivores;
    hungry = rand() % 2;
    successRate=(nb_prey / nb_population);
    switch (hungry)
     {

        case 0:
        hunt=0;
        cout <<"I am full, I will rest"<< endl;

        break;


        case 1:
        hunt=1;
        //cout <<"Me"<< predators<< " am hungry, go to hunt !!"<< endl;
        if (hunt==1)
        {
            if (successRate>=1)
            {
                nb_prey=nb_prey-1;
                cout<<"Me : "<<predators<<" catch my food BON APPETIT!"<<endl;
                this->animalCross();// petite modif de dernière minute à faire attention
            }
            else
            {
                cout << "Predators : " << predators << " starving to death"<< endl;
                nb_population=nb_population-1;
            }
        }
        else {}// si je chasse pas j'ai aucune chance de mourir
        break;


    }
    return hungry;
}
