///young physicist
#include<bits/stdc++.h>
using namespace std;

int sum1 = 0;
int sum2 = 0;
int sum3 = 0;

void force(int x, int y, int z){
    
    sum1 = sum1 + x;
    sum2 = sum2 + y;
    sum3 = sum3 + z;

}

int main(){

    int n,x,y,z;
    cin>>n;

    for(int i = 1; i<=n; i++){
        cin>>x>>y>>z;
        force(x, y, z);
    }
    
    if(sum1 == 0 && sum2 == 0 && sum3 == 0){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}

return 0;
}
///complete