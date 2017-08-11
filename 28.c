#Include<stdlib.h>
int char ch;
int j;

clrscr();
void main(){

printf("Print 1 to 5 again and again");
while(1){
for(j=1;j<=5;j++)

     printf("\n%d",j);

    ch=getch();
    if(ch=='Q')
     exit(0);

    }

    getch();
    }
