///Two arrays and swaps
#include<bits/stdc++.h>
using namespace std;

void summation(int array[], int n){

    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + array[i];
    }
    cout<<sum<<"\n";
}

void calculation(int a[], int b[], int n, int k){

    if(k > 0){
    sort(b, b+n);
    sort(a, a+n);
    int i = 0;
    int j = n-1;

    while(i < k){
        if(a[i] < b[j]){
            swap(a[i], b[j]);
        }
        i++;
        j--;
    }

    summation(a, n);
    }
    else{
        summation(a, n);
    }

}

int main(){

    int t, n, k;
    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>n>>k;
        int a[n];
        int b[n];

        for(int j = 0; j<n; j++){
            cin>>a[j];
        }
        for(int m = 0; m<n; m++){
            cin>>b[m];
        }
        calculation(a, b, n, k);
    }

return 0;
}
///complete