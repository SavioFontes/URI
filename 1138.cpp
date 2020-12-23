#include <iostream>
#include <cstring>
using namespace std;

int cont[10];

int main() {
 
    int a, b, n;
    
    while(cin >> a >> b, a!=0 && b!=0){
        memset(cont, 0, sizeof cont);
        for(int i = a; i <= b; i++){
            n = i;
			do{
				cont[n%10]++;
			}while((n /= 10) > 0);
        }
        for(int i = 0; i < 9; i++){
			cout << cont[i] << " ";
		}
		cout << cont[9] << endl;
    }
    return 0;
}