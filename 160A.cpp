///twins
#include<bits/stdc++.h>
using namespace std;

int sum = 0;
int sum1 = 0;
int counts = 0;

int main(){
    int n,a;
    cin>>n;
    int array[n];

    for(int i = 0; i<n; i++){
        cin>>a;
        array[i] = a;
        sum = sum + a;
    }
    sort(array, array+n);
    int half = sum/2;
    int j = n;

    while(!(sum1 > half)){
        sum1 = sum1 + array[j-1];
        counts++;
        j--;
    }
    cout<<counts<<endl;
return 0;
}
///greedy, sorting
///completed