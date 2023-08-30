#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function initializes variable of type struct dog
 * @g: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *g, char *name, float age, char *owner)
{
	if (g == NULL)
		g = malloc(sizeof(struct dog));
	g->name = name;
	g->age = age;
	g->owner = owner;
}
