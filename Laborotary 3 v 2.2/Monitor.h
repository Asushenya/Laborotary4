#pragma once
#include "Display.h"
#include "Product.h"
class Monitor:
	virtual public Product,public Display
        {
        private:
            string monitorName;
        public:
            Monitor() {};
            Monitor(Monitor &m)
            {
                this->diagonal = m.diagonal;
                this->monitorName = m.monitorName;
                this->ppi = m.ppi;
            }
	        Monitor(string,float,int);

	        ~Monitor();

	        void showInfo();
	
            float getDiagonal();
            int getPpi();

            void setMonitoName(string name)
            {
                if (name.compare("empty") == 0)
                    monitorName = "empty";
                else monitorName = name;
            }

            void setPrice(int p)
            {
                Monitor::price = p;
            }
        };

