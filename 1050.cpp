#include <iostream>
#include <string>

using namespace std;

int DDD[8] = {61,71,11,21,32,19,27,31};
string Dest[8] ={
	"Brasilia",
	"Salvador",
	"Sao Paulo",
	"Rio de Janeiro",
	"Juiz de Fora",
	"Campinas",
	"Vitoria",
	"Belo Horizonte"
};

int main(void){

	int ddd;
	cin >> ddd;
	bool found = false;
	
	for(int i = 0; i < 8; i++){
		if(ddd == DDD[i]){
			found = true;
			cout << Dest[i] << endl;
		}
	}

	if(!found){
		cout << "DDD nao cadastrado" << endl;
	}
	return 0;
}