#include <stdio.h>
int main() {
    FILE *file;
    int i;
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    for (i = 1; i <= 10; i++) {
        fprintf(file, "%d\n", i);
    }
    fclose(file);
    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("Contents of output.txt:\n");
    while (fscanf(file, "%d", &i) != EOF) {
        printf("%d\n", i);
    }
    fclose(file);

    return 0;
}