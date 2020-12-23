#include <iostream>
#include <cstdio>
 
using namespace std;

struct data{
   int dia;
   int hora;
   int minuto;
   int segundo;
};

int main() {
 
  struct data inicio, fim, res;

	scanf("Dia %d", &inicio.dia);
	scanf("%d : %d : %d", &inicio.hora, &inicio.minuto, &inicio.segundo);

	scanf("\nDia %d", &fim.dia);
	scanf("%d : %d : %d", &fim.hora, &fim.minuto, &fim.segundo);

	if(fim.segundo < inicio.segundo) fim.minuto--;
	if(fim.minuto == -1) fim.minuto = 59;

	if(fim.minuto < inicio.minuto) fim.hora--;
	if(fim.hora == -1) fim.hora = 23;

	if(fim.hora < inicio.hora) fim.dia--;
	
	res.segundo = (60 + fim.segundo - inicio.segundo) % 60;
	res.minuto = (60 + fim.minuto - inicio.minuto) % 60;
	res.hora = (24 + fim.hora - inicio.hora) % 24;
	res.dia = fim.dia - inicio.dia;

	cout << res.dia << " dia(s)" << endl;
	cout << res.hora << " hora(s)" << endl;
	cout << res.minuto << " minuto(s)" << endl;
	cout << res.segundo << " segundo(s)" << endl;

   return 0;
}
