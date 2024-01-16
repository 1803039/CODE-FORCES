///tram
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int a,b;
    int remains = 0;
    cin>>n;
    int array[n] = {};

    for(int i = 1; i<=n; i++){
        cin>>a>>b;
        int enter = b;
        remains = (remains - a) + enter;
        array[i] = remains;
    }

    int max = array[0];
    for(int i = 1; i<n; i++){
        if(max < array[i]){
            max = array[i];
        }
    }

    cout<<max<<endl;
return 0;
}
///complete