#include<bits/stdc++.h>
using namespace std;

vector<int> day1(vector<int> arr){
  int n = static_cast<int>(arr.size());
  vector<int> result(n);
  int p;
  for(int i = 0;i < n;i++){
    p = 1;
    for(int j = 0;j < n;j++){
      if(j==i)
      continue;
      p*=arr[j];
    }
    result[i] = p;
  }
  return result;
}

int main(){
  ofstream fout("OUTPUT_PATH");
  string n_temp;
  getline(cin, n_temp);
  int n = stoi(n_temp);
  vector<int> arr(n);
  for(int i = 0;i < n;i++){
    string el_temp;
    getline(cin, el_temp);
    int el = stoi(el_temp);
    arr[i] = el;
  }
  vector<int> result = day1(arr);
}
