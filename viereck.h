#ifndef VIERECK_H
#define VIERECK_H
#include <iostream>
#include <stdio.h>
using namespace std;

class viereck {
private:
	float länge;
	float breite;

public:
	viereck();
	viereck(int länge, int breite);
	void setlänge(float l);
	void setbreite(float b);
	float getlänge();
	float getbreite();
	float umfang(float länge, float breite);
	float fläche(float länge, float breite);
};

#endif // !VIERECK_H

