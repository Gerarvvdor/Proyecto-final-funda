#include <iostream>
using namespace std;

const int longCad = 20;

struct costoPorArticulo{
char nombreArticulo[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
};

void leer(int cant, costoPorArticulo fact_compra [100]);
void cost_x_art(int cant, costoPorArticulo fact_compra[100]);
void desplegar(int cant, costoPorArticulo fact_compra[100]);
float costo_compra(int cant, costoPorArticulo fact_compra[100]);


int main(){
    int cant;

    cout<<"SUPERMERCADO AY AY AY!! ¡BIENVENIDO!"<<endl<<endl<<endl;
    cout<<"Ingrese la cantidad de productos de su compra: ";
    cin>>cant;
    cout<<endl<<endl; 
       
    costoPorArticulo fact_compra[cant];//*Arreglo tipo struct*//

    leer(cant, fact_compra);
    cost_x_art(cant, fact_compra);
    desplegar(cant, fact_compra);

    cout<<"El total de su compra es: $"<<costo_compra(cant, fact_compra);

    return 0;
}

//*Función de indicación B*//
void leer(int cant, costoPorArticulo fact_compra[100]){
   cout<<"Ingrese el nombre, cantidad y precio por unidad del producto: "<<endl;
    for (int i = 0; i < cant; i++){
        fflush(stdin);
        cout<<"Nombre del producto: ";
        cin.getline(fact_compra[i].nombreArticulo,21,'\n');
        cout<<"Cantidad:";
        cin>>fact_compra[i].cantidad,'\n';
        cout<<"Precio: ";
        cin>>fact_compra[i].precio,'\n';
        cout<<endl;
    }
}

//*Funcion de indicación C*//
void cost_x_art(int cant, costoPorArticulo fact_compra[100]){
    float cost_unidad;  
    for (int i = 0; i < cant; i++){
        if(fact_compra[i].cantidad >= 1){
        fact_compra[i].costoPorArticulo = fact_compra[i].cantidad*fact_compra[i].precio;
        }
    }
}

//*Función de indicación D*//
void desplegar(int cant, costoPorArticulo fact_compra[100]){
    for (int i = 0; i < cant; i++){
        cout<<"Nombre del artículo: "<<fact_compra[i].nombreArticulo<<endl;
        cout<<"Cantidad a comprar: "<<fact_compra[i].cantidad<<endl;
        cout<<"Precio unitario del artículo: "<<fact_compra[i].precio<<endl;
        cout<<"Costo por  cantidad de producto: "<<fact_compra[i].costoPorArticulo<<endl<<endl;
    }
}

//*Función de indicación E*//
float costo_compra(int cant, costoPorArticulo fact_compra[100]){
    float total_compra = 0;
    for (int i = 0; i < cant; i++){
        fact_compra[i].nombreArticulo;
        fact_compra[i].cantidad;
        fact_compra[i].precio;
        total_compra += fact_compra[i].costoPorArticulo;
    }
    return total_compra;
};