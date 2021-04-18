#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int benutzerGesamt = 0;

class NeuerBenutzer
{
public:

	
	string listenName;
	string name[2];
	string autoMarke;
	string autoModell;
	string passwort;
	string passwort_wh;

	/* Benutzereingabe wird in Dateien geschrieben. 
		1. wird der Listenname zur Liste der Datei "BenutzerDateien" hinzugefügt.
		2. wird eine neue Datei mit dem Namen des Benutzers erstellt.
		3. wird das Passwort zur Datei "PasswortListe" hinzugefügt.
		*/
	void neueBenutzerDatei() 
	{
		benutzerGesamt++;
		ofstream benutzerDateien;
		benutzerDateien.open("BenutzerDateien.txt", benutzerDateien.app);
		benutzerDateien << "\n" << listenName;
		benutzerDateien.close();

		ofstream dateiInfo;
		dateiInfo.open(name[0] + ".txt", dateiInfo.app);
		dateiInfo << "Name:\t" << name[0] << " " << name[1] << "\nMarke:\t" << autoMarke << "\nModell:\t" << autoModell << "\n\n";
		dateiInfo.close();

		ofstream passWortListe;
		passWortListe.open("PasswortListe.txt" , passWortListe.app);
		passWortListe << passwort << "\n";
		passWortListe.close();
	}

	// Benutzer entfernen
	void BenutzerEntfernen()
	{
		system("cls");
		printf("Welchen Benutzer wollen Sie entfernen?\n");
		ifstream datei("BenutzerDateien.txt");
		string zeile;
//TO DO: Hier FOR-Schleife um WHILE-Schleife bauen und FOR-Schleifen-Variable als Auflistungszähler benutzen.
			while (getline(datei, zeile))
			{
				cout << "\n" << zeile;
			}
			datei.close();
			cin >> passwort;
	}
};
