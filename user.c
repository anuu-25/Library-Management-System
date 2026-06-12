#include<stdio.h>
#include<string.h>
int authorize()
{
    char username[100];
    char pass[100];
    char user[]="USERNAME";
    char password[]="hihi";
    printf("====================================================\n");
    printf("                       ---------                       ");
    printf("\n                       |WELCOME|                      ");
    printf("\n                       ---------\n                   ");
    printf("\nEnter the username:");
    fgets(username,sizeof(username),stdin);
    username[strcspn(username, "\n")] = 0;
    printf("  \nEnter the password:");
    fgets(pass,sizeof(pass),stdin);
    pass[strcspn(pass, "\n")] = 0;
    if((strcmp(user,username))==0 && strcmp(pass,password)==0)
    {
    printf("\n|LOGIN SUCCESSFUL|");
    return 0;
}
else
{
    printf("\n|LOGIN NOT SUCCESSFUL|");
    return 1;
}
printf("\n=====================================================");
}