#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main() {
 
    float n, avg = 0, count = 0;
    for(int i = 0; i < 6; i++){
        cin >> n;
        if(n > 0) {
            count++;
            avg += n;
        }
    }
    
    avg = avg/count;
    cout << count << " valores positivos" << endl;
    printf("%.1f\n", avg);
    
    return 0;
}
