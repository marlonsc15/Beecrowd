#include <iostream>


using namespace std;

int main(){

    int i, j;
    for (i = 1, j = 60; j != -5; i += 3, j-=5)
    {
        cout<<"I="<<i<<" J="<<j<<"\n";
    }

    return 0;
}
