#include <iostream>

// static �ؼ��ֿ�����������������ݳ�Ա�ͳ�Ա������Ҳ�������������ֲ�������

// static��������ʱ���ñ�������Ϊ��̬�������ñ����ڳ������ʱ���Ѿ��������ڴ棬�������ʱ���ͷ��ڴ档�������Ǿ�̬�ģ����������κη��뵥Ԫ�ж����ɼ�������Լ���ȫ�������ռ����Ⱦ
static int s_Variable = 5;

// static��������ʱ���ú�������Ϊ��̬�������ú���ֻ�������������ļ��пɼ��������ļ��������øú�����
static void Function()
{
}

// ��static������������߽ṹ���ڵı���(��Ա����)ʱ���ñ�������Ϊ��̬��Ա��������̬��Ա��������������߽ṹ��Ķ����ϣ�������������߽ṹ�屾��

class StaticEntity
{
public:
	// ��̬��Ա�������������ʵ������ģ��ʺ����ڴ洢�༶���״̬��
	static int s_x, s_y;
	int a;
	void Print()
	{
		std::cout << s_x << ", " << s_y << std::endl;
	}
	static void s_Print()
	{
		// ��̬��Ա�����޷����ʷǾ�̬��Ա����,��Ϊ�޷���ȡ����ʵ������̬��Ա����������ʵ����
		//std::cout << a << std::endl;
	}
};

// �������зǾ�̬����ʵ�ʵ�����
void Print(StaticEntity e)
{
	std::cout << e.s_x << ", " << e.s_y << std::endl;
}

// ��ʼ����̬��Ա����
int StaticEntity::s_x;
int StaticEntity::s_y;

// �ֲ���̬����
static void  s_Function()
{
	// �ֲ���̬�����ڳ����һ��ִ�е��ñ������������ʱ����ʼ������ʹ�ñ���������һ�������ڣ��������������ڸ�����һ������������������if/else��ʹ��
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

// ����

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
// ����

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