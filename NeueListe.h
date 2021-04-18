#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

class NeueListe
{
public:
	int listenAnzahl;
	vector <int> bezirk;
	vector <string> tankstelle;
	vector <float> tankMenge;
	vector <float> literMenge;
	vector <float> preisProLiter;
};
