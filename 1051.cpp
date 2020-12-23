#include <iostream>
#include <iomanip>

using namespace std;

int main(void){

	std::cout << fixed;
	std::cout << setprecision(2);

	float renda;
	cin >> renda;

	if(renda <= 2000){
		cout << "Isento" << endl;
	}else{

		float imp8 = 0, imp18 = 0, imp28 = 0;

		if(renda > 4500){
			imp28 = 0.28 * (renda - 4500);
			renda = 4500;
		}
		if(renda > 3000){
			imp18 = 0.18 * (renda - 3000);
			renda = 3000;
		}
		
		imp8 = 0.08 * (renda - 2000);

		cout << "R$ " << imp8 + imp18 + imp28 << endl;
	}

	return 0;
}