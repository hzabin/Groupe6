
#include "composant1.h"
#include "composant1version.h"

#include "composant2.h"


#pragma warning (disable : 4996)

std::string getComposant1Version(){
return "Composant 1 version " COMPOSANT_VERSION_STR;
}

double calculer(std::string typePayoff, double maturity, double strike, int nbTrials){
	return doMonteCarlo(typePayoff,maturity,strike,nbTrials);
}

std::string intialiser(std::string file_name){
	if(initializeLocalVol(file_name))
		return "OK";
	else
		return "KO";
}
