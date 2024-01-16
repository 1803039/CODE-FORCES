///Beautiful year
#include<bits/stdc++.h>
using namespace std;

int distinct(int i){
    
    int k = 0;
    int flag = 0;
    int array[4];

    while (k < 4){
        int remainder = (i % 10);
        array[k] = remainder;
    i = (i / 10);
    k++;
    }

    sort(array, array+4);

    for(int a = 1; a<4; a++){
        if(array[a-1] == array[a]){
            return 0;
        }
        else flag++;
    }

    if(flag == 3){
        return 1;
    }

return 0;
}

int main(){

    int y;
    cin>>y;

    for( int i = y+1; ; i++ ){
        if(distinct(i) == 1){
            cout<<i<<'\n';
            return 0;
        }
        else if (distinct(i) == 0){
            continue;
        }
    }

return 0;
}
///complete