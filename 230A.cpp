///Dragons
#include<bits/stdc++.h>
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    int s, n;
    cin>>s>>n;
    int x[n];
    int y[n];
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>x[i]>>y[i];
        a[i] = x[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        if(s > a[i]){
            for(int j = 0; j < n; j++){
                if(a[i] == x[j]){
                    s = s + y[j];
                    x[j] = -1;
                }
            } 
        }
        else{
            cout<<"NO"<<endl;
            break;
        }
    }
    if(s > a[n-1]){
        cout<<"YES"<<endl;
    }
return 0;
}
///greedy, sorting
///complete