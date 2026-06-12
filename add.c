void add()
{
    int cat;
    extern struct book (*p)[maxbook];
    extern int bookcount;
    int n,i;
    printf("\n                      ----------                         ");
    printf("\n                      |ADD BOOK|                        ");
    printf("\n                      ----------\n                   ");
    printf("\nEnter the number of books you want to add:");
    scanf("%d",&n);
    getchar();
    printf("Categories:\n1.Fictional\n2.Academic\n3.Skill\n4.Non-fictional");
    bookcount=n;
    if(p==NULL)
    {
    p=malloc(4*sizeof(*p));
    }
    for(i=0;i<n;i++)
    {
        printf("\n---------%d book---------\n",i+1);
        printf("Enter category (1-4): ");
        scanf("%d", &cat);
        int current = catCounts[cat]; 
        struct book *ptr = &p[cat][current];
        catCounts[cat]++; 
        getchar();
        printf("\nEnter Name of the book:");
        fgets(ptr->name,sizeof(ptr->name),stdin);
        strtok(ptr->name,"\n");
        printf("Enter the name of the author:");
        fgets(ptr->author,sizeof(ptr->author),stdin);
        strtok(ptr->author,"\n");
        printf("Enter the isbn number:");
        scanf("%d",&(ptr->isbn));
        printf("Enter the number of copies available:");
        scanf("%d",&(ptr->copies));
        getchar();
    }
        printf("\n|BOOKS ADDED SUCCESSFULLY|");
        printf("\n====================================================\n");
    
}