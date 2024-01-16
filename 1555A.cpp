///PizzaForces
#include<bits/stdc++.h>
using namespace std;

///long long int time = 0;

int calculation(long long int n, long long time){

    long long size;
    int remainder;
    if(n >= 10){
        size = n/10;
        time = time + size * 25;
        remainder = n%10;
        calculation(remainder, time);
    }
    else if(n >= 8 && n < 10){
        size = n/8;
        time = time + size * 20;
        remainder = n % 8;
        calculation(remainder, time);
    }
    else if(n >= 6 && n < 8){
        size = n/6;
        time = time + size * 15;
        remainder = n%6;
        calculation(remainder, time);
    }
    else if(n < 6){
        size += 1;
        time = time + 15;
    }

return time;
}

int main(){

    int t;
    cin>>t;
    long long n;
    for(int i = 0; i<t; i++){
        cin>>n;
        cout<<calculation(n, 0)<<"\n";
    }

return 0;
}