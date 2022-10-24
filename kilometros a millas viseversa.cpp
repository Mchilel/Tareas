#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 
 main(){
 	char resp;
 int num,num2,num3,num4,num5,c,c2,c3,c4;
 float cm,km,m,dm;
 
 do{
 	printf("Hola, este programa  es un converson de unidades de medida (logintud).\n\n");
 
 	printf("Seleccione la unidad a la que quiere convertir. \n1.-Metros\n2.-Cent\241metros \n3.-Dec\241metros \n4.-Kil\242metros\n\n");
 	scanf("%d",&num);
 	system("cls");
 	if(num==1){
 		printf("Ud; Ha seleccionado la opcion de Metros\n\n");
 		printf("¿A que unidad lo quiere convertir? \n1.-Metros-->cm \n2.-Metros-->dm \n3.-Metros-->km\n\n");
 		scanf("%d",&num2);
 		system("cls");
		 printf("Ingrese el numero a convertir\n");
 		scanf("%d",&c);
 		} if(num2==1){
 		cm=c*100;
 		printf("Los cent\241metros son: %.3f",cm);
	 }else
	 if(num2==2){
	 	dm=c/0.1000;
	 	printf("Los dec\241metros son de :%.3f",dm);
	 }else
	 	if(num2==3){
	 		km=c*1000;
	 		printf("Los kil\242metros son de : %.3f",km);
		 }else
		 if(num==2){
		 	printf("Ud;ha seleccionado la opcion de Centímetros\n");
		 	printf("A que unidad lo quiere convertir.\n \n1.-Cent\241metros-->M\n \n2.-Cent\241metros-->dm \n3.-Cent\241metros--->k\n\n");
		 	scanf("%d",&num3);
		 	 printf("ingrese el numero a convertir\n");
		 	 scanf("%d",&c2);
			 if(num3==1){
			 	m=c2/100;
			 	printf("Los metros son de: %.3f",m);
			 }else
			  if(num3==2){
			    dm=c2*0.1000;
			  	printf("Los dec\241metros son de: %.4f",dm);
			  }else
			  if(num3==3){
			  	km=c2*0.000010;
			  	printf("Los kil\242metros son de :%.8f",km);
 
			  }else
			  if(num==3){
			  printf("Ud;ha seleccionado la opcion de Decímetros\n");
		 	printf("A que unidad lo quiere convertir. 1.-Decimetros-->M\n 2.-DC-->cm 3.-Dc--->k");
		 	scanf("%d",&num4);
		 	printf("ingrese el numero a convertir\n");
		 	 scanf("%d",&c3);
			 if(num4==1){
			 	m=c3*0.1000;
			 	printf("Los metros son de: %.4f",m);
			 }else
			 if(num4==2){
			 	cm=c3*10;
			 	printf("Los cent\241metros son de : %.3f",cm);
 
				 }else
				 if(num4==3){
				 	km=c3*0.0001;
				 	printf("Los kil\242metros son de : %.7f",km);
 
				 }else
			  if(num==4){
			  printf("Ud;ha seleccionado la opcion de kilómetros\n");
		 	printf("A que unidad lo quiere convertir. 1.-kilómetros-->M\n 2.-km-->cm 3.-km--->dm");
		 	scanf("%d",&num5);
		 	printf("Ingrese el numero a convertir\n");
		 	scanf("%d",&c4);
			 if(num5==1){
		 		m=c4*1000;
		 		printf("Los metros son de: %.6f",m);
 
				 }else
				 if(num5==2){
				 	cm=c4*100000;
				 	printf("Los cent\241metros son de: %.8f",cm);
 
				 }else
				 if(num5==3){
				 	dm=c4*10000;
				 	printf("los Dec\241metros son de: %.8f",dm);
 
				 	printf("¿Desea convertir otro numero?");
				 	scanf("%s",&resp);
				 }
			}
		}
	}
}
				 	while(resp=='s');
				 	getch();
 
 
 
			}
