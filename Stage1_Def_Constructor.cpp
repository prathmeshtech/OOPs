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
    myChannel.showChannelInfo();

    // Dislike the channel
    myChannel.dislike();

    // Display final channel information
    myChannel.showChannelInfo();

    return 0;
}