///Vasya and socks
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    
    int result = n/m;
    result = n + result;

    for(int i = n+1; i <= result; i++){
        if(i % m == 0){
            result++;
        }
    }
    cout<<result<<endl;
return 0;
}