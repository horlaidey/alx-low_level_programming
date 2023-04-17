#ifndef DOG_H
#define DOG_H
/**
 * struct dog - create a data type struct dog
 * @name: A string data type for name
 * @age: A float data type for age
 * @owner: A string data type for owner
 *
 * Description: The new data type has three data structures
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;


#endif
