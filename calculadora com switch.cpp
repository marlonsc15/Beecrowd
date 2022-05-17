#include<iostream>
#include<iomanip>


using namespace std;

int main(){

    int n1,n2,op;

        cout<<"Bem vindo a Calculadora\n";
        cout<<"qual o primeiro valor? \n";
        cin>>n1;
        cout<<"Escolha entre as opçoes:\n1 Soma\n2 Subtraçao\n3 Multiplicaçao\n4 Divisao\n";
        cin>>op;
        cout<<"qual o segundo valor? \n";
        cin>>n2;



        switch(op){
            case 0 :
                cout<<"saindo";
            case 1 :
                cout<<"resultado "<< n1 + n2<<"\n";
                break;
            case 2 :
                cout<<"resultado "<< n1 - n2<<"\n";
                break;
            case 3 :
                cout<<"resultado "<< n1 * n2<<"\n";
                break;
            case 4 :
                cout<<"resultado "<< n1 / n2<<"\n";
                break;
            default:
                cout<<"valor nao encontrado\n";
                break;
        }

return 0;
}
