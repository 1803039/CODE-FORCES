///Even odds
#include<bits/stdc++.h>
using namespace std;

/*long long j = 0;
int main(){
    long long n, k;
    cin>>n>>k;
    long long array[n];

    for(long long i = 1; i<=n; i+=2){
        array[j] = i;
        j++;
    }
    for(long long i = 2; i<=n; i+=2){
        array[j] = i;
        j++;
    }
    cout<<array[k-1]<<endl;
return 0;
}
///this method exits memory limit
*/
int main(){
    long long n, k;
    cin>>n>>k;
    long long half;

    if(n%2 == 0){
        half = n/2;
    }
    else{
        half = (n/2) + 1;
    }

    if(k <= half){
        cout<<(2*k)-1<<endl; 
    }
    else{
        cout<<(k-half)*2<<endl;
    }
return 0;
}
///maths
///copied
///(2*k)-1
///(k-half)*2
///don't know these equations formation logic.