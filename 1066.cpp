#include <iostream>



using namespace std;
 
int main() {
 
    int n, count_par = 0, count_pos = 0, count_neg = 0;
    for(int i = 0; i < 5; i++){
        cin >> n;
        if(n % 2 == 0) count_par++;
        if(n > 0) count_pos++;
        else if(n < 0) count_neg++;
    }
    cout << count_par << " valor(es) par(es)" << endl;
    cout << 5-count_par << " valor(es) impar(es)" << endl;
    cout << count_pos << " valor(es) positivo(s)" << endl;
    cout << count_neg << " valor(es) negativo(s)" << endl;
    
    return 0;
}
