#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while (n--){
		int a;
		cin >> a;
		if (a%2 == 0){
			cout << "偶\n";
		} else {
			cout << "奇\n";
		}
	}
}