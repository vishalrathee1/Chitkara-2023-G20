#include <stdio.h>

typedef struct Array{
	int arr[5];
} Array;

void increment(Array newArr, int n){
	for(int i =0; i<n; i++){
		newArr.arr[i]++;
		printf("%d\t", newArr.arr[i]);
	}
}

void increment2(Array * newArr, int n){
	for(int i =0; i<n; i++){
		newArr->arr[i]++;
		printf("%d\t", newArr->arr[i]);
	}
}

int main()
{
	Array newArr;
	newArr.arr[0] = 10;
	newArr.arr[1] = 20;
	newArr.arr[2] = 30;
	newArr.arr[3] = 40;
	newArr.arr[4] = 50;
	//pass by value
	increment(newArr, 5);
	for(int i =0; i<5; i++){
		printf("\n%d\t", newArr.arr[i]);
	}
	//pass by address
	increment2(&newArr, 5);
	for(int i =0; i<5; i++){
		printf("\n%d\t", newArr.arr[i]);
	}
	return 0;
}