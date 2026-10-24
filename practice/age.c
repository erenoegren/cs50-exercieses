#include <stdio.h>
#include <cs50.h>

int main(void){
    int age;

    do
    {
        age = get_int("Age: ");
    }
    while(age < 0);

    int result = age + 10;

    printf("You are %i years old. In 10 years you will be %i years old.\n ", age, result);

    return 0;
}
