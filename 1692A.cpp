///Marathon
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b, c, d;
    int count = 0;

    cin>>t;

    while(t != 0){
        cin>>a>>b>>c>>d;
        
        if(a < b){
            count++;
        }
        if(a < c){
            count++;
        }
        if(a < d){
            count++;
        }
        cout<<count<<endl;
        count = 0;
        --t;
    }
return 0;
}