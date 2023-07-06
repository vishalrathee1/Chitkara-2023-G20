// Sort struct student according to their score and finally display the roll numbers of all the students according to their ranks
#include <stdio.h>

typedef struct Student{
	char name[50];
	int marks;
}Stu;

void SortAccToMarks(struct Student students[], int n){
	// bubble sort
	for(int i = 0; i< n-1; i++){
		for(int j = 0; j<n-i-1; j++){
			// swap according to their marks --> highest first
			if(students[j].marks<students[j+1].marks){
				//swap
				Stu temp;
				temp = students[j];
				students[j] = students[j+1];
				students[j+1] = temp;
			}

		}
	}
}

void printNames(struct Student students[], int n){
	for(int i =0; i<n ; i++){
		printf("%s\n", students[i].name);
	}
}

int main()
{
	Stu students[10];
	for(int i = 0; i<10; i++){
		//name input
		scanf("%s", students[i].name);
		//marks input
		scanf("%d", &students[i].marks);
	}
	SortAccToMarks(students, 10);
	printNames(students, 10);
	return 0;
}
