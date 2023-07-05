#include <stdio.h>
#include<string.h>

struct Car{
	char company[50];
	struct Engine{
		int buildType ; //v8, v6
		char EngineCompany[50];
	};
};

int main()
{
	struct Car porsche1;
	strcpy(porsche1.company, "Porsce");
	
	

	return 0;
}