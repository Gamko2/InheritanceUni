#include "raum.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int raum::gethoehe()
{
	return hoehe;
	
}

void raum::einlesen() {
	int länge;
	int breite;
	int hoehe;
	string bodenbelag;
	cout << "Geben Sie Hoehe ein" << endl;
	cin >> hoehe;
	if (hoehe >= 1) {
		cout << "Geben sie Länge ein" << endl;
		cin >> länge;
		if (länge > 0) {
			cout << "Geben Sie die Breite ein" << endl;
			cin >> breite;
			if (breite > 0) {
				cout << "Geben Sie den Belag ein" << endl;
				scanf("%s", bodenbelag);
			}
			cout << "Keine positive Zahl für Breite" << endl;
		}
		cout << "Keine positive Zahl für Länge" << endl;
	}
}

raum::raum() {
	this->breite = 0;
	this->hoehe = 0;
	this->länge = 0;
	this->bodenbelag = "leer";
}

raum::raum(int länge, int breite, int hoehe, string bodenbelag) {
	this->länge = länge;
	this->breite = breite;
	this->bodenbelag = bodenbelag;
	this->hoehe = hoehe;
	
}

raum::~raum() {

}



