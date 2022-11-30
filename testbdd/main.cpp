#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>

using namespace std;

char HOST[] = "localhost";
char USER[] = "root";
char PASS[] = "root";

int main(int argc, char** argv) {
	
	MYSQL* obj;
	
	bool ProgramIsOpened = true;
	
	//connection au serveur mysql
	
	if(!(obj=mysql_init(0))){
		cout << "l'objet mysql n'a pas été crée";
	}
	else{
		if(!mysql_real_connect(obj,HOST,USER,PASS,"iFbook",3306,NULL,0)){
			cout << "erreur dans les arguments pour l'initalisation de la bdd";
			cout << mysql_error(obj);
		}
		else{
			cout << "bdd chargee";
		}		
	}	
	return 0;
}
