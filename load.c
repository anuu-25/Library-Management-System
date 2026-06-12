void load() {
    FILE *fp = fopen("project.txt", "rb");
    if (fp == NULL) {
        printf("\nNo existing data found. Starting fresh.");
        return;
    }
    if (p == NULL) {
        p = malloc(5 * sizeof(*p)); 
    }
    fread(catCounts, sizeof(int), 5, fp);
    for (int i = 0; i < 5; i++) {
        fread(p[i], sizeof(struct book), maxbook, fp);
    }
    fclose(fp);
    printf("\nData loaded from file.");
}