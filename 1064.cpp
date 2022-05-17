#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    double n=0,s=0;
    int tmp =0;

      for(double i=0; i<6;++i){
      cin>>n;
      if(n>0){
      s=s+n;
      tmp++;
      }
}
      cout<<tmp<<" valores positivos\n";
      cout<<fixed<<setprecision(1)<<s/tmp<<"\n";

    return 0;
}
