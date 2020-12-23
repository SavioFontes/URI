#include <iostream>

using namespace std;

int main(void){

	int in[3];

	cin >> in[0] >> in[1] >> in[2];

	int sort[3];
	sort[0] = in[0];
	sort[1] = in[1];
	sort[2] = in[2];

	for(int j = 2; j > 0; j--){
		for(int i = 0; i < j; i++){
			
			if(sort[i] > sort[i+1]) swap(sort[i],sort[i+1]);
			
		}
	}

	for(int i = 0; i < 3; i++){
		cout << sort[i] << endl;
	}
	cout << endl;
	for(int i = 0; i < 3; i++){
		cout << in[i] << endl;
	}

	return 0;
}