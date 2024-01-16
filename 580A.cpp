///Kefa and first steps
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    long long a = 1;
    cin>>n;
    long long array[n];
    int array2[n] = {0};
    int k = 0;
    int maximum;
    for(long long i = 0; i < n; i++){
        cin>>array[i];
    }
    for(long long j = 1; j < n; j++){
       if(array[j] >= array[j-1]){
           a++;
       }
       else if(array[j] < array[j-1]){
           array2[k] = a;
           k++;
           a = 1;
       }
    }
    if(a == n){
        cout<<a<<endl;
        }
        else{
            array2[k] = a;       
            maximum = array2[0];
            for(int i = 1; i<n; i++){
                if(array2[i] > maximum){
                maximum = array2[i];
        }
    }cout<<maximum<<endl;
    }

return 0;
}
///complete
///can be optimized much more
///no need to use long long type. it would work using integer type fluently.