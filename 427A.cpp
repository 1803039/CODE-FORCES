///Police Recruits
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int i = 0;
    int count = 0;
    cin>>n;
    int array[n] = {0};
    

    while(i<n){
        cin>>array[i];
        i++;
    }

    int j = 0;
    while( j < n){
        if(array[j] > 0 && array[j+1] < 0){
            array[j+1] = array[j] + array[j+1];
        }
        else if(array[j] > 0 && array[j+1] > 0){
            array[j+1] = array[j+1] + array[j];
        }
        j++;
    }
    for(int k = 0; k<n; k++){
        if(array[k] == -1){
            count++;
        }
    }
    cout<<count<<endl;
   return 0; 
}