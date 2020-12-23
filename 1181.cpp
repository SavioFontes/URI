#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

	std::cout << fixed;
	std::cout << setprecision(2);

	float m[12][12];
	int linha;
	char op;

	cin >> linha >> op;
	for(int i = 0; i < 12; i++)
		for(int j = 0; j < 12; j++)
			cin >> m[i][j];
		
	float sum = 0;
	for(int i = 0; i < 12; i++)
		sum += m[linha][i];

	if(op == 'M') sum /= 12;

	cout << sum << endl;

	return 0;
}