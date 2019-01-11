#include <iostream>
using namespace std;
int main(int argc, char** argv){
    string n;
    cin >> n;
    for(int i = 0; i < n.size(); i += 10){
        //string.substr(시작인덱스, 서브스트링 카운트);
        cout << n.substr(i, 10) << endl;
    }
    return 0;
}