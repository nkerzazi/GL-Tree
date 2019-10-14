#include <iostream>
#include <cstdlib>
#include "ArbreB.cpp"

using namespace std;

#ifndef ARBREB_H_INCLUDED
#define ARBREB_H_INCLUDED

class Arbre{

    private:

    struct Noeud{
        int cle;
        Noeud* gauche;
        Noeud* droite;
    };
    Noeud* root;

    void AjouterNoeudPrivee(int cle, Noeud* Ptr);
    void AfficherArbrePrivee(Noeud* Ptr);

    public:
        Arbre();
        Noeud* CreerFeuille(int cle);
        void AjouterNoeud(int cle);
        void AfficherArbre();
        //~Arbre();

};

#endif // ARBREB_H_INCLUDED
