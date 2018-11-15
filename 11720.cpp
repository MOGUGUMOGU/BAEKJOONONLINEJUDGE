#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;
	char ch;//ch를 배열로 안만들면, 문자 1개만 받는다.
	int sum = 0;
	for(int i = 0; i<n; i++){
		cin >> ch;//문자 1개만 받는다. 이렇게 하면 굳이 분리할 필요가 없음.
		sum += (ch - '0');
	}
	cout << sum << endl;
	return 0;
}
