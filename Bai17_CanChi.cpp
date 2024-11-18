// Bai17_CanChi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int nam;
    cout << "Can Chi nam 2000 den 2024\n";
    int socan, sochi;
    string can[]{ "Canh ", "Tan ", "Nham ", "Quy ", "Giap ", "At ", "Binh ", "Dinh ", "Mau ", "Ky " };
    string chi[]{ "Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ti", "Ngo", "Mui" };


    for (int nam = 2000; nam <= 2024; nam++)
    {
        socan = nam % 10;
        sochi = nam % 12;
        cout << "Nam " << nam << ": " << can[socan];
        cout << chi[sochi] << "\n";
    }

    return 0;
}

