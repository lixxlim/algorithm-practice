//// for test

#include <stdio.h>

int main(void)
{
	typedef struct {
		char name[10];
		int age;
	} Human;
	
	Human a = {"LIM", 20};
	Human b = {"LI", 19};
	
	b = a;
	
	printf("%d\n", a.age);
	printf("%d\n", b.age);
	
	b.age = 11;
	printf("%d\n", a.age);
	printf("%d\n", b.age);
	
	a.age = 300;
	printf("%d\n", a.age);
	printf("%d\n", b.age);
	
}
