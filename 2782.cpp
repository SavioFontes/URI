#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, count = 1, prev, cur, dif;
    
    cin >> n >> prev;
    
    if(n > 1){
        
        cin >> cur;
        n-=2;
        dif = cur - prev;
        prev = cur;
        
        while(n--){
            cin >> cur;
            if((cur - prev) != dif){
                dif = cur - prev;
                count++;
            }
            prev = cur;
        }
    }
    
    cout << count << endl;
 
    return 0;
}
