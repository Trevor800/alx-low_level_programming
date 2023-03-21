#include <stdio.h>
#ifndef DOG_H
#define DOG_H

struct dog{
    char *name;
    float age;
    char *owner;
};

#endif

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
