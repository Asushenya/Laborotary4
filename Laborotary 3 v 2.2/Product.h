#pragma once
#include <string>
#include <iostream>
using namespace std;

class Product  //Abstract class
    {
    protected:
        Product *next;
        int price;
        

    private:
        
	    protected:
		    string name;
    public:
   
      explicit  Product() { price = 80; };
      explicit  Product(string);
      virtual ~Product() { /*cout << "Destructor:" << typeid(*this).name()<<endl;*/ };
	 virtual   void setName(string) ;
	  virtual  string getName() ;

      virtual void showInfo() = 0;
      virtual void setPrice(int) = 0;
      
   

      int getPrice()
      {
          return price;
      }

      friend class List;

    };


