// Bai17_CanChi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int nam;
    cout << "Nhap nam: "; cin >> nam;
    int socan, sochi;
    string can[]{ "Canh ", "Tan ", "Nham ", "Quy ", "Giap ", "At ", "Binh ", "Dinh ", "Mau ", "Ky " };
    string chi[]{ "Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ti", "Ngo", "Mui" };
    socan = nam % 10;
    sochi = nam % 12;
    cout << "Nam nay la nam: ";
    cout << can[socan];
    cout << chi[sochi];

    return 0;
}

