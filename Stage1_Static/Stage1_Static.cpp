//Static keyword: space allocated till the end program lifetime
/*
  1. Static Data Members
  2. Static Class objects  - Static class objects allows object to live till the end of the program and not only upto the scope.
  3. Static member functions - static member functions are allowed to access only the static data members 
*/

#include <iostream>
using namespace std;

class Youtube {
public:
    static void showchannel() {
        cout << "Techsido once again\n";
    }
};

int main()
{
    Youtube::showchannel();

    return 0;
}


//class Youtube {
//public:
//    Youtube() {
//
//    }
//};
//
//int main()
//{
//    {
//        static Youtube techsido;
//    }
//
//    return 0;
//}