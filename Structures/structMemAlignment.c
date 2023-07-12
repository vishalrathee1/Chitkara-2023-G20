#include <stdio.h>

struct A{
	char a; //1
	int b;  //4
	double c; //8
};

struct B{
	char a; //1
	double c; //8
	int b;  //4
};

struct C{
	int b;  //4
	double c; //8
	char a; //1	
};

struct D{
	int b;  //4
	char a; //1	
	double c; //8	
}__attribute__((packed));


int main()
{
	printf("%d\n", sizeof(A) );
	printf("%d\n", sizeof(B) );
	printf("%d\n", sizeof(C) );
	printf("%d\n", sizeof(D) );
	return 0;
}