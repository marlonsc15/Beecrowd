#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double x=0,y=0;


    cin>>x>>y;

    if(x == 0.0 && y == 0.0){
        cout<<"Origem\n";

    }else if(x > 0.0  && y > 0.0){
        cout<<"Q1\n";

    }else if(x > 0.0 && y < 0.0){
        cout<<"Q4\n";

    }else if(x < 0.0 && y > 0.0){
        cout<<"Q2\n";

    }else if(x < 0.0 && y < 0.0)
        cout<<"Q3\n";

    if (x == 0.0  && y != 0.0 ){
        cout<<"Eixo X\n";

    }else if(x != 0.0 && y == 0.0 ){
        cout<<"Eixo Y\n";
    }

    return 0;
}
