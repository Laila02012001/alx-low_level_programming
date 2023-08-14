#include "dog.h"
#include "stdlib.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *l, *o;
	int a = 0, b = 0, c, d;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[a] != '\0')
	{
		a++;
	}
	while (owner[b] != '\0')
	{
		b++;
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	l = malloc(sizeof(char) * a + 1);
	if (l == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	o = malloc(sizeof(char) * b + 1);
	if (o == NULL)
	{
		free(new_dog);
		free(l);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		l[c] = name[c];
	for (d = 0; d <= b; d++)
		o[d] = owner[d];
	new_dog->name = l;
	new_dog->age = age;
	new_dog->owner = o;
	return (new_dog);
}
