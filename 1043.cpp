#include <iostream>
#include <iomanip>

using namespace std;

#define edge_ok(a,b,c) (a < b + c ? true : false)

int main(void){

	std::cout << std::fixed;
	std::cout << std::setprecision(1);

	float a, b, c;

	cin >> a >> b >> c;

	if(edge_ok(a,b,c) && edge_ok(b,a,c) && edge_ok(c,a,b)){
		cout << "Perimetro = " << a+b+c << endl;
	} else{
		cout << "Area = " << (a + b) * c / 2 << endl;
	}

	return 0;
}