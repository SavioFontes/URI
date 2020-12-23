#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, n, in = 0, out = 0;
    cin >> x;
    while(x--){
        cin >> n;
        if(n >= 10 && n <= 20){
            in++;
        } else{
            out++;
        }
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
 
    return 0;
}
