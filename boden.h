#ifndef BODEN_H
#define BODEN_H
#include "viereck.h"
#include <stdio.h>
using namespace std;

class boden : public viereck {

private:
	string bodenbelag;
public:
	boden(int länge, int breite, string bodenbelag);
	void einlesen();
	void setbelag(string belag);
	string getbelag();
};

#endif // !BODEN_H
