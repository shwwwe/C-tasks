#include <stdio.h>
struct user
{
    char name[50];
    int age;
    float phone;
} s;

int main()
{
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter phone: ");
    scanf("%f", &s.phone);


    printf("Displaying Information:\n");

    printf("Name: ");
    puts(s.name);

    printf("Age: %d\n",s.age);

    printf("Phone: %.1f\n", s.phone);

    return 0;
}


