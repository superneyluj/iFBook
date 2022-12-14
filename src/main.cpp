#include <iostream>
#include "sqlite3.h"

#include "../include/CD.hpp"
#include "../include/Dlc.hpp"
#include "../include/Jeu_video.hpp"
#include "../include/Livre.hpp"
#include "../include/Revues.hpp"

using namespace std;

const char* dbFile = "./iFBook.db";

void mainMenu();
void creatingDatabase();
void rechercheMenu();
void effacementBdd();
void effacementElement();
int callback(void *NotUsed, int argc, char **argv, char **azColName);

int main() {

	creatingDatabase();
	sqlite3 *db;
	string query;
	char *zErrMsg = 0;

	sqlite3_open("iFBook.db", &db);
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);
	mainMenu();
	
	return 0;
}

void creatingDatabase(){
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	string sql;

   rc = sqlite3_open("iFBook.db", &db);

   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   sql = 	"create table Livre(" \
   			"id int primary key ," \
   			"m_auteur text," \
   			"m_titre_livre text," \
   			"m_maison_edition text,"\
   			"m_resume text,"\
   			"m_anne_publication text,"\
   			"m_nombre_pages text);";

   	
   	sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);

   	sql = 	"create table Revues(" \
   			"id int primary key ," \
   			"m_auteur text," \
   			"m_titre_revues text," \
   			"m_maison_edition text,"\
   			"m_resume text,"\
   			"m_anne_publication text,"\
   			"m_nombre_pages text,"\
   			"m_nombre_article);";

   	
   	sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);

   	sql = 	"create table Jeu_video(" \
   			"id int primary key ," \
   			"m_titre_jeu_video text," \
   			"m_plateforme text,"\
   			"m_public_legal text,"\
   			"m_editeur text,"\
   			"m_date_de_parution text,"\
   			"m_resume text);";
   			
   	
   	sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);
	
   	sql = 	"create table CD(" \
   			"id int primary key ," \
   			"m_duree text," \
   			"m_nombre_de_pistes text,"\
   			"m_auteur text,"\
   			"m_maison_de_production text,"\
   			"m_titre_cd text);";

	sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);

   	sql = 	"create table DLC(" \
   			"id int primary key ," \
   			"m_titre_dlc text," \
   			"m_plateforme text,"\
   			"m_public_legal text,"\
   			"m_editeur text,"\
   			"m_date_de_parution text,"\
			"m_resume text,"\
			"m_jeu_original);";

	sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);

	sqlite3_close(db);

}

void mainMenu(){

    string choice;
	string nom_recherche;
	string buffer;
	sqlite3 *db;
	string query;
	char *zErrMsg = 0;

	system("cls");

    cout << "\n\n\n\t\t////////////////////////////// iFBook \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n";
    cout << "Rappel des commandes :\n";
    cout << "\t -> BYE : quitter le programme \n";
    cout << "\t -> ADD type : lancer la procedure permettant de creer une nouvelle ressource en fonction du type specifie en parametre. \n";
    cout << "\t -> SEARCH  string : permet de rechercher dans la base de donnees les documents contenant la chaine de caracteres specifiee en parametre.\n";
    cout << "\t -> CLEAR  : reinitialise la base de donnee.\n";
    cout << "\t -> LIST  : afficher l'integralite du contenu de la mediatheque.\n";
    cout << "\t -> DELETE : cette methode permet de supprimer une ressource particuliere appartenant a la mediatheque.\n\n";
    cout << "Que voulez vous faire ?\n";

    std::getline(std::cin,choice);

    if(choice=="BYE"){
		exit(0);
    }
    else if(choice == "ADD"){

    }
    else if (choice == "SEARCH"){
		rechercheMenu();
    }
    else if(choice == "CLEAR"){
		system("cls");
		effacementBdd();
    }
    else if(choice == "LIST"){
		sqlite3_open("iFBook.db", &db);
		query ="SELECT m_titre_livre,m_titre_revues,m_titre_jeu_video,m_titre_cd ,m_titre_dlc FROM Livre,Revues,Jeu_video,CD,DLC;";
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);
		cout << "Appuyez sur Entree pour revenir au menu precedent\n";
		std::getline(std::cin,buffer);
		mainMenu();
    }
    else if(choice == "DELETE"){
		effacementElement();
    }
}

int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    
    NotUsed = 0;

	printf("\n");
    
    for (int i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    
    printf("\n");
    
    return 0;
}

