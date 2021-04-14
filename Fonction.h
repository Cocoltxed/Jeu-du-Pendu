#pragma once
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

#ifndef FONCTION_H
#define FONCTION_h

char GetCaractere();
int GetNombreAleatoire();
string ChoisirMot(string dico[]);
void InitEtoile(string& mot);
bool TestCaractere(char lettre, string mot, string& motCache);
bool TestGagne(string mot);
void DessinePendu(int i);

//string ChoisirMot();

#endif //!FONCTION_H