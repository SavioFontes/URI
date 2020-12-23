#include <iostream>
#include <string>

using namespace std;

string tipo1[2] = {"vertebrado","invertebrado"};
string tipo2[4] = {"ave","mamifero","inseto","anelideo"};
string tipo3[8] = {"carnivoro","onivoro","onivoro","herbivoro",
                   "hematofago","herbivoro","hematofago","onivoro"};
string sol[8] = {"aguia","pomba","homem","vaca","pulga","lagarta","sanguessuga","minhoca"};

int main(void){

	string ops[3];

	cin >> ops[0] >> ops[1] >> ops[2];

	int op1 = 0;
	if(ops[0] != tipo1[op1]) op1++;

	int op2 = op1 * 2;
	if(ops[1] != tipo2[op2]) op2++;

	int op3 = op2 * 2;
	if(ops[2] != tipo3[op3]) op3++;

	cout << sol[op3] << endl;

	return 0;
}