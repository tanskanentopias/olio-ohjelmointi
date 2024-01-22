#include <iostream>
#include "teht2.h"

using namespace std;


/*int game(int maxnum);
int arvauksienMäärä = 0;
int maxnum;*/


int main()
{
    Game gameObject(10);
    gameObject.play();
    return 0;









    /*cout << "Anna maximi numero: ";
    cin >> maxnum;

    game(maxnum);
    cout << endl;
    cout << "OIKEIN!" << endl;
    cout << "Arvauksien maara oli: " << arvauksienMäärä << endl;


    return 0;*/
}



/*int game(int maxnum){

    srand(time(NULL));

    int luku = 0;
    int satLuku = rand()%maxnum+1;





    while(luku != satLuku){
        //satLuku = rand()%maxnum+1;
        arvauksienMäärä++;
        cout << "Arvaa satunnainen luku valilta 1-" << maxnum << ": ";
        cin >> luku;
        cout << endl;

        if(luku>maxnum){
            cout << "Antamasi luku on liian suuri! " << "Yrita uudestaan!" << endl;
        }

        if(luku<1){
            cout << "Antamasi luku on liian pieni! " << "Yrita uudestaan!" << endl;
        }


        if(luku>satLuku && luku<=maxnum){

            cout << "Arvaamasi luku: " << luku << " On suurempi kuin satunnainenluku. " << endl;
            cout << "Yrita uudestaan!" << endl << endl;
        }

        if(luku<satLuku && luku>0){

            cout << "Arvaamasi luku: " << luku << " On pienempi kuin satunnainenluku. "<< endl;
            cout << "Yrita uudestaan!" << endl << endl;
        }

        else if(luku==satLuku && luku>0 && luku<=maxnum){

            return arvauksienMäärä;


        }


    }

    return arvauksienMäärä;
}*/
