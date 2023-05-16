// P01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    Student s1, s2, s3, s4;

    s1.setStudentDetails(1234, "Kamal");
    s1.setmarksOOC(85);
    s1.setmarksSPM(80);
    s1.setmarksISDM(75);

    s2.setStudentDetails(4567, "Saman");
    s2.setmarksOOC(65);
    s2.setmarksSPM(50);
    s2.setmarksISDM(45);

    s3.setStudentDetails(7891, "Nimal");
    s3.setmarksOOC(98);
    s3.setmarksSPM(75);
    s3.setmarksISDM(80);

    s4.setStudentDetails(1212, "Sunil");
    s4.setmarksOOC(35);
    s4.setmarksSPM(60);
    s4.setmarksISDM(40);

    //variable declaration
    double avgOOC, avgSPM, avgISDM;

    avgOOC = (s1.getmarksOOC() + s2.getmarksOOC() + s3.getmarksOOC() + s4.getmarksOOC()) / 4.0;
    cout << "Average OOC mark : " << fixed << setprecision(2) << avgOOC << endl;
    avgSPM = (s1.getmarksSPM() + s2.getmarksSPM() + s3.getmarksSPM() + s4.getmarksSPM()) / 4.0;
    cout << "Average SPM mark : " << fixed << setprecision(2) << avgSPM << endl;
    avgISDM =(s1.getmarksISDM() + s2.getmarksISDM() + s3.getmarksISDM() + s4.getmarksISDM()) / 4.0;
    cout << "Average ISDM mark : " << fixed << setprecision(2) << avgISDM << endl;
    
   
    

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
