#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

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
		ofstream benutzerDateien;
		benutzerDateien.open("BenutzerDateien", benutzerDateien.app);
		benutzerDateien << listenName << "\n";
		benutzerDateien.close();

		ofstream dateiInfo;
		dateiInfo.open(name[0], dateiInfo.app);
		dateiInfo << "Name:\t" << name[0] << " " << name[1] << "\nMarke:\t" << autoMarke << "\nModell:\t" << autoModell << "\n\n";
		dateiInfo.close();

		ofstream passWortListe;
		passWortListe.open("PasswortListe", passWortListe.app);
		passWortListe << passwort << "\n";
		passWortListe.close();
	}
};
