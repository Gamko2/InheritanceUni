#include "viereck.h"

viereck::viereck() {
	länge = 0;
	breite = 0;
}

viereck::viereck(int länge, int breite) {
	this->länge = länge;
	this->breite = breite;
}

void viereck::setlänge(float l) {
	if (l < 0) {
		cout << "Invalid number";
	}

	else {
		länge = l;
	}
}

void viereck::setbreite(float b) {
	if (b < 0) {
		cout << "Invalid number";

	}
	else {
		breite = b;
	}

}

float viereck::getlänge() {
	return länge;
}

float viereck::getbreite() {
	return breite;
}

float viereck::fläche(float länge, float breite) {
	return länge*breite;
}

float viereck::umfang(float länge, float breite) {
	return (2 * länge) + (2 * breite);
}

void zeichneViereck(int höhe, int breite, char border)
{

	for (int i = 0; i < höhe; i++)
	{

		if (i == 0 || i == höhe - 1)
		{
			for (int x = 0; x < breite - 1; x++)
				cout << border;
		}
		else {
			cout << border;
			for (int empty = 0; empty < breite - 2; empty++)
				cout << " ";
		}
		cout << border;
		cout << endl;
	}
}
