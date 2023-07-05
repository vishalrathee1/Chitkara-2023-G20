#include <stdio.h>

typedef struct Student {
	char name[50];
	int rollNo;
	float gpa;
} Stu;

int main()
{
	struct Student student1 = {"Rohit", 1, 8.9};
	Stu student2 = {"Deepak", 2, 9.3 }; //because of typedef
	printf("%s\n",student2.name);
	
	return 0;
}