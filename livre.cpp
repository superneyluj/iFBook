#include"Livre.hpp"

Livre::Livre(const string &iAuteur, const string &iTitre, const string &iMaison_edition, const string &iResume, const int &iAnnee_publication, const int &iNombre_pages):
		m_auteur(iAuteur),
		m_titre(iTitre),
		m_maison_edition(iMaison_edition),
		m_resume(iResume),
		m_annee_publication(iAnnee_publication),
		m_nombre_pages(iNombre_pages)
		{}