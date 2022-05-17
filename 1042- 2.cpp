#include <iostream>

using namespace std;

int main(){

    int a,b,c;
    int minimo, meio, maximo;

    cin>>a>>b>>c;

    if(a < b && a < c){
        minimo = a;
        if(b < c){
            meio = b;
            maximo = c;
        }else{
            meio = c;
            maximo = b;
        }
    }else if(b < a && b < c){
        minimo = b;
        if(a < c){
            meio = a;
            maximo = c;
        }else{
            meio = c;
            maximo = a;
        }
    }else{
        minimo = c;
        if(a < b){
            meio = a;
            maximo = b;
        }else{
            meio = b;
            maximo = a;
        }
    }
      cout<<minimo<<"\n"<<meio<<"\n"<<maximo<<"\n";

      cout<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";

    return 0;
}



