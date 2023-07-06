#include <stdio.h>
#include <string.h>

struct Student{
		char name[50];
		int rollNo;
	};

void changeName(struct Student student){
	strcpy(student.name, "Vikas");
	printf("%s\n", student.name);
}
	
void changeRollNo (struct Student student){
	student.rollNo = 10;
	printf("%d\n", student.rollNo);
}

int main()
{
	struct Student st1 = {"Rohan", 1};
	printf("%s\n", st1.name );
	printf("%d\n", st1.rollNo);
	//pass by value --> default
	changeName(st1);
	changeRollNo(st1);
	printf("%s\n", st1.name );
	printf("%d\n", st1.rollNo);
	return 0;
}