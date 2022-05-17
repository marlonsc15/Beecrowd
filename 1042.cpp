#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;

    if(a > b && b > c){
            cout<<"\n"<<c<<"\n"<<b<<"\n"<<a;

        }else if (a > c && c > b){
            cout<<"\n"<<b<<"\n"<<c<<"\n"<<a;

        }else if (b > a && a > c){
            cout<<"\n"<<c<<"\n"<<a<<"\n"<<b;

        }else if (b > c && c > a){
            cout<<"\n"<<a<<"\n"<<c<<"\n"<<b;

        }else if (c > a && a > b){
            cout<<"\n"<<b<<"\n"<<a<<"\n"<<c;

        }else if (c > b && a > b){
            cout<<"\n"<<b<<"\n"<<b<<"\n"<<c;
        }
    cout<<"\n"<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";


    return 0;
}
