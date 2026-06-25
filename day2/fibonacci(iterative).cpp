#include <bits/stdc++.h>
using namespace std;
int fibbo(int a){
    int first=0,second=1;
    for(int i=1;i<=a;i++){
        int next=first+second;
        first= second;
        second=next;

        
        
    }
    return first;
    
}

int main() {
	// your code goes here
	int a;
	cin>>a;
	cout<<fibbo(a);
	return 0;
	

}

