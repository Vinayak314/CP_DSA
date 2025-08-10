#include<bits/stdc++.h>
using namespace std;

// int main(){
// 	long long n;
// 	cin>>n;

// 	vector<long long> nums(n-1);
// 	for(long long i = 0; i<n-1; i++){
// 		cin>>nums[i];
// 	}

// 	sort(nums.begin(), nums.end());

// 	for(long long i=1; i<=n-1; i++){
// 		if(nums[i-1] != i){
// 			cout<< i;
// 			return 0;
// 		}
// 	}

// 	cout<<n;
// }

int main(){
	long long n, x, sum = 0;
	cin>>n;

	for(long long i = 0; i<n-1; i++){
		cin>>x;
		sum+=x;
	}

	long long total = n*(n+1)/2;
	cout<< total - sum;
}