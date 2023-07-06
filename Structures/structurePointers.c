#include <stdio.h>
#include<string.h>

typedef struct Student{
	char Name[50];
	int rollNo;
} Stu;

int main(){
	//pointers syntax
	// datatype(whose pointer you want to make) * pointerName = &variable
		
	struct Student student1 = {"Vikas", 1};
	Stu student2 = {"Rohit", 2};

	struct Student * student1Ptr = &student1;
	Stu * student2Ptr = &student2;

	//structure pointer will have starting address of first member of the structure

	printf("%x\n", student1Ptr);
	printf("%x\n", &student1.Name);

	strcpy((*student2Ptr).Name, "Shivam");
	printf("%s\n", (*student2Ptr).Name);

	//syntax 2 for dereferencing values of pointers
	// '->' 
	printf("%s\n", student2Ptr->Name);

	return 0;
}