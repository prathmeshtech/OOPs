//Static keyword: space allocated till the end program lifetime
/*
  1. Static Data Members-
      Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
      It is initialized before any object of this class is created, even before the main starts.
      It is visible only within the class, but its lifetime is the entire program.
     
  2. Static Class objects  - Static class objects allows object to live till the end of the program and not only upto the scope.

  3. Static member functions - static member functions are allowed to access only the static data members 
*/

#include <iostream>
using namespace std;

class Youtube {

 public:
    static int countchannel;
    Youtube() {
        countchannel++;
    }

    ~Youtube() {
        cout << "\nObject Destroyed\n";
    }
};

int Youtube::countchannel = 0;

int main()
{
    Youtube techsido;
    Youtube tseries;
    Youtube zeemusic;

    cout << "Number of Channel on Youtube are: "<< Youtube::countchannel;
    return 0;
}

//////////////////////////Static Member Functions--------------

//#include <iostream>
//using namespace std;
//
//class Youtube {
//public:
//    static void showchannel() {
//        cout << "Techsido once again\n";
//    }
//};
//
//int main()
//{
//    Youtube::showchannel();
//
//    return 0;
//}


//////////////////////////Static OBJECTS--------------

//class Youtube {
//public:
//    Youtube() {
//        cout << "Object Created\n"; 
//    }
//
//    ~Youtube() {
//        cout << "Object Destroyed\n";
//    }
//};
//
//int main()
//{
//    {
//        static Youtube techsido;
//    }
//
//    cout << "Techsido Here\n";
//    return 0;
//}