#include <iostream>
using namespace std;
int main(){
    int s;
    cin >> s;
    if(s>=90 && s<=100) cout << "A" << endl;
    else if(s>=80 && s<=89) cout << "B" << endl;
    else if(s>=70 && s<=79) cout << "C" << endl;
    else if(s>=60 && s<=69) cout << "D" << endl;
    else cout << "F" << endl;
    return 0;
}