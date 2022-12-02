#include <iostream>
#include "sqlite3.h"

#include "../include/CD.hpp"
#include "../include/Dlc.hpp"
#include "../include/Jeu_video.hpp"
#include "../include/Livre.hpp"
#include "../include/Revues.hpp"

using namespace std;



void mainMenu();
void creatingDatabase();
int callback(void *NotUsed, int argc, char **argv, char **azColName);

int main() {

	creatingDatabase();
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
   			"m_titre text," \
   			"m_maison_edition text,"\
   			"m_resume text,"\
   			"m_anne_publication text,"\
   			"m_nombre_pages text);";

   	sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);

   	sql = 	"create table Revues(" \
   			"id int primary key ," \
   			"m_auteur text," \
   			"m_titre text," \
   			"m_maison_edition text,"\
   			"m_resume text,"\
   			"m_anne_publication text,"\
   			"m_nombre_pages text,"\
   			"m_editeur text,"\
   			"m_nombre_article);";

   	sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);


}

void mainMenu(){

    string choice;

    cout << "\t\t////////////////////////////// iFBook \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n";
    cout << "Rappel des commandes :\n";
    cout << "\t -> BYE : quitter le programme \n";
    cout << "\t -> ADD type : lancer la procedure permettant de creer une nouvelle ressource en fonction du type specifie en parametre. \n";
    cout << "\t -> SEARCH  string : permet de rechercher dans la base de donnees les documents contenant la chaine de caracteres specifiee en parametre.\n";
    cout << "\t -> CLEAR  : reinitialise la base de donnee.\n";
    cout << "\t -> LIST  : afficher l'integralite du contenu de la mediatheque.\n";
    cout << "\t -> DELETE id : cette methode permet de supprimer une ressource particuliere appartenant a la mediatheque.\n\n";
    cout << "Que voulez vous faire ?\n";

    std::getline(std::cin,choice);

    if(choice=="BYE"){
        cout << "BYE OK";
    }
    else if(choice == "ADD"){

    }
    else if (choice == "SEARCH"){

    }
    else if(choice == "CLEAR"){

    }
    else if(choice == "LIST"){

    }
    else if(choice == "DELETE"){

    }
}

// Create a callback function  
int callback(void *NotUsed, int argc, char **argv, char **azColName){


    // Return successful
    return 0;
}