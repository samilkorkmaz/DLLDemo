//Project demonstrating usage of dynamic-link and static libraries in Visual Studio 2019 C++
#include<stdio.h>
#include <DynamicLib.h>

int main() {
	MyClassDLL dll;
	dll.sayHelloDLL();
	printf("Press Enter...\n");
	getchar();
}