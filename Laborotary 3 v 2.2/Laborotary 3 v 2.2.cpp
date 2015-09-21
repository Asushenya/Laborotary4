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

int main()
{
	setlocale(0, "");
    

    List list;
    PC *pc1, *pc2;
    

    pc1 = new PC("Intel", 2.4);
    list.Insert(pc1);

    pc2 = new PC("AMD", 3.5);
    list.Insert(pc2);

    Mouse *mouse1;
    mouse1 = new Mouse("Razer", 500, 6);
    list.Insert(mouse1);

    HeadPhone  *HeadPhone1;
    HeadPhone1 = new HeadPhone("Sony", 20, 20000);
    list.Insert(HeadPhone1);

    Monitor *monitor1;
    monitor1 = new Monitor("LG", 24.256, 450);
    list.Insert(monitor1);
    WorkStation *WS1;
    WS1 = new WorkStation ("Apple",
        "Intel Pentium", 2.4,
        "LG", 17.3, 450,
        "Sony", 20, 20000,
        "SteelSeries", 490, 10,
        6);
   
    WorkStation *WS2;
    WS2 = new WorkStation ("Lenovo", *pc1, *monitor1, *HeadPhone1, *mouse1, 4);
    list.Insert(WS2);
    WS2->WorkStation::PC::setPrice(1000000);

    list.Insert(WS1);
    pc1->setPrice(654654654);
    list.Show();
    cout << "//////////////////\n";
    list.Delete(mouse1);
    list.Delete(pc1);
    list.Delete(pc2);
    list.Delete(mouse1);
    list.Delete(HeadPhone1);
    list.Delete(monitor1);
    list.Delete(WS1);
    cout << "//////////////////\n";
    list.Show();
    list.Delete(pc1);
    return 0;
}

