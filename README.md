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


#### Les interactions entre l’homme et la machine seront réalisées mode ligne de commandes afin de limiterla difficulté. Voici la liste des commandes que devra supporter votre application :

- BYE : lorsque l’utilisateur lance cette commande, il demande simplement à quitter votre application.Dans ce cas là, vous devez tout simplement fermerproprement votre outil (dans le sensdestruction des ressources allouées).– ADD type : cette commande lancera la procédure permettant de créer une nouvelle ressource enfonction du type spécifié en paramètre.– LOAD filename : cette commande doit permettre à l’utilisateur de charger un fichier un fichier
contenant les ressources disponibles dans la médiathèque. La contenu de ce fichier viendra remplacer les données actuellement chargées dans l’outil.– SAVE filename : cette commande permet à l’utilisateur de sauvegarder les données actuellementdans l’outil dans le fichier dont le nom est spécifié en paramètre. Le format de sauvegarde des
données est laissé à votre discrétion.
- SEARCH chaine : cette fonction permet de rechercher dans la base de données les documents
contenant la chaîne de caractères spécifiée en paramètre. Les résultats issus de la recherche remplaceront
temporairement la base de données courante pour faire en sorte que si l’utilisateur lance
une seconde recherche elle ne s’appliquera que sur les résultats de la première recherche (recherche
incrémentale).
- CLEAR : cette commande permet de réinitialiser la base de données courante après une recherche.
Si l’utilisateur emploie cette commande après avoir effectué une recherche alors, les résultats sont
détruits et la future recherche s’appliquera à l’ensemble des ressources disponibles dans la médiathèque.
- LIST : cette fonction permet d’afficher de manière compacte les données contenues dans la base de
données. Si une recherche a été lancée, alors cette commande ne doit afficher que les résultats de la
recherche précédemment lancée.
- SHOW id : cette fonction doit permettre d’afficher les informations détaillées sur une ressource
précise contenue dans la médiathèque. Le paramètre passé lors de l’appel de la procédure utilise un
identifiant unique que doit posséder toute ressource appartenant à la médiathèque (identifiant de
l’objet par exemple => attribut static).
- DELETE id : cette méthode permet de supprimer une ressource particulière appartenant à la
médiathèque.
- RESET : cette dernière méthode permet de supprimer toutes les ressources contenues dans la
bibliothèque

