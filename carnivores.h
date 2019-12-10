#ifndef CARNIVORES_H
#define CARNIVORES_H
#include "animal.h"
#include <string>
using namespace std;
// coder l'appétit des carnivores de façon général
// Idée Faim ou Pas_Faim; si Faim -> Part à la chasse  (définir un taux de succes pour chasser) si réussi nb de population évolue sinon mort de l'individu.
class Carnivores: public Animal
{
public:
    Carnivores(int nb_prey,string predators, int food, string namePrey, int isFemale,int isMale,int  childByGeneration,int nb_population,int maxPopulation);
    int goToHunt (int hungry,bool hunt,int nb_prey,int successRate,string predators);
protected:
    int hungry;
    bool hunt;
    int successRate;
    int nb_prey;
    string predators;

};

#endif // CARNIVORES_H
