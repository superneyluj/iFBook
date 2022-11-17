#ifndef __REVUES_HPP
#define __REVUES_HPP

#include <iostream>

using namespace std;

class CD
{
    // Attributs

    int m_duree;
    int m_nombre_de_pistes;
    string m_auteur;
    string m_maison_de_production;
    string m_titre;


    // Méthodes

    public:
        CD(const int &iDuree, const int &iNombre_de_pistes, const string &iAuteur, const string &iMaison_de_production, const string &iTitre);
        

};


#endif //__REVUES_HPP