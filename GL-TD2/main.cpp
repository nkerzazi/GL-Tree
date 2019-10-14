#include <iostream>
#include <cstdlib>
#include "ArbreB.h"

using namespace std;

int main() {

    int MonTableau [16]={51, 77, 22, 5, 16, 33, 65, 53, 15, 101, 84, 3, 4, 71, 88, 81};
    Arbre arbre;

     cout << "insertion des elements \n" ;
    for (int i =0; i < 16 ; i++){
        arbre.AjouterNoeud(Montableau[i]);
    }

    arbre.AfficherArbre();

    return 0;
}
