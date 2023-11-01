#include <iostream>
#include <string>

using namespace std;

class Youtube {
private:
    std::string channelName;
    int Subscribe;
    int likes;
    int dislikes;

public:
    // Constructor
    /*Youtube(string name){
        channelName = name;
        Subscribe = 0;
        likes = 0;
        dislikes = 0;
    }*/

    void setVal(string name) {
        channelName = name;
        Subscribe = 0;
        likes = 0;
        dislikes = 0;
    }

    // Method to show channel info
    void showChannelInfo() {
        cout << "Channel Name: " << channelName << std::endl;
        cout << "Techsido Fam: " << Subscribe << std::endl;
        cout << "Likes: " << likes << std::endl;
        cout << "Dislikes: " << dislikes << std::endl;
    }

    // Method to subscribe to the channel
    void subscribe() {
        Subscribe++;
        cout << "Subscribed to " << channelName << std::endl;
    }

    // Method to unsubscribe from the channel
    void unsubscribe() {
        Subscribe--;
        cout << "Unsubscribed from " << channelName << std::endl;
    }

    // Method to like the channel
    void like() {
        likes++;
        cout << "Liked " << channelName << std::endl;
    }

    // Method to dislike the channel
    void dislike() {
        dislikes++;
        cout << "Disliked " << channelName << std::endl;
    }
};

int main() {
    // Create a TVChannel object
    Youtube myChannel/*("TechSido - Your Tech Pal")*/;
    string name = "TechSido - Your Tech Pal";
    myChannel.setVal(name);

    // Display channel information
    myChannel.showChannelInfo();

    cout << "\n";

    // Subscribe to the channel
    myChannel.subscribe();
    myChannel.subscribe();
    myChannel.subscribe();
    myChannel.subscribe();
    myChannel.subscribe(); myChannel.subscribe(); myChannel.subscribe(); myChannel.subscribe(); myChannel.subscribe();

    // Like the channel
    myChannel.like();
    cout << "\n";

    // Display updated channel information
    myChannel.showChannelInfo();
    cout << "\n";

    // Dislike the channel
    myChannel.dislike();
    cout << "\n";

    // Unsubscribe from the channel
    myChannel.unsubscribe();
    cout << "\n";

    // Display final channel information
    myChannel.showChannelInfo();

    return 0;
}
