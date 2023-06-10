#include <iostream>
using namespace std;

int main(){
    int ubicacion, cantidad, precio, total;
    string bebida;
    
    cout<<"************SELECCIONE LA UBICACION DE SU PREFERENCIA:*************"<<endl;
    cout<<"1.GENERAL - COSTO DE S/ 50" <<endl;
    cout<<"2.PREFERNECIAL - COSTO DE S/ 80" <<endl;
    cout<<"3.PLATA - COSTO DE S/ 120" <<endl;
    cout<<"4.VIP - COSTO DE S/ 160" <<endl;
    cout<<"ELIJA LA UBICAION DE SU AGRADO: ";
    cin>>ubicacion;
    
    cout<<"INGRESE LA CANTIDAD DE ENTRADAS: ";
    cin>>cantidad;
    
    switch(ubicacion){
        case 1:
            precio = 50;
            break;
        case 2:
            precio = 80;
            break;
        case 3:
            precio = 120;
            break;
        case 4:
            precio = 160;
            cout<<"ENHORABUENA USTED ELIGIO VIP, FELICITACIONES ELIJA SU BEBIDA (GASEOSA, CERVEZA, AGUA): ";
            cin >>bebida;
            break;
        defaut:
            cout<<"OPCION INVALIDA"<<endl;
            return 0;
            
    }
    
    total = precio * cantidad;
    cout<<" EL TOTAL DE PAGAR ES: " << total << endl;
    
    if (ubicacion == 4){
      cout<<"BEBIDA ELEGIDA: "<< bebida << endl;
    }
    return 0;
    
}
    
