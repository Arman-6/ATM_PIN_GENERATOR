#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int main(){
char pin[4];
int i;
clrscr();

srand(time(NULL));

for(i=0; i<4; i++){
pin[i]=(rand()%10)+'0';
}

printf("\nGenerated Atm Pin is: %s", pin);

getch();
}


