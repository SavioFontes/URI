#include <iostream>

#define abs(a) (a > 0 ? a : -a)

using namespace std;
 
int main() {
 
    int n, count = 0;
    for(int i = 0; i < 5; i++){
        cin >> n;
        if(abs(n) % 2 == 0) count++;
    }
    if(count > 0) cout << count << " valores pares" << endl;
    
    return 0;
}
