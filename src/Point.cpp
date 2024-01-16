#include "Point.h"


// 指针只是存储内存地址的一个整数，指针的大小与系统有关，32位系统为4字节，64位系统为8字节

void PointTest()
{
	int var = 8;
	// 定义一个指针变量，指向var
	int* ptr = &var;
	// 解引用，获取指针指向的值并赋值为10 等价于 var = 10
	*ptr = 10;

	// 定义一个指针变量，指向8bit的char类型
	char* buffer = new char[8];
	// 将buffer指向的内存清零
	memset(buffer, 0, 8);
	// 定义一个指针变量，指向buffer指向的内存
	char** doublePointer = &buffer;
	// 将buffer指向的内存清零
	delete[] buffer;
	std::cin.get();
}