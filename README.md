<p>Projet iFBook structure :<br>

#### L’application devra fournir à l’utilisateur les fonctionnalités suivantes:

>- Permettre l’ajout et la suppression de médias dans le système de gestion de la médiathèque. <br>
>- Permettre la consultation des ressources de la médiathèqueliste des ressources ou informations détaillées relatives à une ressource).<br>
>- Permettre de sauvegarder et de charger le contenu de la médiathèque à partir d’un fichier.<br>
>- Permettre de rechercher un média à partir d’une information (son titre, le nom de l’auteur, etc.), ces recherches pourront être incrémentales possibilité de faire une recherche uniquement sur les résultats de la recherche précédente).<br>
>- Permettre de réserver, emprunter ou rendre une ressource.<br>

#### L’application doit permettre de mémoriser toutes les ressources disponibles dans une médiathèque classique. Pour cela nous allons devoir mémoriser les informations issues de différents types de supports :livres, revues, CD, DVD, VHS, etc. L’ensemble de ces différentes ressources sont décrites à l’aide d’informations dépendant de leur type. Une liste non exhaustive des informations relatives aux différents types de ressources est fourni ci-dessous :

>- Des livres : un livre est écrit par un auteur et publié durant une année précise. Il est composé de N pages et appartient à une certaine collection. De plus un livre possède un titre et il peut posséder un résumé.<br>
>- Des revues(classe héritée de la classe livre) : une revue possède les mêmes caractéristiques que les livres sauf qu’elle possède en plus un éditeur et un ainsi qu’un attribut spécifiant le nombre d’articles contenus dedans. Pour chaque revue on pourra mémoriser le nom des articles contenus afin d’autoriser leur indexation.<br>
>- Des CD : un CD est un support musical qui possède une durée, un nombre de pistes, un auteur, une maison de production et un titre.<br>
>- Des DVD : un DVD est un support vidéo similaire et possède en plus une information spécifiant le nombre de pistes (ou chapitres) qu’il contient.<br>
>- Des jeux vidéos : Support vidéoludique, qui possède un titre, plateforme, public légal, éditeur, date de parution et un résumé
>- DLC : c'est un contenu additionnel d'un jeu vidéo qui possède un le titre du jeu original,titre, plateforme, public légal, éditeur, date de parution


#### Les interactions entre l’homme et la machine seront réalisées mode ligne de commandes afin de limiterla difficulté. Voici la liste des commandes que devra supporter votre application :

>- BYE : lorsque l’utilisateur lance cette commande, il demande simplement à quitter votre application.Dans ce cas 
>là,vous devez toutsimplement fermer proprement votre outil (dans le sens destruction des ressources allouées).
>- ADD type : cette commande lancera la procédure permettant de créer une nouvelle ressource en fonction du type spécifié en paramètre.
>- SEARCH chaine : cette fonction permet de rechercher dans la base de données les documents
>contenant la chaîne de caractères spécifiée en paramètre. 
>- CLEAR : cette commande permet de réinitialiser la base de données.
>- LIST : cette fonction permet d’afficher de manière compacte les données contenues dans la base de
>données. Si une recherche a été lancée, alors cette commande ne doit afficher que les résultats de la
>recherche précédemment lancée.
>- SHOW id : cette fonction doit permettre d’afficher les informations détaillées sur une ressource
>précise contenue dans la médiathèque. Le paramètre passé lors de l’appel de la procédure utilise un
>identifiant unique que doit posséder toute ressource appartenant à la médiathèque 
>- DELETE id : cette méthode permet de supprimer une ressource particulière appartenant à la
>médiathèque.
>- RESET : cette dernière méthode permet de supprimer toutes les ressources contenues dans la
>bibliothèque


#### Séance du 17 novembre
> - Création de toutes les classes

#### Séance du 28 novembre
> - Création de la fonction de lecture en ligne de commande

#### Séance du 30 novembre
> <ul>
> <li>Création de la base de données mysql</li>
> <li><em><strong>lib à charger dans dev c++ </strong></em></li>
> <ul>
> <li>Répértoires bibliothèques :</li>
> <ul> 
> <li>C:\Program Files\MySQL\MySQL Server 8.0\lib</li>
> </ul>
> </ul>
> <ul>
> <li>Répértoires d'inclusion : </li> 
> <ul>
> <li>C:\Program Files\MySQL\MySQL Server 8.0\include\mysql</li>
> <li>C:\Program Files\MySQL\MySQL Server 8.0\include</li>
> </ul>
> <li>Linker : -lmysql</li>
> </ul>
> </ul>

