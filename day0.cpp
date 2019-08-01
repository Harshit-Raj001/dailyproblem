#include<bits/stdc++.h>
using namespace std;

string day0(vector<int>arr,int k){
	int n = static_cast<int>(arr.size());
	int el_temp;
	for(int i = 0;i < n;i++){
		el_temp = k-arr[i];
		if(find(arr.begin(), arr.end(), el_temp) != arr.end()){
			return "pass";
		}
	}
	return "fail";
}

int main(){
	ofstream fout(getenv("OUTPUT_PATH"));
	string n_temp, k_temp;
	getline(cin, k_temp);int k = stoi(k_temp);
	getline(cin, n_temp);int n = stoi(n_temp);
	vector<int>arr(n);
	for(int i = 0;i < n;i++){
		string el_temp;
		getline(cin, el_temp);
		int el = stoi(el_temp);
		arr[i] = el;
	}
	string result = day1(arr, k);
	fout<<result;
	fout.close();
	return 0;
}