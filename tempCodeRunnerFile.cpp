//Vanya and Lanterns
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,l;
    cin>>n>>l;
    double distance = 0.0;
    double d = 0;

    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a, a+n);

    for(int i = 1; i < n; i++){
        distance = (double)(a[i] - a[i-1])/2;
        if(distance > d){
            d = distance;
        }
    }


    int start_flag = a[0] - 0;
    int end_flag = l - a[n-1];

    if( d > start_flag ){
        d = start_flag;
    }
    if( d > end_flag ){
        d = end_flag;
    }

    cout<<setprecision(5)<<d<<endl;

    
return 0;
}