#include <iostream>
 
using namespace std;
 
int main() {
 
    int count = 0;
    float n;
    for(int i = 0; i < 6; i++){
        cin >> n;
        if(n >= 0) count++;
    }
    
    if(count == 0) return 0;
    
    if(count > 1) cout << count << " valores positivos" << endl;
    else cout << "1 valor negativo" << endl;
    return 0;
}
