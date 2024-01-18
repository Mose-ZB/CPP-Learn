#include <iostream>

// static 关键字可以用来声明类的数据成员和成员函数，也可以用来声明局部变量。

// static声明变量时，该变量被称为静态变量，该变量在程序编译时就已经分配了内存，程序结束时才释放内存。由于它是静态的，所以其他任何翻译单元中都不可见。这可以减少全局命名空间的污染
static int s_Variable = 5;

// static声明函数时，该函数被称为静态函数，该函数只能在声明它的文件中可见，其他文件不能引用该函数。
static void Function()
{
}

// 当static用来声明类或者结构体内的变量(成员变量)时，该变量被称为静态成员变量，静态成员变量不属于类或者结构体的对象上，而是属于类或者结构体本身。

class StaticEntity
{
public:
	// 静态成员变量是类的所有实例共享的，适合用于存储类级别的状态。
	static int s_x, s_y;
	int a;
	void Print()
	{
		std::cout << s_x << ", " << s_y << std::endl;
	}
	static void s_Print()
	{
		// 静态成员函数无法访问非静态成员变量,因为无法获取到类实例，静态成员变量不在类实例中
		//std::cout << a << std::endl;
	}
};

// 这是类中非静态方法实际的样子
void Print(StaticEntity e)
{
	std::cout << e.s_x << ", " << e.s_y << std::endl;
}

// 初始化静态成员变量
int StaticEntity::s_x;
int StaticEntity::s_y;

// 局部静态变量
static void  s_Function()
{
	// 局部静态变量在程序第一次执行到该变量的声明语句时被初始化，即使该变量定义在一个函数内，但它的生命周期跟程序一样长。还可以在类似if/else中使用
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

// 单例

//class Singleton
//{
//private:
//	static Singleton* s_Instance;
//public:
//	static Singleton& Get()
//	{
//		return *s_Instance;
//	}
//	void Hello()
//	{
//		std::cout << "Hello" << std::endl;
//	}
//
//};
//Singleton* Singleton::s_Instance = nullptr;
// 或者

class Singleton
{

public:
	static Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}
	void Hello()
	{
		std::cout << "Hello" << std::endl;
	}

};

void test()
{
	Singleton::Get().Hello();
}