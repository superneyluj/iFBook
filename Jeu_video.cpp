#include "Jeu_video.hpp"

Jeu_video::Jeu_video(const string &iTitre, const string &iPlateforme, const string &iPublic_legal,const string &iEditeur, const int &iDate_de_parution,const string &iResume):
		m_titre(iTitre),
		m_plateforme(iPlateforme),
		m_public_legal(iPublic_legal),
		m_editeur(iEditeur),
		m_date_de_parution(iDate_de_parution),
		m_resume(iResume)
		{}
