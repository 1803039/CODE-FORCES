///Team olympiad
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array1[n];
    int array2[] = {1, 2, 3};
    for(int i = 0; i < n; i++){
        cin>>array1[i];
    }
    sort(array1, array1+n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(array2[i] == array1[j]){
                cout<<j+1<<" ";
                array1[j] = -1;
                break;
            }
        }
    }cout<<endl;
return 0;
}