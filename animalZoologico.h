#include <conio.h>
#include<string.h>
class animalZoologico{
	char nombre[30];
    
    char tipo[30];
    
	bool salud=false ;
	
	 int dia , mes , anio , pes ;
	
	
	public:
		animalZoologico(char,char,int,int,int,int,bool);
		void alimentar(int,int);
		void revision(int,int,int,int,int,int);
};
