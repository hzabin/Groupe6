
#ifndef COMPOSANT1_H
#define COMPOSANT1_H

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include <xlw/DoubleOrNothing.h>
#include <xlw/ArgList.h>

#ifdef COMPOSANT1_EXPORTS
	#define COMPOSANT1_INTERFACE __declspec(dllexport)
#else
	#define COMPOSANT1_INTERFACE __declspec(dllimport)
#endif

using namespace xlw;

//<xlw:libraryname=composant1
double calculer(std::string typePayoff, double maturity, double strike, int nbTrials);
std::string intialiser(std::string file_name);
std::string getComposant1Version();
#endif
