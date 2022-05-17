#include <iostream>

using namespace std;

int main() {

      double i, j, y, x;

    for (i = 0, j = 1, y = 0, x = 1; i <= 2; j++){



        if(y == 3){
            i += 0.2;
            x += 0.2;
            j = x;
            y = 0;
        }

        if(i > 2)
            return 0;


    cout<<"I="<<i<<" J="<<j<<"\n";
    y++;

    }
}
