#include <iostream>

using namespace std;

int main() {

    int n,x;
    cin>>n;

    for(int i = 0; i < 10000; i++ ){
        if(i%n == 2){
        cout<<i<<"\n";
        }

    }

    return 0;
}
