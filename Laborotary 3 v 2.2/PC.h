#pragma once
#include "Product.h"
class PC:
	virtual public Product
    {
    protected:
        string proccesorName;
	    double cpu;
    public:
        PC() {};
        PC(PC & pc)
        {
            this->cpu = pc.cpu;
            this->proccesorName = pc.proccesorName;
        }
        
        PC(string,double );
	    ~PC();

	    void showInfo();

	    void setCpu(double);
	    double getCpu();

        void setPrice(int p)
        {
            PC::price = p;
        }

 


    };

