#include "pch.h"
#include "DynamicLib.h"
#include <stdio.h>
#include <StaticLib.h>

void MyClassDLL::sayHelloDLL()
{
	printf("DLL: ");
	MyClassStatic mcs;
	mcs.sayHelloStatic();
}
