#include <iostream>
class Test
{
	//拷贝构造函数：拷贝构造函数用于创建一个对象的副本。

public:
	/*Test(const Test& test)：接收一个常量引用作为参数，用于创建一个新的对象，并深拷贝成员变量str。
		如果test.str不为空，则动态分配内存给str，并将test.str的内容复制到新的内存空间中。
		如果test.str为空，则将str设置为nullptr。*/
	Test(const Test& test)
	{
		if (test.str)
		{
			str = new char[strlen(str) + 1]();
			strcpy_s(str, strlen(test.str) + 1, test.str);
		}
		else
		{
			str = nullptr;
		}
	}
	//Test(Test& test)：接收一个非常量引用作为参数，用于创建一个新的对象，并将test.str的指针赋值给str。
	//	如果test.str不为空，则将str指向test.str的内存空间。
	//	将test.str设置为nullptr，避免原对象和拷贝对象同时管理同一块内存空间，防止出现悬挂指针。
	Test(Test& test)
	{
		if (test.str)
		{
			str = test.str;
			test.str = nullptr;
		}
	}

	//移动赋值运算符：移动赋值运算符用于将右值对象的资源“移动”到左值对象中，提高性能。
	Test& operator=(Test&& test)
	{
		if (this == &test)
		{
			return *this;
		}
		if (str)
		{
			delete[] str;
			str = nullptr;
		}
	}
	//Test& operator=(Test&& test)：接收一个右值引用作为参数，并返回一个左值引用。
	//	首先判断是否是自我赋值，如果是，则直接返回当前对象。
	//	如果str不为空，则释放str指向的内存空间。
	//	将test.str的指针赋值给str。
	//	将test.str设置为nullptr，避免原对象和移动对象同时管理同一块内存空间，防止出现悬挂指针。
private:
	char* str = nullptr;
};
int main()
{

	return 0;
}