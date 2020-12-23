#include <iostream>
#include <string>
 
using namespace std;
 
string meses[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
int main() {
 
    int a;
    cin >> a;
    cout << meses[a-1] << endl;
 
    return 0;
}
