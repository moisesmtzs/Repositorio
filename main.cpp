#include <iostream>
#include <windows.h>

using namespace std;
int nombre();
int main();


int main(){

    int opt;
    do{
        cout<<"-------------------------------------------\n";
        cout<<"\t\tMENÚ PRINCIPAL\n";
        cout<<"-------------------------------------------\n\n";
        cout<<"\t\t1.- Ingresar nombre \n";
        cout<<"\t\t2.- Salir\n\n";
        cout<<"Elige una opción  \n";
        cin>>opt;
        switch(opt)
        {
            case 1:
                nombre();
                break;

            case 2:
                cout<<"\n";
                cout<<"\t\tHASTA LUEGO...";
                cout<<"\n\n\n";
                system("PAUSE");
                cout<<"\n";
                return 0;
            default: cout<<"\n\tEsa opción no es válida, intenta de nuevo\n\n";
            system("PAUSE");
        }
    }while (opt!=2);
    
    return 0;

}

int nombre(){

    char nombre[150];
    cout<<"Nombre: ";
    cin.ignore();
    cin>>nombre;

}