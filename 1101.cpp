#include <iostream>

using namespace std;

int main() {

    int i,n,m,soma = 0;



    while(1){

    cin>>m>>n;

        if(m <= 0 || n <= 0  ){
        break;

        } else if(m>n){

            soma = 0;
            for( i = n;i <= m; i++){

            cout<<i<<" ";
            soma += i ;

            }

        cout<<"Sum="<<soma<<"\n";


        } else {
            soma =0;
            for(i = m; i <= n; i++){

            cout<<i<<" ";
            soma += i;
            }

        cout<<"Sum="<<soma<<"\n";
        soma = 0;
        }
   }
    return 0;
}
