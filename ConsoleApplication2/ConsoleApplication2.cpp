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
    cout << "��Ƭ�:" << var << endl;
}
void display(double var)
{
    cout << "�B�I�Ƭ�:" << var << endl;
}
void display(int var1, int var2)
{
    cout << "��Ƭ�:" << var1 << endl;
    cout << "�B�I�Ƭ�:" << var2 << endl;
}
int main()
{
    int a;
    double b;


    cout << "�п�J���a:";
    cin >> a;
    cout << "�п�J�B�I��b:";
    cin >> b;
    cout << a << "������Ȭ� " << absolute(a) << endl;
    cout << b << "������Ȭ� " << absolute(b) << endl;

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
