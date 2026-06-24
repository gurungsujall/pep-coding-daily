#include <bits/stdc++.h>
using namespace std;
bool bsearch(vector<int> arr,int find){
  int start=0,end=arr.size()-1;
  while(start<=end){
      int mid=(start+end)/2;
      if(arr[mid]==find){
          return true;
      }
      else if(arr[mid]>find){
          end=mid-1;
      }
      else{
          start=mid+1;
      }
  }
  return false;

}

int main(){
  vector<int> arr={1,2,3,4,5,6,7};
  if(bsearch(arr,8)){
      cout<<"found";
  }else{
      cout<<"not found";
  }
  return 0;
}
