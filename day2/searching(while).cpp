#include <bits/stdc++.h>
using namespace std;
int searching(vector<int> arr,int find){
  int i=0;
  while(i<arr.size()){
    if(arr[i]==find){
      return 1;
    }
    i++;
  }
  return -1;
}

int main(){
  vector<int> arr={1,2,3,4};
  cout<<searching(arr,5);
  return 0;
}
