#ifndef ARBREB_CPP_INCLUDED
#define ARBREB_CPP_INCLUDED

#include <iostream>
#include <cstdlib>
#include "ArbreB.h"

using namespace std;

Arbre::Arbre(){
    root = NULL;
}

Arbre::Noeud* Arbre::CreerFeuille(int cle){
    Noeud* n = new Noeud;
    n->cle = cle;
    n->gauche = NULL;
    n->droite = NULL;
}

void Arbre::AjouterNoeud(int cle){
    AjouterNoeudPrivee(cle, root);
}

void Arbre::AjouterNoeudPrivee(int cle, Noeud* Ptr){

        if(root== NULL){
           CreerFeuille(cle);
        }
        else if (cle < Ptr->cle){

                if (Ptr->gauche !=NULL){
                    AjouterNoeudPrivee(cle, Ptr->gauche);
                }
                else {
                    Ptr->gauche = CreerFeuille(cle);
                }
        }
        // naviguer cote droit
        else if (cle > Ptr->cle) {
                if (Ptr->droite !=NULL){
                    AjouterNoeudPrivee(cle, Ptr->droite);
                }
                else {
                    Ptr->droite = CreerFeuille(cle);
                }
        }
        else {
            // la cle existe deja
            cout << "la cle : " << cle << "existe deja !!! \n";
        }
}

#endif // ARBREB_CPP_INCLUDED

