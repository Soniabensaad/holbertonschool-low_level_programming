#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * struct dog-struct dog
 * @name : name
 * @age: age
 * @owner: owner
 * Description: struct for a dog
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif/* DOG_H*/
