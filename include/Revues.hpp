#ifndef __REVUES_HPP
#define __REVUES_HPP

#include "../include/Livre.hpp"
#include <iostream>

using namespace std;

class Revues: public Livre
{
    // Attributs

    int m_nombre_article;


    // M�thodes

    public:
        Revues(const int &iNombre_article_revue, const string &iAuteur_revue, const string &iTitre_revue, const string &iMaison_edition_revue, const string &iResume_revue, const int &iAnnee_publication_revue, const int &iNombre_pages_revue);
        

};


#endif //__REVUES_HPP
