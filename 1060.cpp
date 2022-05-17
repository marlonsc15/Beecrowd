#include <iostream>

using namespace std;

int main() {


    double n;
    int tmp =0;

    for(int i=0; i<6; ++i ){
      cin>>n;
      if(n>0){
        tmp++;
        }
    }

    cout<<tmp<<" valores positivos\n";

    return 0;
}
