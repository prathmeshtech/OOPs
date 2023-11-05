/*
 Class is just a template or blueprint from which objects are created.
 Class does not occupy any memory untill objects are created.
*/ 

/*
                                         Access Specifiers
 Encapsulation: Access specifiers help enforce encapsulation, bundling data (attributes) and methods that operate on that data 
  into a single unit (class) and controlling access to that data. Access specifiers define how class members are accessible from
  outside the class.

 Data Hiding : By using access specifiers, you can hide the internal implementation details of a class from the outside world.
  This prevents external code from directly modifying or accessing the class's internal data, ensuring data integrity and reducing
  the risk of unintended side effects.

 Security : Access specifiers provide a level of security.You can make sensitive data or methods private to prevent unauthorized
  access and manipulation.Only the class itself can access private members.

 Inheritance : Access specifiers are crucial for inheritance.They control how members of a base class are inherited and
  accessible in derived classes.For example, public members of a base class are accessible to derived classes, while private 
  members are not.

*/                                          


#include <iostream>
#include <string>

using namespace std;

class Youtube {                                // Class
public:
    string channelname;

private:                                      // Private access specifier is default specifier also
    int subscriber;
    int likes;
    int dislikes;

public:
    void setVal() {
        subscriber = 0;
        likes = 0;
        dislikes = 0;
    }

    void showChannel(string name) {                // Funtion defination inside the class
        cout << "Channel Name: " << name << endl;
        cout << "Techsido Fam: " << subscriber << endl;
        cout << "Likes: " << likes << endl;
        cout << "dislikes: " << dislikes << endl;
    }

    void subscribed() {
        subscriber++;
        cout << "Subscribed to TechSido " << endl;
    }

    void liked() {
        likes++;
        cout << "Liked the channel" << endl;
    }

    void disliked() {
        dislikes++;
        cout << "Disliked the channel" << endl;
    }
};



int main() {
    string name = "Techsido ";
    Youtube techsido;
    techsido.setVal();
    /*techsido.subscriber = 1000;*/      //------------------ we cant access as subscriber is private
    techsido.subscribed();
    techsido.liked(); 
    techsido.showChannel(name);

    return 0;
}
