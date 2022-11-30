#include <iostream>
//#include <windows.h>  
using namespace std;


void Menu_Principal();

int main(){

    Menu_Principal();
    return 0;

}

void Menu_Principal(){

    string choix;

    cout << "\t\t////////////////////////////// iFBook \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n";
    cout << "Rappel des commandes :\n";
    cout << "\t -> BYE : quitter le programme \n";
    cout << "\t -> ADD type : lancer la procedure permettant de creer une nouvelle ressource en fonction du type specifie en parametre. \n";
    cout << "\t -> SEARCH  string : permet de rechercher dans la base de donnees les documents contenant la chaine de caracteres specifiee en parametre.\n";
    cout << "\t -> CLEAR  : reinitialise la base de donnee.\n";
    cout << "\t -> LIST  : afficher l'integralite du contenu de la mediatheque.\n";
    cout << "\t -> DELETE id : cette methode permet de supprimer une ressource particuliere appartenant a la mediatheque.\n\n";
    cout << "Que voulez vous faire ?\n";

    std::getline(std::cin,Choix);

    if(choix=="BYE"){
        cout << "BYE OK";
    }
    else if(choix == "ADD"){

    }
    else if (choix == "SEARCH"){

    }
    else if(choix == "CLEAR"){

    }
    else if(choix == "LIST"){

    }
    else if(choix == "DELETE"){

    }
}
