///Balanced Array
#include<bits/stdc++.h>
using namespace std;

int any(int n){

    int sum = 0;
    int ad = 0;
    for(int i = 2; i<=n; i+=2){
        sum = sum + i;
        cout<<i<<" ";
    }
    for(int i = 1; i<n-2; i+=2){
        ad = ad + i;
        cout<<i<<" ";
    }
    cout<<sum - ad<<endl; /// took help here

return 0;
}

int main(){

    int t,n;
    cin>>t;
    for(int i = 0; i<t; i++){
        cin>>n;
        if(n%4 != 0){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            any(n);
        }
    }
return 0;
}
///complete