#include<stdio.h>
#include<string.h>
#include"stdlib.h"
#include"user.c"
#define maxbook 50
struct book
{
    char name[100];
    char author[100];
    int isbn;
    int copies;
};
struct book (*p)[maxbook] =NULL;
int bookcount=0;
int catCounts[5] = {0};
#include"add.c"
#include"display.c"
#include"search.c"
#include"delete.c"
#include"load.c"
#include"save.c"
int main()
{
    int m;
    struct book (*p)[maxbook] =NULL;
    if(authorize())
    return 0;
    load();
do
{
      printf("\n                       ------");
    printf("\n                       |MENU|                      ");
     printf("\n                       ------\n");
      printf("1.Add book\n");
     printf("2.Display book\n3.Search book\n4.Delete book\n5.Save data\n6.Exit\n");
     printf("Enter choice:\n");
    
     scanf("%d",&m);
    switch(m)
    {
        case 1:add();
        break;
        case 2:display();
        break;
        case 3:search();
        break;
        case 4:delete();
        break;
        case 5:save();
        break;
        case 6:printf("Exiting...Have a nice day!");
        break;
        default:printf("Invalid Choice");
    } 
}    while (m!=6);
return 0;
}



     