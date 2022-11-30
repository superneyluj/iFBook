#ifndef __LIVRE_HPP
#define __LIVRE_HPP

#include<iostream>

using namespace std;

class Livre {

	//attribut de la classe livre
	string m_auteur;
	string m_titre;
	string m_maison_edition;
	string m_resume;
	int m_annee_publication;
	int m_nombre_pages;

	//constructeur de la classe livre
	public:
		Livre(const string &iAuteur, const string &iTitre, const string &iMaison_edition, const string &iResume, const int &iAnnee_publication, const int &iNombre_pages);


};

#endif

