///next round
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k,i,j = 0;
    cin>>n>>k;

    int arr[100];
    for(int i = 0; i<n; i++)
    cin>>arr[i];

        for(i = 0; i<n; i++){
            if(arr[i] >= arr[k-1] && arr[i] > 0){
                j+=1;
            }
        }
        cout<<j<<endl;

return 0;
}
/// took some help from online
/// needs to be solved again.