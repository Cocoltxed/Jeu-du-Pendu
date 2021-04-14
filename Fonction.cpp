#include <iostream>
#include "Fonction.h"
#include <fstream>

using namespace std;

char GetCaractere()
{
	char lettrepropose;
	cout << "Proposez une lettre : " << endl;
	cin >> lettrepropose;

	return lettrepropose;
}

int GetNombreAleatoire() 
{
	//initialisation
	srand(time(0));

	int nbr;
	nbr = (rand() % 19 + 0); // renvoie un nombre aléatoire entre 0 et 19

	//J'ai fais un test pour savoir si ça marche bien la fonction aléatoire et ça fonctionne
	//cout << nbr << endl;

	return nbr;
}

string ChoisirMot(string dico[])
{
	int nbrChoisiAlea;
	string mot;
	nbrChoisiAlea = GetNombreAleatoire();
	//cout << nbrChoisiAlea;
	//cout << dico[nbrChoisiAlea];
	mot = dico[nbrChoisiAlea]; 
	//test pour savoir si le mot est bien contenu dans le string
	//cout << mot;
	return mot;
}

void InitEtoile(string& mot)
{
	//string motcache;
	for (char& c : mot)
	{
		c = '*';
		//cout << c;
	}
}

bool TestCaractere(char lettre, string mot, string& motCache)
{
	bool rep = false;
	for (int i = 0; i < mot.length(); i++)
	{
		if (lettre == mot[i])
		{
			motCache[i] = lettre;
			rep = true;
		}
	}
	return rep;
}

bool TestGagne(string mot)
{
	for(int i = 0; i < mot.length(); i++)
	{
		if (mot[i] == '*')
		{
			return false;
		}

	}
	cout << "Bien joué à toi" << endl;
	return true;
}

void DessinePendu(int i)
{
	string pendu[10];
	pendu[0] = "";
	pendu[1] = "      \n"
		"      \n"
		"      \n"
		"      \n"
		" |    \n"
		"_|_   \n";
	pendu[2] = "      \n"
		"      \n"
		"      \n"
		" |    \n"
		" |    \n"
		"_|_   \n";
	pendu[3] = " _    \n"
		" |    \n"
		" |    \n"
		" |    \n"
		" |    \n"
		"_|_   \n";
	pendu[4] = " ___  \n"
		" |    \n"
		" |    \n"
		" |    \n"
		" |    \n"
		"_|_   \n";
	pendu[5] = " ____\n"
		" |  | \n"
		" |    \n"
		" |    \n"
		" |    \n"
		"_|_   \n";
	pendu[6] = " _____\n"
		" |  | \n"
		" |    \n"
		" |    \n"
		" |    \n"
		"_|_   \n";
	pendu[7] = " _____\n"
		" |  | \n"
		" |  o \n"
		" |    \n"
		" |    \n"
		"_|_   \n";
	pendu[8] = " _____\n"
		" |  | \n"
		" |  o \n"
		" |  | \n"
		" | / \\\n"
		"_|_   \n";
	pendu[9] = " _____\n"
		" |  | \n"
		" |  o \n"
		" | /|\\\n"
		" | / \\\n"
		"_|_   \n";
	cout << pendu[i];
}
/*
string ChoisirMot()
{
	string mot;

	ifstream monFlux("D:\\fichier_avec_texte/fichier.txt");
	if (monFlux)
	{
		//Tout est prêt
		monFlux >> mot;
	}
	else
	{
		cout << "Impossible d'ouvrir le fichier" << endl;
	}
}
*/