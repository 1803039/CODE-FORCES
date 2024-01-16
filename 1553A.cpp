///Digits sum
#include<bits/stdc++.h>
using namespace std;

int s(int n){
    int sum = n+1;
    if(((sum/10)+(sum%10)) < n){
        cout<<sum/10<<endl;
    }
    else{
        cout<<n/10<<endl;
    } 

return 0;
}

int main(){

    int t, n;
    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>n;
        s(n);
    }

return 0;
}
///complete