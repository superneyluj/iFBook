#include <iostream>
#include <vector>

using namespace std;


/**
 * @brief : Fonction qui permet de spliter un string avec un délimiteur défini
 * 
 * @param str : string que l'on veut split
 * @param del : delimiteur du string
 * @return vector<string> :
 */
vector<string> split(string str, char del){

	// Variables
	string temp = "";
    vector<string> resultVector;

	for(int i=0; i<(int)str.size(); i++){
		// On parcours le string, si le caractère n'est pas le délimiteur on l'ajoute au string temporaire
		// Sinon, on ajoute le string temporaire dans le vecteur de retour et on vide le string temp
		if(str[i] != del){
			temp += str[i];
		}
		else{
			resultVector.push_back(temp);
			temp = "";
		}
	}
	resultVector.push_back(temp);

	return resultVector;
}

int main() {

    string str = ""; // string to be split
    cout << "> ";
    std::getline(cin,str);
	char del = ' '; // delimiter around which string is to be split
	//cout << tab[1] << endl;
	
	vector<string> res = split(str, del);

	return 0;
}
