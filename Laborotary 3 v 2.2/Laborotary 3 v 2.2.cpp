// Laborotary 3 v 2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Product.h"
#include "PC.h"
#include "WorkStation.h"
#include "Display.h"
#include "Monitor.h"
#include "HeadPhone.h"
#include "Mouse.h"
#include "List.h"
#include "NewWorkStation.h"

int main()
{
	setlocale(0, "");
    

    List list;
    PC *pc1, *pc2;
    

    pc1 = new PC("Intel", 2.4);
    pc2 = new PC("AMD", 3.5);



    Mouse *mouse1;
    mouse1 = new Mouse("Razer", 500, 6);



 
    HeadPhone  *HeadPhone1;
    HeadPhone1 = new HeadPhone("Sony", 20, 20000);


    Monitor *monitor1;
    monitor1 = new Monitor("LG", 24.256, 450);


    WorkStation *WS1;
    WS1 = new WorkStation ("Apple",
        "Intel Pentium", 2.4,
        "LG", 17.3, 450,
        "Sony", 20, 20000,
        "SteelSeries", 490, 10,
        6);
   
    WorkStation *WS2;
    WS2 = new WorkStation ("Lenovo", *pc1, *monitor1, *HeadPhone1, *mouse1, 4);
    WS2->setPrice(650);

    cout << "//////////////////\n";

  
    cout << "//////////////////\n";

    
    
    PC *pc10;
    pc10 = new PC("intel", 4.5);
    
    NewWorkStation *w; w = new NewWorkStation("Apple computter",*pc10,*monitor1,*mouse1,*HeadPhone1);
    NewWorkStation *w1; w1 = new NewWorkStation("Apple", *pc1, *monitor1, *mouse1, *HeadPhone1); w = w1;
    
    list.Show();
    list.Insert(pc1);
    list.Insert(w1);
    list.Show();
    list.Delete(w1);
    list.Delete(pc1);
    list.Show();

    return 0;
}

