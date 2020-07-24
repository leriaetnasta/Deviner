#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
COORD coord = {0, 0};// fixe les coordonnées à 0,0
int i,j;

void gotoxy(int x, int y){
 COORD coord;
 coord.X = x;
 coord.Y = y;// Coordonnées X et Y
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);// on se déplace vers les coordonnées
}
void box(){

	for(i=0;i<44;i++)//Nord
	{
		gotoxy(38+i,20);
		printf("%c",176);
	}



	for(i=5;i<20;i++) // Ouest
	{
		gotoxy(38,i);
		printf("%c",176);
	}

	for(i=0;i<44;i++) //sud
	{
		gotoxy(38+i,4);
		printf("%c",176);
	}


	for(i=5;i<20;i++)//Est
	{
		gotoxy(81,i);
		printf("%c",176);
	}
}
int main()
{
    box();
    char ph[20] ="ENTRER UN NOMBRE";
    char ph1[30] ="BRAVO!!!!!!!!!!!!!!!!!!!";
    char ph2[16] ="PLUS GRAND";
    char ph3[16] ="PLUS PETIT";
    int nombre,devine;
    srand(time(NULL));
    devine=rand()%100;
    gotoxy(47,7);
	for(i=0; i<strlen(ph); i++){
		printf("%c", ph[i]);
		Sleep(50);
	}
	gotoxy(47,8);
    scanf("%d",&nombre);
    while(1){
    if(nombre==devine){
        system("cls");
    box();
        gotoxy(47,9);
        for(i=0; i<strlen(ph); i++){
		printf("%c", ph1[i]);
		Sleep(50);
	}
        break;
    }
    else if(nombre<devine){
        system("cls");
        box();
        gotoxy(47,9);
        for(i=0; i<strlen(ph); i++){
		printf("%c", ph2[i]);
		Sleep(50);
    }
    scanf("%d",&nombre);

    }else if(nombre>devine){
        system("cls");
        box();
        gotoxy(47,10);
        for(i=0; i<strlen(ph); i++){
		printf("%c", ph3[i]);
		Sleep(50);
    }
    scanf("%d",&nombre);
    }}
    gotoxy(30,30);
    return 0;
}
