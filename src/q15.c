#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    char marks[5]; 
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", s.name);
        printf("Enter roll number: ");
        scanf("%d", &s.roll);
        printf("Enter marks (e.g., A+, B): ");
        scanf(" %s", s.marks);

        fprintf(file, "%s %d %s\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    printf("\nStored records:\n");

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while (fscanf(file, "%s %d %s", s.name, &s.roll, s.marks) == 3) {
        printf("Name: %s\n", s.name);
        printf("Roll: %d\n", s.roll);
        printf("Marks: %s\n\n", s.marks);
    }

    fclose(file);

    return 0;
}
