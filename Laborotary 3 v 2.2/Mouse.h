#pragma once
#include "Product.h"
class Mouse:
	virtual public Product
{
protected :
    string mouseName;
	unsigned int dpi;
	unsigned int buttonCounter;
   
public:
    Mouse() {};
	Mouse(string,int,int);
	~Mouse();

	void showInfo();

    int getDpi();
    int getCounter();
    void setPrice(int p);
};

