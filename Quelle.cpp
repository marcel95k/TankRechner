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

	printf("Wie soll deine neue Liste heissen?\nBezeichnung: ");
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
	printf("\nErstelle ein Passwort: ");
	cin >> BenutzerEinrichtung.passwort;
	BenutzerEinrichtung.neueBenutzerDatei(); // Funktion "neueBenutzerDatei" aus dem Header "NeuerBenutzer.h" wird aufgerufen.
	
	main();

	return 0;
}
