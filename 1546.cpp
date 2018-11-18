#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    double s, max;
    vector<double> ss;
    max = 0;
    cin >> n;
    double sm = 0;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s > max){
            max = s;
        }
        ss.push_back(s);
    }
    for(int i = 0; i < n; i++){
        ss[i] = ss[i]/max*100;
        sm += ss[i];
    }
    cout.precision(2);
    cout << fixed << sm/n << endl;
}