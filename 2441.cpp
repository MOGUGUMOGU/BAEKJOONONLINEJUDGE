#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = n; i > 0; i--){
        for(int j = 0; j < n-i; j++){
            printf(" ");
        }
        for(int k = 0; k < i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}