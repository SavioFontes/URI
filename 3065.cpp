#include <iostream>
 
using namespace std;
 
int main() {
 
    int cont = 1;
    int valores, sum = 0, valor;
    char a;
    while(cin >> valores, valores != 0){
        sum = 0;
        cin >> valor;
        sum += valor;
        valores--;
        while(valores--){
            cin >> a;
            cin >> valor;
            
            if(a == '+') sum += valor;
            else sum -= valor;
        }
        
        cout << "Teste " << cont << endl;
        cont++;
        cout << sum << endl;
    }
 
    return 0;
}