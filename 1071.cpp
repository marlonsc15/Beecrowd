#include <iostream>

using namespace std;

int main() {

    int x,y,i,Max,Min,soma = 0;

    cin>>x>>y;

    if(x>y){
        Max = x;
        Min = y;
    }else{
        Max = y;
        Min = x;
    }
    for(i = (Min+1); i < Max; ++i){
        if(i%2 != 0){
            soma += i;
        }
    }

    cout<<soma<<"\n";

    return 0;
}
