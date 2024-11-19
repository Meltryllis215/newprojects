#include <iostream>
class Test
{
	//�������캯�����������캯�����ڴ���һ������ĸ�����

public:
	/*Test(const Test& test)������һ������������Ϊ���������ڴ���һ���µĶ��󣬲������Ա����str��
		���test.str��Ϊ�գ���̬�����ڴ��str������test.str�����ݸ��Ƶ��µ��ڴ�ռ��С�
		���test.strΪ�գ���str����Ϊnullptr��*/
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
	//Test(Test& test)������һ���ǳ���������Ϊ���������ڴ���һ���µĶ��󣬲���test.str��ָ�븳ֵ��str��
	//	���test.str��Ϊ�գ���strָ��test.str���ڴ�ռ䡣
	//	��test.str����Ϊnullptr������ԭ����Ϳ�������ͬʱ����ͬһ���ڴ�ռ䣬��ֹ��������ָ�롣
	Test(Test& test)
	{
		if (test.str)
		{
			str = test.str;
			test.str = nullptr;
		}
	}

	//�ƶ���ֵ��������ƶ���ֵ��������ڽ���ֵ�������Դ���ƶ�������ֵ�����У�������ܡ�
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
	//Test& operator=(Test&& test)������һ����ֵ������Ϊ������������һ����ֵ���á�
	//	�����ж��Ƿ������Ҹ�ֵ������ǣ���ֱ�ӷ��ص�ǰ����
	//	���str��Ϊ�գ����ͷ�strָ����ڴ�ռ䡣
	//	��test.str��ָ�븳ֵ��str��
	//	��test.str����Ϊnullptr������ԭ������ƶ�����ͬʱ����ͬһ���ڴ�ռ䣬��ֹ��������ָ�롣
private:
	char* str = nullptr;
};
int main()
{

	return 0;
}