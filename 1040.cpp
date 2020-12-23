#include <iostream>
#include <iomanip>

using namespace std;

int main(void){

	std::cout << std::fixed;
	std::cout << std::setprecision(1);

	float score[4];

	cin >> score[0] >> score[1] >> score[2] >> score[3];

	float media = (2*score[0] + 3*score[1] + 4*score[2] + score[3]) / 10;
	
	cout << "Media: " << media << endl;

	if(media >= 7){
		cout << "Aluno aprovado." << endl;
	} else{
		if(media < 5){
			cout << "Aluno reprovado." << endl;
		} else{
			
			float exam;
			cout << "Aluno em exame." << endl;

			cin >> exam;
			cout << "Nota do exame: " << exam << endl;

			media = (media + exam) / 2;
			if(media < 5) cout << "Aluno reprovado." << endl;
			else cout << "Aluno aprovado." << endl;

			cout << "Media final: " << media << endl;

		}
	}

	return 0;
}