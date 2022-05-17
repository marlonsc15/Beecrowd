#include <iostream>
#include <iomanip>
using namespace std;

int main() {


    double a,b,c,perimetro,area,maior,soma,triangulo;

    cin>>a>>b>>c;



    if(a>b && a>c){
        maior=a;

       }else if(b>c){
            maior = b;
        }else{
            maior = c;
        }

        if(maior == a){
          soma =(b+c);

          }else if (maior == b){
            soma =(a+c);

          }else{
            soma =(a+b);
          }

    if(soma>maior){
        triangulo= true;
        }else{
            triangulo= false;
        }

   if(triangulo){
    perimetro = a+b+c;
    cout<<fixed<<setprecision(1)<<"Perimetro = "<<perimetro<<"\n";

    }else{
        area= ((a+b)*c)/2;
        cout<<fixed<<setprecision(1)<<"Area = "<<area<<"\n";
    }

    return 0;
}
