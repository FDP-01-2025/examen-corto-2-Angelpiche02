#include <iostream>
using namespace std;

int main(){

    int edad, usuario, opcion;
    int saldo = 1000;
    float resultado;

    cout <<"Usted tiene un saldo de $1000"<< endl;
    cout <<"-------------------------------"<< endl;

    cout <<"Ingrese su edad: ";
    cin >> edad;

    if (edad < 16){
        cout <<"No puede comprar nada"<< endl;
        return 0;
    }

    else{
        cout <<"Puede continuar"<< endl;
    }

    cout <<"Que tipo de usuario eres?"<< endl;
    cout <<"1. Estudiante"<< endl;
    cout <<"2. Profesional"<< endl;
    cout <<"3. Ver todos"<< endl;
    cin >> usuario;

    switch (usuario){

        case 1: 
        cout <<"Tiene un 20% de descuento por ser estudiante"<< endl;
        cout <<"Que opcion le gusta mas?"<< endl;
        cout <<"1. Laptop basica ($900)"<< endl;
        cout <<"2. Tablet estudiantil ($600)"<< endl;
        cout <<"3. Chromebook ($700)"<< endl;
        cin >> opcion;

        switch(opcion){

            case 1:
            resultado = saldo - (900 - (900 * 20)/100);
            cout <<"La compra de la laptop basica fue exitosa"<<endl;
            cout <<"Su saldo actual es de: "<< resultado<< endl;
            return 0;
            break;

            case 2:
            resultado = resultado = saldo - (600 - (600 * 20)/100);
            cout <<"La compra de la tablet estudiantil fue exitosa"<<endl;
            cout <<"Su saldo actual es de: "<< resultado<< endl;
            return 0;
            break;

            case 3:
            resultado = resultado = saldo - (700 - (700 * 20)/100);
            cout <<"La compra de la Chromebook fue exitosa"<<endl;
            cout <<"Su saldo actual es de: "<< resultado<< endl;
            return 0 ;
            break;

            default:
            cout <<"Error"<< endl;
            return 0;
        }

        case 2:
        cout <<"Tiene un 10% de descuento por ser profesional"<< endl;
        cout <<"Que opcion le gusta mas?"<< endl;
        cout <<"1. Laptop Avanzada: $1500"<< endl;
        cout <<"2. Tablet Pro: $1200"<< endl;
        cout <<"3. Estacion de Trabajo: $2000"<< endl;
        cin >> opcion;

        switch (opcion){

            case 1:
            resultado = saldo - (1500 - (1500 * 10)/100);
            cout <<"La compra de la laptop avanzada no fue exitosa"<< endl;
            cout <<"Le hacen falta "<<resultado<< " para adquirirla"<< endl;
            return 0;
            break;

            case 2:
            resultado = saldo - (1200 - (1200 * 10)/100);
            cout <<"La compra de la tablet pro no fue exitosa"<< endl;
            cout <<"Le hace falta "<<resultado<<" para adquirirla"<< endl;
            return 0;
            break;

            case 3:
            resultado = saldo - (2000 - (2000 * 10)/100);
            cout <<"La compra de la estacion de trabajo no fue exitosa"<<endl;
            cout <<"Le hacen falta "<<resultado<<" para adquirirla"<< endl;
            return 0;
            break;

            default:
            cout <<"Error"<< endl;
            return 0;

        }

        case 3:
        cout <<"-----ESTUDIANTES-----"<< endl;
        cout <<"Tiene un 20% de descuento por ser estudiante"<< endl;
        cout <<"Que opcion le gusta mas?"<< endl;
        cout <<"1. Laptop basica ($900)"<< endl;
        cout <<"2. Tablet estudiantil ($600)"<< endl;
        cout <<"3. Chromebook ($700)"<< endl;

        cout <<"-----PROFESIONALES-----"<< endl;
        cout <<"Tiene un 10% de descuento por ser profesional"<< endl;
        cout <<"Que opcion le gusta mas?"<< endl;
        cout <<"1. Laptop Avanzada: $1500"<< endl;
        cout <<"2. Tablet Pro: $1200"<< endl;
        cout <<"3. Estacion de Trabajo: $2000"<< endl;

    }


    return 0;
}