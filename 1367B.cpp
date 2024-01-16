///Even Array
#include<bits/stdc++.h>
using namespace std;

void calculation(int array[], int n){

    int index[n];
    int sum1 = 0;
    int sum2 = 0;
    int count = 0;
    for(int i = 0; i<n; i++){
        array[i] = array[i]%2;
        index[i] = i%2;
        sum1 = sum1 + array[i];
        sum2 = sum2 + index[i];
    }

    if(sum1 != sum2){
        cout<<"-1"<<"\n";
    }
    else{
        for(int i = 1; i<n; i+=2){
            if(array[i] != index[i]){
                swap(array[i], array[i+1]);
                count++;
            }
        }
        cout<<count<<"\n";
    }

}

int main(){

    int t,n;
    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>n;
        int array[n];
        for(int j = 0; j<n; j++){
            cin>>array[j];
        }
        calculation(array, n);
    }

return 0;
}
///complete