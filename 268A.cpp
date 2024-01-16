///Games
#include<bits/stdc++.h>
using namespace std;

int go_down(int ar[], int br[], int n){

    int count = 0;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(ar[i] == br[j]){
                count++;
            }
        }
    }
return count;
}

int go_up(int ar[], int br[], int n){

    int count = 0;
    for(int i = n-1; i>=1; i--){
        for(int j = i-1; j>=0; j--){
            if( ar[i] == br[j] ){
                count++;
            }
        }
    }

return count;
}

int main(){

    int n, h, a;
    cin>>n;
    int ar[n];
    int br[n];

    for(int i = 0; i<n; i++){
        cin>>h>>a;
        ar[i] = h;
        br[i] = a;
    }

    cout<< go_down(ar, br, n) + go_up(ar, br, n) << '\n';

return 0;
}
///complete