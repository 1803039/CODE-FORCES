///Drinks
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,p;
    cin>>n;
    int array[n] = {};
    long double sum = 0;

    for(int i = 0; i<n; i++){
        cin>>p;
        array[i] = p;
        sum = sum + array[i];
    }
    cout<<fixed<<setprecision(12)<<sum/n<<"\n";

return 0;
}
///complete