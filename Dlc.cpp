#include "Dlc.hpp"

Dlc::Dlc(const string &iJeu_original,const string &iTitre, const string &iPlateforme, const string &iPublic_legal,const string &iEditeur, const int &iDate_de_parution,const string &iResume): 
	m_jeu_original(iJeu_original), 
	Jeu_video(iTitre, iPlateforme, iPublic_legal, iEditeur, iDate_de_parution, iResume)
	{}