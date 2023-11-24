//Static keyword: space allocated till the end program lifetime
/*
  1. Static Data Members-
      Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
      It is initialized before any object of this class is created, even before the main starts.
      It is visible only within the class, but its lifetime is the entire program.
     
  2. Static Class objects  - Static class objects allows object to live till the end of the program and not only upto the scope.

  3. Static member functions - static member functions are allowed to access only the static data members 
*/

//#include <iostream>
//using namespace std;
//
//class Youtube {
//
// public:
//    static int countchannel;
//    Youtube() {
//        countchannel++;
//    }
//
//    ~Youtube() {
//        cout << "\nObject Destroyed\n";
//    }
//};
//
//int Youtube::countchannel = 0;
//
//int main()
//{
//    Youtube techsido;
//    Youtube tseries;
//    Youtube zeemusic;
//
//    cout << "Number of Channel on Youtube are: "<< Youtube::countchannel;
//    return 0;
//}

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

#include <iostream>
#include <string>
using namespace std;

class YouTubeChannel {

private:
    string channelName;
    int Subscriber;
    int likes;
    int dislikes;

public:
    // Default constructor
    YouTubeChannel(){
        channelName = "Default Channel";
        Subscriber = 0;
        likes = 0;
        dislikes = 0;

    }

    // Parameterized constructor
    YouTubeChannel(string name) {
        channelName = name;
        Subscriber = 0;
        likes = 0;
        dislikes = 0;
    }

    // Method to show channel info
    void showChannelInfo() {
        cout << "Channel Name: " << channelName << endl;
        cout << "Techsido Fam: " << Subscriber << endl;
        cout << "Likes: " << likes << endl;
        cout << "Dislikes: " << dislikes << endl << endl;
    }

    // Method to subscribe to the channel
    void subscribe() {
        Subscriber++;
        cout << "Subscribed to " << channelName << endl;
    }

    // Method to like the channel
    void like() {
        likes++;
        cout << "Liked " << channelName << endl;
    }

    // Method to dislike the channel
    void dislike() {
        dislikes++;
        cout << "Disliked " << channelName << endl;
    }
};

int main() {
    // Create a YouTubeChannel object using the default constructor
    YouTubeChannel defaultChannel;

    // Display default channel information
    cout << "Default Channel Information:" << endl;
    defaultChannel.showChannelInfo();

    // Create another YouTubeChannel object using the parameterized constructor
    YouTubeChannel myChannel("TechSido");

    // Display channel information
    cout << "\nMy Channel Information:" << endl;
    myChannel.showChannelInfo();
   
    // Subscribe to the channel
    myChannel.subscribe();

    // Like the channel
    myChannel.like();

    // Display updated channel information
    // Display updated channel information
    myChannel.showChannelInfo();

    // Dislike the channel
    myChannel.dislike();

    // Display final channel information
    myChannel.showChannelInfo();

    return 0;
}
