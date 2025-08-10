#include <bits/stdc++.h>
using namespace std;

int main(){
	int count=1, max=1;
	char curr, prev;
	string s;
	cin>> s;

	for(int i = 1; i<s.size(); i++){
		curr = s[i];
		prev = s[i-1];

		if(curr == prev){
			count++;
		}else{
			count = 1;
		}

		if(count > max){
			max = count;
		}
	}
	cout<< max;
}