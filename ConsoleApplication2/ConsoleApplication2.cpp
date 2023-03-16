// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int absolute(int var)
{
    if (var < 0) var = -var;
    return var;
}

double absolute(double var)
{
    if (var < 0) var = -var;
    return var;
}
void display(int var)
{
    cout << "整數為:" << var << endl;
}
void display(double var)
{
    cout << "浮點數為:" << var << endl;
}
void display(int var1, int var2)
{
    cout << "整數為:" << var1 << endl;
    cout << "浮點數為:" << var2 << endl;
}
int main()
{
    int a;
    double b;


    cout << "請輸入整數a:";
    cin >> a;
    cout << "請輸入浮點數b:";
    cin >> b;
    cout << a << "的絕對值為 " << absolute(a) << endl;
    cout << b << "的絕對值為 " << absolute(b) << endl;

    display(a);
    display(b);
    display(a, b);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
