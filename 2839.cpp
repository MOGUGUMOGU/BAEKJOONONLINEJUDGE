#include <iostream>
#define BIG 5
#define SMALL 3
using namespace std;

int solution(int& n){
    if(n<SMALL)return -1;
    int bigMax = n/BIG;//5로 나누었을 때 몫
    while(bigMax >= 0){
        int tmp = n-(BIG*bigMax);
        if(tmp % SMALL == 0){
            return bigMax + (tmp/SMALL);
        }
        bigMax--;//5로 나눈 봉지들의 나머지 무게가 3의 봉지로 놋나눌때 5의 봉지를 하나씩 줄여가면서 찾기.
    }
    return -1;
}
int main(){
    int n, result;
    cin >> n;
    result = solution(n);
    cout << result <<endl;
    return 0;
}