Erreur : 
.\CppSQLite3.cpp: In member function 'void CppSQLite3Binary::setEncoded(const unsigned char*)':
.\CppSQLite3.cpp:204:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  204 |                                                                 "Cannot allocate memory",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'const unsigned char* CppSQLite3Binary::getBinary()':
.\CppSQLite3.cpp:238:73: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  238 |                                                                         "Cannot decode binary",
      |                                                                         ^~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'unsigned char* CppSQLite3Binary::allocBuffer(int)':
.\CppSQLite3.cpp:271:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  271 |                                                                 "Cannot allocate memory",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'const char* CppSQLite3Query::fieldValue(int)':
.\CppSQLite3.cpp:373:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  373 |                                                                 "Invalid field index requested",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'const unsigned char* CppSQLite3Query::getBlobField(int, int&)':
.\CppSQLite3.cpp:475:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  475 |                                                                 "Invalid field index requested",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'int CppSQLite3Query::fieldIndex(const char*)':
.\CppSQLite3.cpp:522:57: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  522 |                                                         "Invalid field name requested",
      |                                                         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'const char* CppSQLite3Query::fieldName(int)':
.\CppSQLite3.cpp:534:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  534 |                                                                 "Invalid field index requested",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'const char* CppSQLite3Query::fieldDeclType(int)':
.\CppSQLite3.cpp:549:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  549 |                                                                 "Invalid field index requested",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'int CppSQLite3Query::fieldDataType(int)':
.\CppSQLite3.cpp:564:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  564 |                                                                 "Invalid field index requested",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3Query::checkVM()':
.\CppSQLite3.cpp:626:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  626 |                                                                 "Null Virtual Machine pointer",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'const char* CppSQLite3Table::fieldValue(int)':
.\CppSQLite3.cpp:725:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  725 |                                                                 "Invalid field index requested",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'const char* CppSQLite3Table::fieldValue(const char*)':
.\CppSQLite3.cpp:751:57: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  751 |                                                         "Invalid field name requested",
      |                                                         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'const char* CppSQLite3Table::fieldName(int)':
.\CppSQLite3.cpp:855:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  855 |                                                                 "Invalid field index requested",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3Table::setRow(int)':
.\CppSQLite3.cpp:870:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  870 |                                                                 "Invalid row index requested",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3Table::checkResults()':
.\CppSQLite3.cpp:883:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
  883 |                                                                 "Null Results pointer",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3Statement::bind(int, const char*)':
.\CppSQLite3.cpp:1002:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
 1002 |                                                                 "Error binding string param",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3Statement::bind(int, int)':
.\CppSQLite3.cpp:1016:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
 1016 |                                                                 "Error binding int param",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3Statement::bind(int, double)':
.\CppSQLite3.cpp:1030:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
 1030 |                                                                 "Error binding double param",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3Statement::bind(int, const unsigned char*, int)':
.\CppSQLite3.cpp:1045:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
 1045 |                                                                 "Error binding blob param",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3Statement::bindNull(int)':
.\CppSQLite3.cpp:1059:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
 1059 |                                                                 "Error binding NULL param",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3Statement::checkDB()':
.\CppSQLite3.cpp:1155:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
 1155 |                                                                 "Database not open",
      |                                                                 ^~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3Statement::checkVM()':
.\CppSQLite3.cpp:1166:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
 1166 |                                                                 "Null Virtual Machine pointer",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3DB::close()':
.\CppSQLite3.cpp:1233:73: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
 1233 |                                                                         "Unable to close database",
      |                                                                         ^~~~~~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'int CppSQLite3DB::execScalar(const char*, int)':
.\CppSQLite3.cpp:1313:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
 1313 |                                                                 "Invalid scalar query",
      |                                                                 ^~~~~~~~~~~~~~~~~~~~~~
.\CppSQLite3.cpp: In member function 'void CppSQLite3DB::checkDB()':
.\CppSQLite3.cpp:1362:65: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
 1362 |                                                                 "Database not open",
      |
