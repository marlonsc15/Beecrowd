#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double n,soma,quantia,totalR  = 0,totalS = 0,totalC = 0;
    char tipo;



    cin>>n;

    for(int i = 0; i < n; ++i){

        cin>>quantia>>tipo;



        if(tipo == 'C'){
            totalC += quantia;


        }else if(tipo == 'R'){
            totalR += quantia;


        }else{
            totalS += quantia;

        }

    }

   soma = (totalC+totalR+totalS);

   double c = ((100*totalC)/soma);
   double r = ((100*totalR)/soma);
   double s = ((100*totalS)/soma);


    cout<<"Total: "<<soma<<" cobaias\n";
    cout<<"Total de coelhos: "<<totalC<<"\n";
    cout<<"Total de ratos: "<<totalR<<"\n";
    cout<<"Total de sapos: "<<totalS<<"\n";
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<c<<" %"<<"\n";
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<r<<" %"<<"\n";
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<s<<" %"<<"\n";

    return 0;
}
