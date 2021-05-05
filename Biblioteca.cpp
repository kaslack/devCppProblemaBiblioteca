#include<iostream>
#include <string>

using namespace std;

struct Biblioteca{
	
	int numeroPaginas, edicion;
	char autor[], titulo[], editorial[];
	
};

void metodoImprimir(Biblioteca libros[], int magnitud);

int main(){
	
	int seleccionOrdenamiento;
	string imprimir;
	struct Biblioteca libros[10];
	struct Biblioteca auxiliar;	
	
	cout << "/--------------------------------------------- Biblioteca a la colombiana. ---------------------------------------------/" << endl;
	cout << "Por favor a continuacion digite la información de 10 libros." << endl;
		
	for(int i = 0; i <= 9; i++){
		
		cout << "/---------- Libro #" << i+1 << ". ----------/" << endl;
		
		cout << "Digite el titulo del libro: ";
		fflush(stdin);		
		scanf("%[^\n]", libros[i].titulo);
		
		cout << "Digite el autor del libro: ";
		fflush(stdin);				
		scanf("%[^\n]", libros[i].autor);
				
		cout << "Digite el edicion del libro(en numeros): ";
		fflush(stdin);								
		cin >> libros[i].edicion;
		
		cout << "Digite la editorial del libro(nombre): ";
		fflush(stdin);						
		scanf("%[^\n]", libros[i].editorial);
				
		cout << "Digite el numero de las paginas: ";
		fflush(stdin);		
		cin >> libros[i].numeroPaginas;	
		
		cout << endl;
				
	}
	
	fflush(stdin);		
		
	cout << "/-- Ahora se va a organizar los libros, decida como quiere organizarlos: --/" << endl;
	cout << "1. Digite 1 para organizarlo numericamente por la cantidad de paginas." << endl;
	cout << "2. Digite 2 para organizarlo numericamente por la edicion." << endl;	
	cin >> seleccionOrdenamiento;		
		
	if(seleccionOrdenamiento == 1){
		
		for(int i = 0; i <= 9; i++){
			
			for(int j = 0; j <= 9; j++){
			
				if(libros[i].numeroPaginas < libros[j].numeroPaginas){
				
					auxiliar = libros[i];
					libros[i] = libros[j];
					libros[j] = auxiliar;
					
				}
			
			}
			
		}
		
		cout << "¿Imprimir libros?(si/no): ";
		cin >> imprimir;
		
		if(imprimir == "si"){
			
			metodoImprimir(libros, 10);
			
		}
		
	}	
	
	if(seleccionOrdenamiento == 2){
		
		for(int i = 0; i <= 9; i++){
			
			for(int j = 0; j <= 9; j++){
			
				if(libros[i].edicion < libros[j].edicion){
				
					auxiliar = libros[i];
					libros[i] = libros[j];
					libros[j] = auxiliar;
					
				}
			
			}
			
		}
		
		cout << "¿Imprimir libros?(si/no): ";
		cin >> imprimir;
		
		if(imprimir == "si"){
			
			metodoImprimir(libros, 10);			
			
		}
				
	}		

}

void metodoImprimir(Biblioteca libros[], int magnitud){
		
	for(int i = 0; i <= magnitud-1; i++){
		
		cout << "/---------- Libro #" << i+1 << ". ----------/" << endl;
				
		cout << "Titulo del libro: ";
		printf(libros[i].titulo);
		cout << endl;		
		
		cout << "Autor del libro: ";
		printf(libros[i].autor);
		cout << endl;	
						
		cout << "Edicion del libro: ";
		cout << libros[i].edicion;
		cout << endl;
		
		cout << "Editorial del libro: ";
		printf(libros[i].editorial);
		cout << endl;			
		
		cout << "Numero de las paginas: ";
		cout << libros[i].numeroPaginas;				
		cout << endl;			
							
	}	
		
}
