#include <stdio.h>
#include <cs50.h>
int main() {
    char name[50];
    int age;
    char phone[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your phone number: ");
    scanf("%s", phone);

    printf("\nConfirmation:\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Phone Number: %s\n", phone);

    return 0;
}
