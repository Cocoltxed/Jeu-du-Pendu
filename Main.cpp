#include <iostream>
#include <string>
#include "Fonction.h"

using namespace std;

int main()
{
	cout << "Vous allez jouer au jeu du pendu contre l ordinateur." << endl;
	cout << "Un mot va etre choisi dans la bibliotheque de ce jeu et vous allez devoir le trouver." << endl << "Vous avez 10 tentative." << endl << endl;

	string dico[20];
	string motcache;
	//bool gagneOuPas;

	dico[0] = "un";  //Remplissage de la première case
	dico[1] = "deux";  //Remplissage de la deuxième case
	dico[2] = "cinq";  //Remplissage de la troisième case
	dico[3] = "rouge";  //Remplissage de la quatrième case
	dico[4] = "membre";  //Remplissage de la cinquième case
	dico[5] = "conseil";  //Remplissage de la sixième case
	dico[6] = "donner";  //Remplissage de la septième case
	dico[7] = "reponse";  //Remplissage de la huitième case
	dico[8] = "etat";  //Remplissage de la neuvième case
	dico[9] = "son";  //Remplissage de la dixième case
	dico[10] = "armement";  //Remplissage de la onzième case
	dico[11] = "peu";  //Remplissage de la douzième case
	dico[12] = "apres";  //Remplissage de la treizième case
	dico[13] = "vacances";  //Remplissage de la quatorzième case
	dico[14] = "annonce";  //Remplissage de la quinzième case
	dico[15] = "mercredi";  //Remplissage de la seizième case
	dico[16] = "evident";  //Remplissage de la dix-septième case
	dico[17] = "regime";  //Remplissage de la dix-huitième case
	dico[18] = "affirmer";  //Remplissage de la dix-neuvième case
	dico[19] = "arme";  //Remplissage de la vinghtième case


char rejouer = 'h';
while (rejouer != 'n')
	{
		int i = 0;
		int gagner = 0;
		int nbcoup = 10;

		motcache = ChoisirMot(dico);
		//motcache = ChoisirMot();

		string MotChoisi = motcache;

		InitEtoile(motcache);

		while (nbcoup != 0 && gagner != 1)
		{
			cout << "Il vous reste " << nbcoup << " à jouer" << endl;
			cout << "Le mot a deviner est : " << motcache << endl;
			char lettre = GetCaractere(); //Demande à l'utilisateur de saisir un caractère
			if (TestCaractere(lettre, MotChoisi, motcache) == false)
			{
				nbcoup = nbcoup - 1; // On enlève un coup car il vient de jouer
				int a;
				DessinePendu(i);
				i += 1;
			}
			else if (TestCaractere(lettre, MotChoisi, motcache) == true && TestGagne(motcache))
			{
				gagner = 1;
			}	
		}
		if (nbcoup == 0)
		{
			cout << "Vous avez perdu, le mot etait : " << MotChoisi << endl;
		}
		cout << "Voulez-vous rejouer ? (o ou n)" << endl;
		cin >> rejouer;
	}

	return 0;
}