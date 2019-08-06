#include <iostream>
using namespace std;
int main(){
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	int temp;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	cout << a[1] << endl;
}