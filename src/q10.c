#include <stdio.h>

struct Car {
    char model[50];
    int year;
    float mileage;
};

int main() {
    struct Car c[3];
    int i, min = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter model, year and mileage of car %d: ", i + 1);
        scanf("%s %d %f", c[i].model, &c[i].year, &c[i].mileage);
    }

    for (i = 1; i < 3; i++) {
        if (c[i].mileage < c[min].mileage) {
            min = i;
        }
    }

    printf("\nLowest Mileage Car:\n");
    printf("Model: %s\n", c[min].model);
    printf("Year: %d\n", c[min].year);
    printf("Mileage: %.2f\n", c[min].mileage);

    return 0;
}
