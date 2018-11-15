#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int n, p;
    cin >> n;
    p = n;
    for(int i = 0; i < n; i++){
        p += i;
    }
    printf("%d\n", p);
}