#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    char str[1000000];
    char* pch;
    scanf("%[^\n]", str);
    printf("%s\n", str);
}