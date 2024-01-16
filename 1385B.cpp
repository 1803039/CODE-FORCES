///Restore the permutation by Merger
#include<bits/stdc++.h>
using namespace std;

void result(int array[], int n){

    int check[n] = {0};
    int k = 0;

      for(int i = 0; i<(2*n); i++){
        int count = 0;
        for(int j = n-1 ; j>=0; j--){
            if(array[i] == check[j]){
                count++;
            }
        }
        if(count == 0){
            check[k] = array[i];
            k++;
        }
    }

    for(int i = 0; i<n; i++){
       cout<<check[i]<<" ";
    }
    cout<<"\n";
}

int main(){

    int t, n, a;
    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>n;
        int array[2*n];
        for(int j = 0; j<(2*n); j++){
            cin>>a;
            array[j] = a;
        }
        result(array, n);
    }

return 0;
}
///complete