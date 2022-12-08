#include <iostream>
#include <sqlite3.h>
#include <user.h>
#include <vector>
#include <datahandler.h>

#define DBFILE "testSqlite.db"

int main()
{
    int rc = 0;
    sqlite3 *dbHandle;
    std::string sqlText;
    char *zErrMsg = nullptr;
    std::vector<user> *users = new std::vector<user>();

    /**
     * Ouverture de la Bdd (ou création d'un fichier vide.
    */
    rc = sqlite3_open(DBFILE, &dbHandle);

    if (rc != SQLITE_OK)
    {
        std::cout << "Error opening database (rc = " << rc << ")" << std::endl;
        delete users; users = nullptr;
        return 1;
    }

    /**
     *  Creation de la table user. Il faut gérer l'existance de la table, sinon le programme fini en erreur si la
     * table existe déjà. Cette partie n'est pas implémentée ici.
    */
    sqlText = "create table user(" \
            "id integer primary key autoincrement," \
            "first_name text," \
            "last_name text);";

    rc = sqlite3_exec(dbHandle, sqlText.c_str(), nullptr, nullptr, &zErrMsg);

    if (rc != SQLITE_OK)
    {
        std::cout << "Error creating table (rc = " << rc << "): " << zErrMsg << std::endl;
        delete users; users = nullptr;
        return 2;
    }

    /**
     * Insertion de donnée d'exemple.
    */
    sqlText = "insert into user(" \
            "first_name, last_name)" \
            "values(\"Christophe\", \"Gattardi\");";

    rc = sqlite3_exec(dbHandle, sqlText.c_str(), nullptr, nullptr, &zErrMsg);

    if (rc != SQLITE_OK)
    {
        std::cout << "Error inserting into table." << zErrMsg << std::endl;
        delete users; users = nullptr;
        return 3;
    }

    sqlText = "insert into user(" \
            "first_name, last_name)" \
            "values(\"Julien\", \"Sicot\");";

    rc = sqlite3_exec(dbHandle, sqlText.c_str(), nullptr, nullptr, &zErrMsg);

    if (rc != SQLITE_OK)
    {
        std::cout << "Error inserting into table." << zErrMsg << std::endl;
        delete users; users = nullptr;
        return 3;
    }

    /**
     * Exécution du select avec les pointeurs sur la fonction de traitement des données (datahandler) et le conteneur
     * de données (ici un vecteur).
    */
    sqlText = "select * from user;";

    rc = sqlite3_exec(dbHandle, sqlText.c_str(), &datahandler, users, &zErrMsg);

    if (rc != SQLITE_OK)
    {
        std::cout << "Error selecting from table." << zErrMsg << std::endl;
        delete users; users = nullptr;
        return 4;
    }

    /**
     * Affichage du contenu du vecteur de résultat.
    */
    for (std::vector<user>::iterator it = users->begin() ; it != users->end(); ++it)
    {
        std::cout << "In main, id = " << (*it).id  << " first_name = " << (*it).first_name << " last_name = " << (*it).last_name << std::endl;
    }

    delete users; users = nullptr;
    return 0;
}
