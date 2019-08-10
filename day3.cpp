#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cout<<"Enter n: ";
	cin>>n;
	vector<int>arr(n+1);
	cout<<"Enter "<<n<<" elements:\n";
	for(int i = 1;i <= n;i++){
		cin>>t;
		if(t <= 0)
			continue;
		arr[t] = t;
	}
	for(int i = 1;i < n;i++){
		if(arr[i] == 0){
			cout<<i;
			break;
		}
	}
}