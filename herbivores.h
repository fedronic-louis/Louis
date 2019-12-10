#ifndef HERBIVORES_H
#define HERBIVORES_H
#include"animal.h"

class Herbivores: public Animal
{
public:
    Herbivores(int food, string prey,int isFemale,int isMale,int childByGeneration,int nb_population,int maxPopulation);
    void harvest(int cycles);
private:
    int weed;
};

#endif // HERBIVORES_H
