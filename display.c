void display()
{
    extern struct book (*p)[maxbook];
    extern int bookcount;
    extern int catCounts[5];
    printf("\n                    --------------");
    printf("\n                    |DISPLAY BOOK|                      ");
    printf("\n                    --------------  \n");
for(int i=1;i<5;i++)
{
    printf("\nCATEGORY%d:",i);
    if(i==1)
    printf("FICTIONAL\n");
    if(i==2)
    printf("ACADEMIC\n");
    if(i==3)
    printf("SKILLS\n");
    if(i==4)
    printf("NON-FICTIONAL\n");
    if(catCounts[i]==0){
        printf("No book in this category");
        continue;
    }
    for(int j=0;j<maxbook;j++)
    {
        if (p[i][j].isbn>0)
        {
        printf("\nBook name:\t");
        printf("%s",p[i][j].name);
        printf("\nAuthor name:\t");
        printf("%s",p[i][j].author);
        printf("\nISBN:\t");
        printf("%d",p[i][j].isbn);
        printf("\nCopies:\t");
        printf("%d\n",p[i][j].copies);
        }
    }
}
printf("\n====================================================\n");
}