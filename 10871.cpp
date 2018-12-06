#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, x, a;
    vector<int> b;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a < x) b.push_back(a);
    }
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}