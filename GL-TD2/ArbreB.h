#include <iostream>
#include <cstdlib>

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
    Noeud* GetNoeudPrivee(int cle, Noeud* Ptr);
    int   TrouverPlusPetiteClePrivee(Noeud* Ptr);

    public:
        Arbre();
        Noeud* CreerFeuille(int cle);
        void AjouterNoeud(int cle);
        void AfficherArbre();
        Noeud* GetNoeud(int cle);
        int   GetCleRoot();
        void  AfficherEnfants(int cle);
        int   TrouverPlusPetiteCle();

};

#endif // ARBREB_H_INCLUDED
