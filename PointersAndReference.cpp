//CSC212 - HW3 - TAMARA PANDO

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include "Student.h"
#include "Bag.h"

using namespace std;

int main()
{

    cout << "Bag of students\n"; 
    srand(time(NULL));

    Bag studentBag;
    int numSt = 25;
    int i = 0;

    Student s1;
    s1.SetName("Fox", "Moulder"); 
    s1.SetSSID("111-11-111");
    
    
    cout << s1.GetFname() << endl; 
    cout << s1.GetLname() << endl; 
    return 0;
}

/*(i < numSt)
 {
     if (studentBag.size() < studentBag.CAPACITY)
     {
         Student s;
         s.studentName();
         s.studentSSID();
         studentBag.insert(s);  //inserted student info to bag
     }
     i++;
 }

 studentBag.sort_descending();   //existent bag being sorted

 cout << "   SORTED STUDENT RECORDS\n\n" << endl;
 cout << studentBag;

 cout << "             Maximum Value is: \n" << endl;
 cout << studentBag.find_max();

 */