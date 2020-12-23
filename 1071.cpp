#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b;
    cin >> a >> b;
    if(a > b) swap(a,b);
    int sum = 0;
    for(int i = a + 1; i < b; i++){
        if(i % 2 == 1 || i % 2 == -1) sum += i;
    }
    cout << sum << endl;
 
    return 0;
}