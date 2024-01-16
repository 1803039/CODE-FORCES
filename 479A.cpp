///Expression
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int maximum = 0;
    int result;
    result = a+b+c;
    maximum = max(result, maximum);
    result = a*b*c;
    maximum = max(result, maximum);
    result = (a*b)+c;
    maximum = max(result, maximum);
    result = (a+b)*c;
    maximum = max(result, maximum);
    result = a+(b*c);
    maximum = max(result, maximum);
    result = a*(b+c);
    maximum = max(result, maximum);

    cout<<maximum<<endl;
return 0;
}
///complete
///brute force