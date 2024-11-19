#include <iostream>
class Test
{
public:
	static unsigned getI() { return i; }
private:
	static unsigned i;
};
unsigned Test::i = 20;
int main()
{
	Test test;
	std::cout << Test::getI() << std::endl;
	return 0;
}