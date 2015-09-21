#pragma once
#include "Product.h"
class HeadPhone:
	public Product
{
private :
    int price;

protected:
    string headPhonename;
	int upBorder;
	int downBorder;
public:
    HeadPhone() {};
	HeadPhone(string,int,int);
	~HeadPhone();

	void showInfo();

    int getUPBorder();
    int getDownBorder();
};

