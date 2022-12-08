#include <iostream>
#include <user.h>
#include <vector>

/**
 * @brief datahandler
 * @param ioData vecteur d'objet de type user utilisé pour passer le résultat du select au programme d'appel
 * @param argc nombre d'éléments retournés (=nbLignes*nbColonnes)
 * @param argv les éléments retournés
 * @param azColName le nom des colonnes
 * @return code de retour non géré dans l'exemple
 *
 * Lors de l'appel à une requête qui retourne des données, il faut mettre en place un mécanisme pour que la
 * librairie sqlite renvoie ces données à l'appeleant. La fonction sqlite3_exec prend donc 2 paramètres dédiés:
 * param n°3: pointeur sur la fonction de traitement.
 * param n°4: conteneur (ou autre "objet") servant à stocker les données retournées par la requête. Il est passé
 * comme 1er paramètre de cette fonction (datahandler).
 *
 */

int datahandler(void *ioData, int argc, char **argv, char **azColName) {

    std::vector<user> *data = (std::vector<user> *)ioData;
    user tmpUser;

    // Cette partie affiche le résultat de la requête sur stdout pour debug.
    for (int i = 0; i < argc; i++) {

        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }

    printf("\n");

    // Cette partie peuple le conteneur pour retourner les résultats à l'appelant.
    for (int i = 0; i < argc; i += 3)
    {
        tmpUser.id = argv[i] ? std::stoi(argv[i]) : 0;
        tmpUser.first_name = argv[i + 1] ? argv[i + 1] : "NULL";
        tmpUser.last_name = argv[i + 2] ? argv[i + 2] : "NULL";
        data->push_back(tmpUser);
    }

    return 0;
}
