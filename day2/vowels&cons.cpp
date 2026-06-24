#include <bits/stdc++.h>
using namespace std;
void countA(string a){
    int vowel=0,conso=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            vowel++;
        }
        else{
            conso++;
        }
    }
    cout<<vowel;
    cout<<endl;
    cout<<conso;
}
    

   

int main() {
	// your code goes here
    countA("lovely professional university");
    
}
