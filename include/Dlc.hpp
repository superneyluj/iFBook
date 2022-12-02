#ifndef __DLC_HPP
#define __DLC_HPP

#include "../include/Jeu_video.hpp"
#include <iostream>

using namespace std;

class Dlc: public Jeu_video
{
    // Attributs

    string m_jeu_original;

    // Méthodes

    public:
        Dlc(const string &iJeu_original,const string &iTitre, const string &iPlateforme, const string &iPublic_legal,const string &iEditeur, const int &iDate_de_parution,const string &iResume);
        
};


#endif 
