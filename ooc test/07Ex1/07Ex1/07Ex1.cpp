// 07Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Distance.h"

using namespace std;

int main()
{
    Distance dis;
    Distance dis2(11, 6.25);
    Distance *dist1 = new Distance();
    Distance* dist2 = new Distance(11, 6.25);
    Distance dist1, dist3;
    Distance dist3(11, 6.25);



    dis.printDistance();
    dis2.printDistance();
    
    dist1->printDistance();
    dist2->printDistance();

    dist1.inputDistance();

    dist2.addDistance(dist1, dist3);
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
