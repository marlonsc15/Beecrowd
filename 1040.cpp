#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    float N1,N2,N3,N4,media,exame;
    cin>>N1>>N2>>N3>>N4;
    media = (N1*2 + N2*3 + N3*4 + N4)/10;

    if(media >= 7.0){

        cout<<fixed<<setprecision(1)<<"\nMedia: "<<media<<"\nAluno aprovado.\n";

    }else if (media >= 5.0 && media <= 6.9 ){

        cout<<fixed<<setprecision(1)<<"\nMedia: "<<media<<"\nAluno em exame.\n";
        cin>>exame;
        cout<<"Nota do exame: "<<exame<<"\n";

        if((media + exame)/2 >= 5){

            cout<<fixed<<setprecision(1)<<"Aluno aprovado.\n";

        }else{

            cout<<fixed<<setprecision(1)<<"Aluno reprovado.\n";

        }
        cout<<fixed<<setprecision(1)<<"Media final: "<<(media + exame)/2<<"\n";

    }else if(media < 5.0){

        cout<<fixed<<setprecision(1)<<"\nMedia: "<<media<<"\nAluno  reprovado.\n";

    }

    return 0;
}
