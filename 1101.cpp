#include <iostream>
 
using namespace std;
 
int main() {
 
    int m, n;
    while(cin >> m >> n, m > 0 && n > 0){
        int sum = 0;
        if(m > n) swap(m, n);
        for(int i = m; i <= n; i++){
            sum += i;
            cout << i << " ";   
        }
        cout << "Sum=" << sum << endl;
    }
 
    return 0;
}
