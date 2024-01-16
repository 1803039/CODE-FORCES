///Xenia and Ringroad
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[m];
    int time = 0;

    for(int i = 0; i<m; i++){
        cin>>a[i];
    }
    ///a[0] = a[0] - 1;
    for(int i = 1; i<m; i++){
        if(a[i] < a[i-1]){
            time = time + ((n+a[i]) - a[i-1]);
        }
        else if(a[i] > a[i-1]){
            time = time + (a[i] - a[i-1]);
        }
        else time = time + 0;
    }
    time = time + (a[0] - 1);

    cout<<time<<endl;
    return 0;

}