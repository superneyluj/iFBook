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
> - Création de la base de données mysql 
> - <em><strong>lib à charger dans dev c++ </strong></em> : 
>> - Répértoires bibliothèques : 
>>> - C:\Program Files\MySQL\MySQL Server 8.0\lib<br>
>> - Répértoires d'inclusion : C:\Program Files\MySQL\MySQL Server 8.0\include\mysql
>>> - C:\Program Files\MySQL\MySQL Server 8.0\include<br>
>> - Linker : -lmysql
