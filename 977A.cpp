///Wrong subtraction
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k, i = 0;
    cin>>n>>k;

    while(i < k){
    if (n%10 != 0){
        n = n - 1;
    }
    else if(n%10 == 0){
       n = n / 10;
    }
    i++;
    }
    cout<<n<<endl;

return 0;
}
///complete