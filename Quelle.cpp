/*Tank Rechner

Programm zur Auswertung und zum Vergleich von Tankdaten.

	To do:

		1. Anmeldung:
			1.1. Passwortprüfung (N)

		2. Optionen:
			2.1. Benutzerdaten entfernen (N)
*/
#include"neuerBenutzer.h"
#include"NeueListe.h"
#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include<time.h>
#include<conio.h>
using namespace std;




int main()
{
	NeuerBenutzer BenutzerEinrichtung;
	//Hauptmenü
home:
	system("cls");
	char eingabe;
	printf("HOME\n");
	printf("\n\n(1) Anmelden\n(2) Neuen Benutzer erstellen\n(3)Benutzer entfernen");
	eingabe = _getch();
	if (eingabe == '2')
	{
		goto neuerBenutzer;
	}
	if (eingabe == '3')
	{
		goto benutzerEntfernen;
	}
	else
	{
		return 0;
	}
neuerBenutzer:
	system("cls");
	

	printf("Wie soll die neue Liste heissen?\nBezeichnung: ");
	cin >> BenutzerEinrichtung.listenName;
	printf("Bitte gib deinen Namen ein: ");
	for (int x = 0; x < 2; x++)
	{
		cin >> BenutzerEinrichtung.name[x];
		if (cin.get() == '\n')
		{
			goto autoEingabe;
		}
	}
autoEingabe:
	printf("\nAutomarke: ");
	cin >> BenutzerEinrichtung.autoMarke;
	printf("\nModell: ");
	cin >> BenutzerEinrichtung.autoModell;
passwortEingabe:
	printf("\nErstelle ein Passwort mit mindestens 4 Zeichen: ");
	cin >> BenutzerEinrichtung.passwort;
	if (BenutzerEinrichtung.passwort.length() < 4)
	{
		goto passwortEingabe;
	}
	BenutzerEinrichtung.neueBenutzerDatei(); // Funktion "neueBenutzerDatei" aus dem Header "NeuerBenutzer.h" wird aufgerufen.
	goto home;
benutzerEntfernen:
	BenutzerEinrichtung.BenutzerEntfernen();
	goto home;
	return 0;
}
