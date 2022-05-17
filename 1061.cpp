#include <iostream>

using namespace std;

    int main(){
    string texto;
    int horaInicial,horaTermino,minutoInicial,minutoTermino,diaInicial,diaTermino,segundosInicial,segundosTermino;

    cin >> texto >> diaInicial;
    cin >> horaInicial >> texto >> minutoInicial >> texto >> segundosInicial;
    cin >> texto >> diaTermino;
    cin >> horaTermino >> texto >> minutoTermino >> texto >> segundosTermino;

    segundosInicial = segundosTermino - segundosInicial;
    minutoInicial = minutoTermino - minutoInicial;
    horaInicial = horaTermino - horaInicial;
    diaInicial = diaTermino - diaInicial;

    if(segundosInicial<0){
        segundosInicial+=60;
        minutoInicial--;
    }

    if(minutoInicial<0){
        minutoInicial+=60;
        horaInicial--;
    }

    if(horaInicial<0){
        horaInicial+=24;
        diaInicial--;
    }
    cout << diaInicial << " dia(s)" << endl;
    cout << horaInicial << " hora(s)" << endl;
    cout << minutoInicial << " minuto(s)" << endl;
    cout << segundosInicial << " segundo(s)" << endl;

    return 0;
    }
