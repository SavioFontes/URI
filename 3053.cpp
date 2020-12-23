#include <iostream>
 
using namespace std;
 
int main() {
 
    bool where[3] = {false,false,false};
    int moves, move;
    char start;
    
    cin >> moves >> start;
    switch(start){
        case 'A':
        where[0] = true;
        break;
        case 'B':
        where[1] = true;
        break;
        case 'C':
        where[2] = true;
        break;
        default:
        break;
    }
    
    while(moves--){
        cin >> move;
        switch(move){
            case 1:
            swap(where[0],where[1]);
            break;
            case 2:
            swap(where[1],where[2]);
            break;
            case 3:
            swap(where[0],where[2]);
            break;
            default:
            break;
        }
    }
 
    if(where[0]) start = 'A';
    if(where[1]) start = 'B';
    if(where[2]) start = 'C';
    
    cout << start << endl;
 
    return 0;
}
