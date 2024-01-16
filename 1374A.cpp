///Required Remainder
#include<bits/stdc++.h>
using namespace std;

long long k(long long x, long long y, long long n){

    for(long long i = n; i>=0; i--){
        if(i % x == y){
            cout<<i<<endl;
            break;
        }
    }     
return 0;
}

int main(){

    std::ios::sync_with_stdio(false);
    int t;
    long long x, y, n;
    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>x>>y>>n;
        k(x, y, n);
    }
return 0;
}
