#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int n,i,x;

    cin>>n;

        for(i = 2; i <= n; i++){

            if(i%2 == 0){
              cout<<i*i/i<<"^2 = "<<i*i<<"\n";
            }
        }

    return 0;
}
