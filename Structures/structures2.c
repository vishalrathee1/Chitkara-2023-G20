#include <stdio.h>
#include <string.h>

struct Parent{
	char name[50];
	int age ;
} parent1, parent2, parents[10];

int main()
{
	strcpy(parent1.name, "Shubham");
	parent1.age = 47;

	strcpy(parents[0].name, "Shivaksh");
	parents[0].age = 50;

	printf("%s\n", parent1.name);
	printf("%s\n", parents[0].name);
	printf("%d\n", parents[0].age);


	return 0;
}