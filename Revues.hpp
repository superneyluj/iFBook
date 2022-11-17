#ifndef __REVUES_HPP
#define __REVUES_HPP

#include <livre.hpp>
#include <iostream>

using namespace std;

class Revues: public Livre
{
    // Attributs

    string m_editeur;
    int m_nombre_article;


    // Méthodes

    public:
        Revues(const string iEditeur, const int iNombre_article);
        virtual ~Revues ();

};


#endif //__REVUES_HPP