void delete() {
    int cat, target, found = 0;
    extern struct book (*p)[maxbook];
    extern int catCounts[5];
    printf("\n                      -------------");
    printf("\n                      |DELETE BOOK|");
    printf("\n                      -------------\n");
    printf("Enter Category (1-4): ");
    scanf("%d", &cat);
    if (cat < 1 || cat > 4) {
        printf("Invalid Category\n");
        return;
    }
    printf("Enter ISBN of the book to delete: ");
    scanf("%d", &target);
    for (int j = 0; j < maxbook; j++) {
        if (p[cat][j].isbn == target) {
            p[cat][j].isbn = 0;
            p[cat][j].copies = 0;
            strcpy(p[cat][j].name, "");
            strcpy(p[cat][j].author, "");
            printf("\n|BOOK DELETED SUCCESSFULLY|\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nBook with ISBN %d not found in this category.\n", target);
    }
    printf("====================================================\n");
}