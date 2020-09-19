#include <stdlib.h>
#include <stdio.h>

void enteros()
{
    int num[5],i;
    int sum=0;

    printf("Ingrese 5 numeros enteros:\n");
    for(i=0;i<5;i++){
    printf(" ");
    scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++){
    sum=sum+num[i];
    }
    printf("Suma: %d\n",sum);
    printf("Promedio:%.2f\n",sum/5.0);
}

void mostrar(int n,char cad[]){
    int i;
	for(i=0;i<n;i++){
		printf("%s",cad);
		}
	}

int main(){

	int op;
	char cad[20];
	int n;
	do{
		printf("\n1. Capturar\n2. Mostrar Cadena n Veces\n3. Agregar personaje\n0. Salir\n");
		scanf("%d",&op);

		switch(op){
			case 1:{
				enteros();
				break;
			}
			case 2:{
				printf("Ingrese una cadena de hasta 20 caracteres: ");
				fflush(stdin);
				fgets(cad,20,stdin);
				printf("n:");
				scanf("%d",&n);
				mostrar(n,cad);
				break;
			}
			case 3:{

				break;
			}
			case 4:{

				break;
			}
		}
		}while(op!=0);

return 0;
}


