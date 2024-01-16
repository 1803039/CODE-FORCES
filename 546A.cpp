///soldier and bananas
#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, n, w;
    int sum = 0;
    cin>>k>>n>>w;

    for(int i = 1; i<=w; i++){
       sum = sum + (i * k);
    }
    
    int sum1 = abs(n - sum);
    
    if(sum <= n){
        cout<<0<<endl;
    }
    
    else cout<<sum1<<endl;

return 0;
}
///complete