#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int r = 1;
    int tmp = 1;
    int s = 1;
    while(1){
        if(s >= n){
            break;
        }
        tmp = 6*(r++);
        s += tmp;
    }
    cout << r << endl;
    return 0;
}