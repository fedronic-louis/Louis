#include "animal.h"
#include "carnivores.h"
#include "snake.h"
#include "cat.h"
#include "poules.h"
#include "herbivores.h"
#include "pucerons.h"

#include <string>
#include <iostream>


using namespace std;

int main()
{

    int catFood;
    int cycles=0;


    Cat *cat= new Cat();
    Snake *snake= new Snake();
    int snakePopulation=snake->animalCross();
    int catPopulation=cat->animalCross();

    int snakeFood=catPopulation;


    for (catFood=100; catFood>0 && snakeFood>=0; catFood=catFood-(catPopulation))

    {
        cycles=cycles+4;


        if (cat->goToHunt(0,0,catFood, 1," Chat ")!=0 && snake->goToHunt(0,0,catFood, 1," Serpent "))
      {
            //cat->getNumberFood(catFood);

           catPopulation=cat->animalCross();
           snakePopulation=snake->animalCross();

                if (catPopulation>=500)
                {
                    catPopulation=cat->dividePopulation();


                }
                cout<<"Les chats sont trop nombreux, "<<catPopulation<<" de la population s'en vont ailleurs "<<endl;

                if (snakePopulation>=catPopulation)
                {
                    snakePopulation=snake->dividePopulation();
                    cout<<"Les serpents sont trop nombreux, "<<snakePopulation<<" de la population s'en vont ailleurs "<<endl;
                    catFood=catFood+10;
                }
                 cout<<"Les serpents sont trop nombreux, "<<snakePopulation<<" de la population s'en vont ailleurs "<<endl;

        }



        cout <<"Au bout de " << cycles << " mois et de " << catFood << " nourritures pour chat, on dénombre "<<catPopulation<< " chats et" <<snakePopulation<<" serpent(s)\n"<< endl;
    }



    return 0;
}


