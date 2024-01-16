///New year and hurry
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    int sum  = 0;
    int count = 0;
    cin>>n>>k;

    k = 240 - k;

    for(int i = 1; i<=n; i++){
       sum = sum + (i * 5);
       if(sum <= k){
           count++;
       }
       else if(sum > k){
           break;
       }
    } 

    cout<<count<<endl;

return 0;
}
///complete