#ifndef ARBREB_H_INCLUDED
#define ARBREB_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include "ArbreB.cpp"

class Arbre{

    struct noeud{
        int cle;
        node* gauche;
        node* doite;
    };
    node* root;

    private:

    public:
        //Arbre();
        //~Arbre();

};

#endif // ARBREB_H_INCLUDED
