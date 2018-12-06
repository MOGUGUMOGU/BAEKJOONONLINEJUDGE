#include <iostream>
using namespace std;
int main(){
    int c, n, s;
    cin >> c;
    double *rate = new double[c];
    for(int i = 0; i < c; i++){
        cin >> n;
        int *scr = new int[n];
        int sum = 0;
        double avg = 0;
        for(int j = 0; j < n; j++){
            cin >> s;
            scr[j] = s;
            sum += s;
        }
        avg = sum/n;
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(scr[j] > avg){
                cnt ++;
            }
        }
        double tmp = (double)cnt/n*100;
        rate[i] = tmp;
    }
    cout << fixed;
    cout.precision(3);
    for(int i = 0; i < c; i++){
        cout << rate[i] << "%" << endl;
    }
}