void rechercheMenu(){

	string recherche;
	string query;
	string lowerquery;
	sqlite3 *db;
	char *zErrMsg = 0;
	string buffer;

	sqlite3_open("iFBook.db", &db);

	system("cls");


	cout << "Quelle est votre recherche ? :\n";
	std::getline(std::cin,recherche);

	query = "SELECT * FROM Livre WHERE m_titre_livre =\"" + recherche+"\";";	
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);
	
	query = "SELECT * FROM Revues WHERE m_titre_revues =\"" + recherche+"\";";	
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

	query = "SELECT * FROM Jeu_video WHERE m_titre_jeu_video =\"" + recherche+"\";";	
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

	query = "SELECT * FROM CD WHERE m_titre_cd =\"" + recherche+"\";";	
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

	query = "SELECT * FROM DLC WHERE m_titre_dlc =\"" + recherche+"\";";	
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

	cout << "Recherche terminee, appuyez sur la touche entree pour revenir au menu principal";
	std::getline(std::cin,buffer);
	mainMenu();


}

void effacementBdd(){

	sqlite3 *db;

	string buffer;
	string choix;
	string query;
	char *zErrMsg = 0;

	cout << "Etes vous sur de vouloir effacer la base de donnes ? y/n\n";
	std::getline(std::cin,choix);
	if(choix == "y"){

		system("cls");
		sqlite3_open("iFBook.db", &db);

		query = "TRUNCATE FROM Livre;";
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);
		query = "TRUNCATE FROM Jeu_video;";
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);
		query = "TRUNCATE FROM CD;";
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);
		query = "TRUNCATE FROM DLC;";
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);
		query = "TRUNCATE FROM Revues;";
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

		sqlite3_close(db);

		cout << "Base de donnees effacee, appuyer sur Entree touche pour revenir au menu precedent";
		std::getline(std::cin,buffer);
		mainMenu();
	}
	else if(choix == "n"){
		cout << "Appuyez sur Entree pour revenir au menu precedent\n";
		std::getline(std::cin,buffer);
		mainMenu();
	}
	else{
		cout << "Choix invalide \n";
		effacementBdd();
	}

}

void effacementElement(){

	sqlite3 *db;

	char *zErrMsg = 0;
	string buffer;
	string choix_effacement;
	string query;
	string choix;

	system("cls");

	sqlite3_open("iFBook.db", &db);

	cout << "Quel est le titre de l'element que vous voulez effacer ?\n";
	std::getline(std::cin,choix_effacement);

	query = "SELECT * FROM Livre WHERE m_titre_livre =\"" + choix_effacement+"\";";	
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);
	
	query = "SELECT * FROM Revues WHERE m_titre_revues =\"" + choix_effacement+"\";";	
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

	query = "SELECT * FROM Jeu_video WHERE m_titre_jeu_video =\"" + choix_effacement+"\";";	
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

	query = "SELECT * FROM CD WHERE m_titre_cd =\"" + choix_effacement+"\";";	
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

	query = "SELECT * FROM DLC WHERE m_titre_dlc =\"" + choix_effacement+"\";";	
	sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

	cout << "Etes vous sur de vouloir cet element ? y/n\n";
	std::getline(std::cin,choix);

	if(choix == "y"){

		query = "DELETE FROM Livre WHERE m_titre_livre =\"" + choix_effacement+"\";";	
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);
	
		query = "DELETE FROM Revues WHERE m_titre_revues =\"" + choix_effacement+"\";";	
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

		query = "DELETE FROM Jeu_video WHERE m_titre_jeu_video =\"" + choix_effacement+"\";";	
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);
		
		query = "DELETE FROM CD WHERE m_titre_cd =\"" + choix_effacement+"\";";	
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

		query = "DELETE FROM DLC WHERE m_titre_dlc =\"" + choix_effacement+"\";";	
		sqlite3_exec(db, query.c_str(), callback, 0, &zErrMsg);

		cout << "Titre efface, appuyez sur entree pour revenir au menu principal\n";
		std::getline(std::cin,buffer);
		mainMenu();

	}
	else if(choix == "n"){

		cout << "Appuyez sur Entree pour revenir au menu precedent\n";
		std::getline(std::cin,buffer);
		mainMenu();
	}
	else{
		cout << "Choix invalide \n";
		effacementElement();
	}

}
