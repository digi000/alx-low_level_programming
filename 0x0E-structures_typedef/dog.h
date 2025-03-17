#ifndef DOOG
#define DOOG
/**
 * struct dog - skjd
 * @name: jsd
 * @age: hsudy
 * @owner: sduy
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
