#include <stdio.h>
#include<stdlib.h>

//Declarar funciones
void Registrar();
void Ver();

struct Persona{
	int edad;
	char nombre[20];
};

struct Persona pe[2];

int main(int argc, char *argv[]) {
	
	int op = 0;
	do{
		system("cls");
		printf("1.Registar\n");
		printf("2.Ver\n");
		printf("3.Salir\n");
		scanf("%i", &op);
		switch(op){
			case 1: 
				Registrar();
				system("pause");
				break;
			case 2: 
				Ver();
				system("pause");
				break;
			case 3: 
				printf("Adios popo\n"); 
				break;
			default: 
				printf("Si te ibas a equivocar para que nacias\n");
				system("pause"); 
				break;
		}
	} while(op!=3);
	
	return 0;
}

void Registrar(){
	printf("\n\nCodigo de registrar\n\n");
}
	
void Ver(){
	printf("\n\nCodigo de ver\n\n");
}
