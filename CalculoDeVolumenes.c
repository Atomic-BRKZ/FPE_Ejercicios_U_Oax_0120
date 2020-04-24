//Programa que llama a diferentes funciones para calcular el volumen de cuerpos geométricos.

#include <stdio.h>
#include <stdlib.h>


float volumen_cono(float radio, float altura);
float volumenDeEsfera(float radio);
float VParale(float x,float y,float t);
float Vcili(float t,float v);

int main()
{
    float a,l,h,r,h1;
    char c,rpt;
    float radio_base_cono, altura_cono, radio_esfera, altura_prisma, area_base_prisma;
    printf("Programa que calcula el volumen de cuerpos geometricos\n");
    printf("\n");
    printf("db    db  .d88b.  db      db    db .88b  d88. d88888b d8b   db \n");
    printf("88    88 .8P  Y8. 88      88    88 88'YbdP`88 88'     888o  88 \n");
    printf("Y8    8P 88    88 88      88    88 88  88  88 88ooooo 88V8o 88 \n");
    printf("`8b  d8' 88    88 88      88    88 88  88  88 88~~~~~ 88 V8o88 \n");
    printf(" `8bd8'  `8b  d8' 88booo. 88b  d88 88  88  88 88.     88  V888 \n");
    printf("   YP     `Y88P'  Y88888P ~Y8888P' YP  YP  YP Y88888P VP   V8P \n");
    printf("\n");
    
    printf("Radio de la esfera:\n");
    scanf("%f", &radio_esfera);
    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("Volumen dela esfera es: %f",volumenDeEsfera(radio_esfera));
    
    //Aqui inicia para cono y prisma del equipo 1
    printf("Digite el area de la base: ");
    scanf("%f", &area_base_prisma);
    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("Digite la altura: ");
    scanf("%f", &altura_prisma);
    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("El volumen del prisma es %.4lf u^3", volumen_prisma(area_base_prisma,altura_prisma));
    
    printf("Digite el radio: ");
    scanf("%f", &radio_base_cono);
    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("Digite la altura: ");
    scanf("%f",&altura_cono);
    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("El volumen del cono es %.4lf u^3", volumen_cono(radio_base_cono,altura_cono));
    
    printf("Programa que calcula el volumen de figuras geometricas \n");
 		printf("Deseas calcular el area de un Paralelepipedo o de un Cilindro? p/c\tt\n");
 		scanf("%c",&rpt);
 		switch(rpt)
 		{
 			case 'p':
 		 	do{
 		 		printf("Dame el primer lado\n");
 		 		 scanf("%f",&a);
 		 		printf("Dame el segundo lado\n");
 		 		 scanf("%f",&l);
 		 		printf("Dame la altura\n");
 		 		 scanf("%f",&h);
 		 		 }while((a==0)||(l==0)||(h==0));
 		 		 printf("El volumen del paralelepipedo es de %f \n",VParale(a,l,h));
 		 		 break;
	     case 'c':
	     	 do{
	     	 	printf("Dame el Radio del cilindro");
 		 		 scanf("%f",&r);
 		 		printf("Dame la altura");
 		 		 scanf("%f",&h1);
			  }while((r==0)||(h1==0));
			  printf("El volumen del paralelepipedo es de %f \n",Vcili(l,h1));
 	           break;
		 }
}
