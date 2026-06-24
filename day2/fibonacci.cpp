#include <bits/stdc++.h>
using namespace std;
int fibbo(int a){
    if(a==0){
        return 0;
    }
    if(a==1){
        return 1;
    }
    return fibbo(a-1)+fibbo(a-2);
    
}

int main() {
	// your code goes here
	int a;
	cin>>a;
	cout<<fibbo(a);
	return 0;

}

