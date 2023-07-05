#include <stdio.h>
#include <string.h>

//syntax -->1 
// struct StructureName{};
struct Student{
	char name[50];
	int rollNo ;
	float gpa;
};

int main()
{
	//syntax -->1
	// struct StructureName structureVariable;
	struct Student student1; //declaration

	//definition
	// we can access members of structure using (.) operator

	//student1.name = "Rohit"; //cannot assign an array
	strcpy(student1.name, "Rohit");
	student1.rollNo = 1;
	student1.gpa = 8.96;

	//printing structure values
	printf("%s\n", student1.name);
	printf("%d\n", student1.rollNo);
	printf("%f\n", student1.gpa);

	//initialization of structure variable
	struct Student student2 = { "Deepak", 2, 9.6};

	//printing structure values
	printf("%s\n", student2.name);
	printf("%d\n", student2.rollNo);
	printf("%f\n", student2.gpa);

	

	return 0;
}