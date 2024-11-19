#include<iostream>
#include <vector>
class Spear
{
public:
	Spear(const std::string& name, const std::string& icon) :name(name), icon(icon)
	{
		std::cout << "Spear()" << std::endl;
	}
	~Spear()
	{
		std::cout << "~Spear()" << std::endl;
	}
	virtual void openFire()const
	{
		std::cout << "Spear::openFire" << std::endl;
	}
protected:
	std::string name;
	std::string icon;
};


class FireSpear :public Spear
{
public:
	FireSpear(const std::string& name, const std::string& icon, int i) :Spear(name, icon), i(i)
	{
		std::cout << "FireSpear" << std::endl;
	}
	virtual ~FireSpear()
	{
		std::cout << "~FireSpear()" << std::endl;

	}
	void openFire()const override
	{
		std::cout << "FireSpear::openFire" << std::endl;
	}
private:
	int i;
};

class IceSpear :public Spear
{
public:
	IceSpear(const std::string& name, const std::string& icon, int i) :Spear(name, icon), i(i)
	{
		std::cout << "IceSpear()" << std::endl;
	}
	void openFire()const
	{
		std::cout << "IceSpear::openFire" << std::endl;
	}
	int i;
};

void openFire(const Spear* pSpear)
{
	pSpear->openFire();
	delete pSpear;
}

//int main()
//{
//	Spear* pSpear = new FireSpear("asd", "fsd", 20);
//	//std::cout << typeid(*pSpear).name() << std::endl;
//	//FireSpear* pFireSpear = dynamic_cast<FireSpear*>(pSpear);
//	if (std::string(typeid(*pSpear).name()) == "class FireSpear")
//	{
//		FireSpear* pFireSpear = dynamic_cast<FireSpear*>(pSpear);
//		if (pFireSpear)
//		{
//			std::cout << "cast FireSpear success" << std::endl;
//		}
//	}
//	if (std::string(typeid(*pSpear).name()) == "class IceSpear")
//	{
//		IceSpear* pIceSpear = dynamic_cast<IceSpear*>(pSpear);
//		if (pFireSpear)
//		{
//			std::cout << "cast IceSpear success" << std::endl;
//		}
//	}
//	delete pSpear;
//	return 0;
//}
int main()
{
	Spear* pSpear = new FireSpear("asd", "fsd", 20);

	if (std::string(typeid(*pSpear).name()) == "class FireSpear")
	{
		FireSpear* pFireSpear = dynamic_cast<FireSpear*>(pSpear);
		if (pFireSpear)
		{
			std::cout << "cast to FireSpear success" << std::endl;
		}
	}
	else if (std::string(typeid(*pSpear).name()) == "class IceSpear")
	{
		IceSpear* pIceSpear = dynamic_cast<IceSpear*>(pSpear);
		if (pIceSpear)
		{
			std::cout << "cast to IceSpear success" << std::endl;
		}
	}

	delete pSpear;
	return 0;
}
