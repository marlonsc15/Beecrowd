#include <iostream>

using namespace std;

int main() {

    int n,i,maximo = 0,lugar = 0 ;

    for( i = 1; i < 100; i++){
        cin>>n;

        if(n > maximo){
            maximo = n;
            lugar = i;
        }
    }

        cout<<maximo<<"\n"<<lugar<<"\n";
    return 0;
}
