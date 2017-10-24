#include "boden.h"
#include <iostream>
#include <stdio.h>
#include <string.h>



boden::boden(int länge, int breite, string bodenbelag) {
	this->länge = länge;
	this->breite = breite;
	this->bodenbelag = bodenbelag;
}

void boden::einlesen()
{
	int länge;
	int breite;
	string bodenbelag;
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

void boden::setbelag(string belag) {
	this->bodenbelag = belag;
}

string boden::getbelag() {
	return bodenbelag;
}
