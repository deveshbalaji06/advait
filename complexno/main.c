#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

    struct complex
{
int real;
int img;
};


int main()
{
struct    complex n1,n2,sum,dif;
  int option;
    clrscr();
    do{
        printf("\n------MAIN MENU-------");
        printf("\n1)-Read the complex number");
        printf("\n2)-Display the complex number");
        printf("\n3)-Add the two complex number");
        printf("\n4)-Subtract the two complex number");
        printf("\n5)-EXIT ");
        printf("\nEnter your option");
        scanf("%d",&option);
    switch(option)
    {
  case 1:
    printf("\nEnter the 1st complex number");
        scanf("%d %d",&n1.img,&n1.real);
        printf("\nEnter the second complex number");
        scanf("%d %d",&n2.img,&n2.real);
        break ;
  case 2:
    printf("\nThe first complex no is%d i%d",n1.real,n1.img);
        printf("\nThe first complex no is%d i%d",n2.real,n2.img);
        break;
  case 3:
       sum.img=n1.img+n2.img;
       sum.real=n2.real+n1.real;
    printf("after adding complex number is %d i%d",sum.real,sum.img);
    break;
    case 4:
       dif.img=n1.img-n2.img;
       dif.real=n1.real-n2.real;
    printf("after sub complex number is %d i%d",dif.real,dif.img);
     break;
    }
    }
       while(option!=5) ;
            return 0;


}
