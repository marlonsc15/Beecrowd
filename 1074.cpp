#include <iostream>

using namespace std;

int main() {

    int n,x;

        cin>>n;

    for(int i = 0; i < n; ++i){
         cin>>x;
        if(x == 0){
            cout<<"NULL\n";
        }else if(x%2 != 0){
            cout<<"ODD";

        }else if(x%2 == 0){
            cout<<"EVEN";

        }if(x <= -1 ){
            cout<<" NEGATIVE\n";

        }else if(x >= 1){
            cout<<" POSITIVE\n";

        }

    }

    return 0;
}
