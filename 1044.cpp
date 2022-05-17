#include <iostream>

using namespace std;

int main() {

    int a,b;
    cin>>a>>b;

    if( a < b ){
        if(b % a == 0){
        cout<<"Sao multiplos\n";

            }else{
                cout<<"Nao sao multiplos\n";
            }

        }else{
            if(a % b == 0){
                cout<<"Sao multiplos\n";
                    }else{
                        cout<<"Nao sao multiplos\n";
                    }

        }
    return 0;
}
