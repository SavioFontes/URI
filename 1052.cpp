#include <iostream>

using namespace std;

int time(int in, int fin, int scale){

	if(in < fin) return fin - in;
	else return fin - in + scale;

}

