#include <iostream>

using namespace std;

int main() {

    int n = 0,par = 0,impar =0,positivo = 0,negativo = 0 ;


    for(double i=0; i<5;++i){
      cin>>n;
      if(n%2 == 0){
        par++;
      }
      if(n%2 != 0){
        impar++;
      }
      if(n>0){
        positivo++;
      }
      if(n<0){
        negativo++;
      }

    }
    cout<<par<<" valor(es) par(es)\n"<<impar<<" valor(es) impar(es)\n"<<positivo<<" valor(es) positivo(s)\n"<<negativo<<" valor(es) negativo(s)\n";

    return 0;
}
