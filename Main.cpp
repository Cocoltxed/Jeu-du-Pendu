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

	dico[0] = "un";  //Remplissage de la premi�re case
	dico[1] = "deux";  //Remplissage de la deuxi�me case
	dico[2] = "cinq";  //Remplissage de la troisi�me case
	dico[3] = "rouge";  //Remplissage de la quatri�me case
	dico[4] = "membre";  //Remplissage de la cinqui�me case
	dico[5] = "conseil";  //Remplissage de la sixi�me case
	dico[6] = "donner";  //Remplissage de la septi�me case
	dico[7] = "reponse";  //Remplissage de la huiti�me case
	dico[8] = "etat";  //Remplissage de la neuvi�me case
	dico[9] = "son";  //Remplissage de la dixi�me case
	dico[10] = "armement";  //Remplissage de la onzi�me case
	dico[11] = "peu";  //Remplissage de la douzi�me case
	dico[12] = "apres";  //Remplissage de la treizi�me case
	dico[13] = "vacances";  //Remplissage de la quatorzi�me case
	dico[14] = "annonce";  //Remplissage de la quinzi�me case
	dico[15] = "mercredi";  //Remplissage de la seizi�me case
	dico[16] = "evident";  //Remplissage de la dix-septi�me case
	dico[17] = "regime";  //Remplissage de la dix-huiti�me case
	dico[18] = "affirmer";  //Remplissage de la dix-neuvi�me case
	dico[19] = "arme";  //Remplissage de la vinghti�me case


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
			cout << "Il vous reste " << nbcoup << " � jouer" << endl;
			cout << "Le mot a deviner est : " << motcache << endl;
			char lettre = GetCaractere(); //Demande � l'utilisateur de saisir un caract�re
			if (TestCaractere(lettre, MotChoisi, motcache) == false)
			{
				nbcoup = nbcoup - 1; // On enl�ve un coup car il vient de jouer
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