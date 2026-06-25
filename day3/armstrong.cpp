#include <bits/stdc++.h>
using namespace std;

bool arm(int a){
    int sum=0;
    int original=153;
    while(a>0){
        int digit=a%10;
        sum=sum+pow(digit,3);
        a=a/10;
    }
    if(sum==original){
        return true;
    }
    else{
        return false;
    }
    
}
int main()
{
    cout<<arm(153);
    return 0;
}
