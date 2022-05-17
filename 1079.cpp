#include <iostream>
 #include <iomanip>

using namespace std;

int main() {


    int n ;
    double x1,x2,x3,media;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>x1>>x2>>x3;
        media = (x1*2 + x2*3 + x3*5)/10;
        cout<<fixed<<setprecision(1)<<media<<"\n";

    }



    return 0;
}
