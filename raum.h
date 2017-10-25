#ifndef RAUM_H
#define RAUM_H
#include "boden.h"

class raum : boden {
private:
	int hoehe;

public:
	raum();
	~raum();
	raum::raum(int länge, int breite, int hoehe, string bodenbelag);
	int gethoehe();
	void einlesen();
};


#endif // RAUM_H

