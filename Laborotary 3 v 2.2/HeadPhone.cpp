#include "stdafx.h"
#include "HeadPhone.h"
#include <Windows.h>


HANDLE hConsole5 = GetStdHandle(STD_OUTPUT_HANDLE);

HeadPhone::HeadPhone(string Name,int UPBorder,int DOWNBorder):
	Product(/*Name*/)
{
    headPhonename = Name;
	upBorder = UPBorder;
	downBorder = DOWNBorder;
}


HeadPhone::~HeadPhone()
{
}

void HeadPhone::showInfo()
{
	SetConsoleTextAttribute(hConsole5, (WORD)((2 << 4) | 10));
	cout << "���������� � ���������: " << endl;
	
    SetConsoleTextAttribute(hConsole5, (WORD)((2 << 2) | 20));
    cout << "������������� ���������: " << headPhonename << endl;

	SetConsoleTextAttribute(hConsole5, (WORD)((2 << 1) | 1));
	cout << "	������ �������: " << downBorder << "GHz" << endl;
	cout << "	������� �������: " << upBorder << "GHz" << endl;
	SetConsoleTextAttribute(hConsole5, (WORD)((0 << 0) | 7));
	

}

int HeadPhone::getDownBorder()
{
    return downBorder;
}

int HeadPhone::getUPBorder()
{
    return upBorder;
}