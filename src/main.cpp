#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>

#include "../include/CD.hpp"
#include "../include/Dlc.hpp"
#include "../include/Jeu_video.hpp"
#include "../include/Livre.hpp"
#include "../include/Revues.hpp"

using namespace std;

char HOST[] = "localhost";
char USER[] = "root";
char PASS[] = "root";

void mainMenu();
void loadingDatabase();

int main(int argc, char** argv) {

	loadingDatabase();
	mainMenu();
	
	return 0;
}

void loadingDatabase(){
	MYSQL* obj;
	
	bool ProgramIsOpened = true;
	
	//connection au serveur mysql
	
	if(!(obj=mysql_init(0))){
		cout << "l'objet mysql n'a pas été crée";
	}
	else{
		if(!mysql_real_connect(obj,HOST,USER,PASS,"iFbook",3306,NULL,0)){
			cout << "erreur dans les arguments pour l'initalisation de la bdd\n";
			cout << mysql_error(obj);
		}
		else{
			cout << "bdd chargee\n";
		}		
	}	
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
