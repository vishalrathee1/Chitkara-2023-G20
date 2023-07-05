#include <stdio.h>
#define PI 0.14159
// #define print(x) printf("%f\n", x)

//conditional check for defined / undefined macros
// #if defined(PI)
// 	#define print(x) printf("%f\n", x+3)
// #endif

// #ifdef PI // this will be true if my PI was defined
// 	#define print(x) printf("%f\n", x+3)
// #endif

// #ifdef PI 
// 	// first time we give error
// 	#error PI was not declared
// #endif

#undef PI

#ifndef PI // this will be true only when my PI was not defined
	#define PI 3.14159
	#define print(x) printf("%f\n", x)
#else //if  PI is defined
	#define print(x) printf("%f\n", x+3)
#endif

void startup_func(){
	printf("HEllo\n");
}

#pragma startup_func() // doesnot work with gcc



	

int main()
{
	// printf("%f\n",PI );
	float x = 10;
	print(PI);
	print(x);
	return 0;
}