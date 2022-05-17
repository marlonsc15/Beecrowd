#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main (){

    double A,B,C,T,R1,R2;

    cin>>A>>B>>C;

    if(((B*B)-4*A*C)<0 || A==0){
        cout<<"impossivel calcular\n";
        }else{
        T=sqrt((B*B)-4*A*C);
        R1=((-B + T)/(2 * A));
        R2=((-B - T)/(2 * A));
        cout<<fixed;
        cout<<setprecision(5)<<"R1 = "<<R1<<"\n";
        cout<<setprecision(5)<<"R2 = "<<R2<<"\n";

}

return 0;
}
