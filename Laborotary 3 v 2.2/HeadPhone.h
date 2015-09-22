#pragma once
#include "Product.h"
class HeadPhone:
	virtual public Product
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

    void setPrice(int p)
    {
        HeadPhone::price = p;
       
    }
};

