#include "Revues.hpp"

Revues::Revues(const string &iEditeur, const int &iNombre_article, const string &iAuteur, const string &iTitre, const string &iMaison_edition, const string &iResume, const int &iAnnee_publication, const int &iNombre_pages): 
	m_editeur(iEditeur), 
	m_nombre_article(iNombre_article), 
	Livre(iAuteur, iTitre, iMaison_edition, iResume, iAnnee_publication, iNombre_pages)
	{}

