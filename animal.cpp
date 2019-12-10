#include "animal.h"
#include <time.h>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
/**
 * @brief Animal::Animal
 * @param food= nourriture général des animaux
 * @param namePrey= nom de la proie de celui qui heritera de la  classe animal
 * @param isFemale= individu femelle dans la population
 * @param isMale= individu femelle dans la population
 * @param childByGeneration= individu issu de la présence d'individu male et femelle
 * @param nb_population=nombre de population
 * @param maxPopulation=nombre maximum de population
 */
Animal::Animal(int food,string namePrey,int isFemale,int isMale,int childByGeneration,int nb_population,int maxPopulation)
{

    this->nb_population=nb_population;
    this->namePrey=namePrey;
    this->isMale=isMale;
    this->isFemale=isFemale;
    this->food=food;
    this->childByGeneration=childByGeneration;
    this->maxPopulation=maxPopulation;

}
/**
 * @brief Animal::gender= défini le genre dans une population
 * @return
 */
int Animal::gender() // fonction qui initialise les deux variable male et femelle !

{
    int sexResult = rand() % 2;


    switch (sexResult)
     {

        case 0:
        this->isFemale=1;
        cout <<"I am a Woman"<< endl;
        break;


        case 1:
        this->isMale=1;
        cout <<"I am a Man"<< endl;
        break;
    }
    return sexResult;
}
/**
 * @brief Animal::animalCross= décrit la croissance générale de la population animale
 * @return
 */
int Animal:: animalCross() // parce que cette fonction retourne une valeur numérique cf "case 2:" que je met en entré un type en lien avec ceci : int dans ce cas
{

    if (this->isFemale>0 && this->isMale >0)
        {
            this->nb_population+= (this->nb_population/2)* this->childByGeneration; // c'est voulu ce qui est contenue dans le warning
    //return 0;

        }
    return this->nb_population;
}
int Animal::getNumberFood () // va falloir lier le décompte i aux proies dans les prochaines étapes
{
    // quantité de nourriture contenue dans l'état du jeu
    food--;
        if (food<=0)
        {
            cout<<"Game over " << food << " is finished"<< endl;
        }
        else
        {
            cout << "There are "<< food <<endl;
        }

    return food;
}
//fonction qui retourne une population en constante évolution et après réflexion je me suis inspiré de cette fonction pour modifier la fonction animalCross
/*int Animal::growPopulation()
{
    this->nb_population = this->animalCross(this->nb_population,this->childByGeneration);
    return this->nb_population;
}*/
/**
 * @brief Animal::dividePopulation= methode pour eliminer la population en excès
 * @return
 */
int Animal::dividePopulation()

{

        this->nb_population= (this->nb_population/2/4);


    return this->nb_population;

}
