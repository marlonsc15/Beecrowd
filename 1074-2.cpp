#include <iostream>

using namespace std;

int main() {

    int n,x;

        cin>>n;

    for(int i = 0; i < n; ++i){
         cin>>x;
        if(x == 0){
            cout<<"NULL \n";
        }else if(x%2 == 0){
            if(x > 0){
                cout<<"EVEN POSITIVE\n";

            }else {
                cout<<"EVEN NEGATIV \n";
            }

        }else{
            if(x > 0){
                cout<<"ODD POSITIVE\n";
            }else {
                cout<<"ODD NEGATIVE\n";
            }

        }
    }

    return 0;
}
