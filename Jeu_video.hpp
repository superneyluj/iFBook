#ifndef __JEU_VIDEO_HPP
#define __JEU_VIDEO_HPP

#include<iostream>

using namespace std;

class Jeu_video {

	string m_titre;
	string m_plateforme;
	string m_public_legal;
	string m_editeur;
	string m_date_de_parution;
	string m_resume;

	public:
		Jeu_video(const string &iTitre, const string &iPlateforme, const string &iPublic_legal,const string &iEditeur, const int &iDate_de_parution,const string &iResume);
};

#endif 