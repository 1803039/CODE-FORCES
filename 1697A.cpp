///Parkway Walk
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, n, m;
    cin>>t;

    while(t != 0){
        cin>>n>>m;
        int a[n];
        int i = 0;
        int total = 0;
        while(i<n){
            cin>>a[i];
            ///int total = 0;
            total = total + a[i];
            i++;
        }
        if(m > total){
            cout<<"0"<<endl;
        }
        else{
            cout<<total - m<<endl;
        }
        --t;
    }
}