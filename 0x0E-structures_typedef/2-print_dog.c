#include <stdio.h>
#include "dog.h"
/**
 * print_dog - This function prints the contents of a type struct dog
 * @d: A pointer to the struct doge variable to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
