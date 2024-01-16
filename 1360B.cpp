///Honest Coach
#include<bits/stdc++.h>
using namespace std;

void calculation(int array[], int n){

    sort(array, array+n);
    int b[n-1];
    int sum = 0;

    for(int i = 1; i<n; i++){
        sum = array[i] - array[i-1];
        b[i-1] = sum;
    }
    sort(b, b+n-1);
    cout<<b[0]<<"\n";
}

int main(){

    int t, n, s;
    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>n;
        int array[n];
        for(int j = 0; j<n; j++){
            cin>>s;
            array[j] = s;
        }
        calculation(array, n);
    }

return 0;
}
///complete