#include <stdio.h>

int main(){//primer men�

    int opc;


    puts("~~~~~Menu~~~~~");
    puts("1.Carta.");
    puts("2.Editar carta.");
    puts("3.Salir. \n");

    printf("Seleccione opcion.\n");
    scanf("%d",&opc);


    switch(opc){
    case 1 :
        carta();
        break;
    }
}
void carta(){
    int cart;
    char op;
    int suma;
    int coca = 20;
    int total;
    int nuevo;

    do{//Funcion do while para imprimir el menu
    puts("Carta.");/*Men� con precios*/
    puts("-Bebidas:");
    puts("1.Coca cola-----$20.");
    puts("2.Cafe-----$25.");
    puts("3.Agua de sabor-----$20.");

    puts(" ");
    puts(" ");

    puts("-Platillos:");
    puts("Cada platillo incluye arroz blanco u opcion a sopa miso, elote, hongos shitake y huevo hervido o pochado.");
    puts("4.Wakayama-Ramen $150 \n (Fideos de estilo chino acompa�ado de cebolletas y naruto, \n con una combinacion de caldo de huesos de cerdo y de caldo a base de salsa soja).");
    puts("5.Okinawa Soba-Ramen $150 \n (Fideos soba acompa�ado de proteina de cerdo, algas y katsuobushi, \n con un caldo al estilo ramen y un topping de costilla de cerdo con hueso). ");
    puts("6.Onomichi-Ramen $150 \n (Fideos finos acompa�ado de mariscos o pollo, \n con una combinacion de pollo y un poco de carne de cerdo para el caldo).");
    puts("7.Sapporo Miso-Ramen $150 \n (Fideos finos acompa�ado de proteina de cerdo o res, \n con una combinado de pasta miso, genjibre y ajo para el caldo).");
    puts("8.Hakata Tonkotsu-Ramen $150 \n (Fideos finos acompa�ado de proteina de res o cerdo,\n con una combinacion de mariscos con huesos de cerdo para el caldo).");
    puts("Salir.");

    puts(" ");
    puts("Seleccione una opci�n. ");
    scanf("%d",&cart);

    switch(cart){
    case 1 :

        printf("Selecciono coca cola.\n");
        printf("El costo es %d \n", coca);
        system("pause");
        puts("Desea seleccionar algo m�s (y/n)? ");
        scanf("%c", &op);

        break;

        }

    } while(cart!=1);


}



