#include <stdio.h>

struct Point {
    float x;
    float y;
};

float distance_squared(struct Point p1, struct Point p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return dx * dx + dy * dy;
}

int main() {
    struct Point p1, p2;
    float dist2;

    printf("Enter x and y for point 1: ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter x and y for point 2: ");
    scanf("%f %f", &p2.x, &p2.y);

    dist2 = distance_squared(p1, p2);

    printf("Squared distance between the points: %.2f\n", dist2);

    return 0;
}
