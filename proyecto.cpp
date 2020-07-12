#include "iostream"

using namespace std;

//Estructura a usar//
const int longCad = 20;

struct costoPorArticulo{
char nombreArticulo[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
//Declaracion de mi arreglo//
}extrasarticulo[100];

//Primera funcion, aca se ingresan los datos para guardarlos en el arreglo estructural//
void room1(int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout <<"------------------------------------------------------------";
        cout <<"\nDigite el nombre del producto: "<<endl;
        cin >>extrasarticulo[i].nombreArticulo;
        cout <<"Digite la cantidad del producto: "<<endl;
        cin >>extrasarticulo[i].cantidad; 
        cout <<"Digite el costo del producto: $"<<endl;
        cin >>extrasarticulo[i].costoPorArticulo; 
        cout <<"------------------------------------------------------------";
    }

}


//Segunda funcion, sacamos el precio unitario que se lo asignamremos a precio para esto se multiplica el costo del articulo por la cantidad//
void room2(int tam)
{
        for (int i = 0; i < tam; i++){
        
                extrasarticulo[i].precio = extrasarticulo[i].costoPorArticulo*extrasarticulo[i].cantidad;
            }

}       
//Tercera funcion, aqui si imprimen al usuario los datos que ingreso junto con el precio por unidad previamente sacado//
void room3(int tam)
{
    for (int i = 0; i < tam; i++){
   
    cout <<endl;
     cout <<"----------------------------------------------------------------";
    cout <<"\nEl nombre del producto que ingreso fue: " <<extrasarticulo[i].nombreArticulo <<endl;
    cout <<"La cantidad del producto que ingreso fue: " <<extrasarticulo[i].cantidad <<endl;
    cout <<"El costo del producto que digito fue: $" <<extrasarticulo[i].costoPorArticulo <<endl;
    cout <<"El precio por articulo es de: $" <<extrasarticulo[i].precio <<endl;
    cout <<endl;
    cout <<"----------------------------------------------------------------";
}
//Cuarta funcion, sacamos el total que se gasto, para esto iremos sumando el precio unitario de cada producto//
//La variable la hice global para no declararla dento del for y mas adelante dentro del main//
}
float total;

void room4(int tam)
{
    
        for (int i = 0; i < tam; i++){

            total += extrasarticulo[i].precio;
            
            }
}


//funcion main, aca mandamos a llamar a las funciones y el valor del total que se saco antes lo desplegamos en main//
int main()
{
    cout <<"\n-------------------------------------------------------------";
    cout <<"\n***** Welcome to Wolves Industries store *****";
    
cout <<endl;
int tam;
   cout <<"----------------------------------------------------------------";
    cout <<"\nDigite la cantidad de productos: ";
    cin >>tam;
    
    room1(tam);
     room2(tam);
      room3(tam);
       room4(tam);


    cout <<"\nEl total a pagar fue de: $";
    cout <<total;
    cout <<endl;
    cout <<"---------------------------------------------------------------";
return 0;
} 