// VersionC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Lab.h"

using namespace std;

int main()
{
    Lab l1, l2, l3;

    l1.setLabDetails(401,60);
    l2.setLabDetails(402,40);
    l3.setLabDetails(403,30);

    int capacity;

    cout << "Insert Capacity : ";
    cin >> capacity;

    if (capacity <= l3.getCapacity())
    {
        cout << "Lab 401" << endl;
    }
    else if (capacity <= l2.getCapacity())
    {
        cout << "Lab 402" << endl;
    }
    else if (capacity <= l1.getCapacity())
    {
        cout << "Lab 401" << endl;
    }

    return 0;
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
