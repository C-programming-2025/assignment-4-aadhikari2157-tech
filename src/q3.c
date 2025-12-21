#include <stdio.h>

int main() {
    char str[50];
    char *start, *end;
    int len = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    start = str;
    end = str + len - 1;

    while (start < end) {
        if (*start != *end) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
