#include <stdio.h>

int main(){
	printf("%s\n", __DATE__); // this is a string literal, will print today's date
	printf("%s\n", __TIME__);
	printf("%s\n", __FILE__);
	// printf("%s\n", __LINE__);
	printf("%d\n", __STDC__); // it is defined as 1 if compiled with gcc compiler(ANSI C standard)
	
	return 0;
}