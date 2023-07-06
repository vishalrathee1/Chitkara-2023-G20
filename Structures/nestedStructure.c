#include <stdio.h>
#include<string.h>

//separate Nesting
struct Child{
	char name[50];
	int age;
};

typedef struct Parent{
	char name[50];
	int age;
	struct Child child1;
} Parent;



int main(){
	Parent parent1 ;
	strcpy(parent1.name, "Vikas");
	parent1.age = 45;
	strcpy(parent1.child1.name, "Rohit");
	parent1.child1.age = 7;
	printf("%s\n",parent1.child1.name );
	return 0;
}