#include "rand.h"#include <stdlib.h>#include <time.h>double frand (){	return ((double)rand ()-MINRAND)/(MAXRAND+1.0 - MINRAND);}void seed (){	if (RndSeed != 0) {		srand(RndSeed);	}	else {		srand((unsigned) time(NULL));	}}