#include "Reference.h"

static void Increment_prt(int* value)
{
	(*value)++;
}

static void Increment_ref(int& value)
{
	value++;
}

void ReferenceTest()
{
	int a = 5;
	int b = 8;

	// 引用只是指针的语法糖，它更像是一个别名，实际上这个像变量一样的ref在编译后ref都会被替换成a
	int& ref = a;

	// 等价于 a = 6
	ref = 6;

	// 等价于 a = b = 8
	ref = b;
	Increment_prt(&a);
	Increment_ref(a);
	std::cout << a << std::endl;
}
