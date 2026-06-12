void search() {
    char str[100];
    getchar();
    printf("Search Book: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for(int i = 1; i <= 4; i++) {
        for(int j = 0; j < 50; j++) {
            if (p[i][j].isbn > 0 && strcmp(str, p[i][j].name) == 0) {
                printf("BOOK FOUND in Category %d\n", i);
                printf("\nName of book:");
                printf("%s",p[i][j].name);
                printf("\nName of author:");
                printf("%s",p[i][j].author);
                printf("\nISBN:");
                printf("%d",p[i][j].isbn);
                printf("\nNumber of copies:");
                printf("%d",p[i][j].copies);
                return;
            }
        }
    }
    printf("NOT FOUND\n");
}