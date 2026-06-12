void save() {
    FILE *fp = fopen("project.txt", "wb");
    if (fp == NULL) {
        printf("Error opening file for saving!\n");
        return;
    }
    fwrite(catCounts, sizeof(int), 5, fp);
    if (p != NULL) {
        for (int i = 0; i < 5; i++) {
            fwrite(p[i], sizeof(struct book), maxbook, fp);
        }
    }
    fclose(fp);
    printf("\nData saved to file successfully.");
}