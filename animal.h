#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal
{
public:
    Animal(int food, string prey,int isFemale,int isMale,int childByGeneration,int nb_population,int maxPopulation);
    int gender();
    int animalCross();
    int getNumberFood ();
    int growPopulation(void);
    int dividePopulation();
protected:
    int food;
    string namePrey;
    int isFemale;
    int isMale;
    int childByGeneration;
    int nb_population;
    int maxPopulation;

};

#endif // ANIMAL_H
