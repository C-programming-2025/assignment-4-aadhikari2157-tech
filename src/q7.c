#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e[5];
    int i, max = 0;

    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);
        if (e[i].salary > e[max].salary)
            max = i;
    }

    printf("\nHighest Salary Employee:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f",
           e[max].name, e[max].id, e[max].salary);

    return 0;
}
