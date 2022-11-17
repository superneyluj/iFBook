#include <Revues.hpp>

Revues::Revues(const string iEditeur, const int iNombre_article): m_editeur(iEditeur), m_nombre_article(iNombre_article), Livre(&iAuteur, &iTitre, &iMaison_edition, &iResume, &iAnnee_publication, &iNombre_pages){}

Revues::~Revues() {}