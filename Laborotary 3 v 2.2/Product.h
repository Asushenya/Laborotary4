#pragma once
#include <string>
#include <iostream>
using namespace std;

class Product
    {
    protected:
        Product *next;
        int price;
        

    private:
        
	    protected:
		    string name;
    public:
   
      explicit  Product() { price = 0; };
      explicit  Product(string);
      virtual ~Product() { /*cout << "Destructor:" << typeid(*this).name()<<endl;*/ };
	 virtual   void setName(string) ;
	  virtual  string getName() ;

      virtual void showInfo() = 0;
   
      void setPrice(int p)
      {
          if (sizeof(price) == sizeof(p))
              price = p;
          else cout << "������ ��������� ���� price";
      }

      int getPrice()
      {
          return price;
      }

      friend class List;

    };


