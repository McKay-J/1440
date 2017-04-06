#include <iostream>
#include <string>
#include "Dictionary.h"

int main() {
    Dictionary<std::string, std::string> playlist;
    std::cout << "My Playlist" << std::endl;
    std::cout << std::endl;
    playlist.add("West Coast", "Coconut Records");
    playlist.add("You Only Live Once", "The Strokes");
    playlist.add("Caring is Creepy", "The Shins");
    playlist.add("Fidelity", "Regina Spektor");
    playlist.add("Technicolor Beat", "Oh Wonder");
    playlist.add("Money Trees", "Kendrick Lamar");
    playlist.add("Stay Alive", "Jose Gonzalez");
    playlist.add("Coming Home", "Leon  Bridges");

    for(unsigned int i = 0; i < playlist.getCount(); i++)
    {
        std::cout << "Artist: " << playlist.getByIndex(i)->getValue() << " -- Song: " << playlist.getByIndex(i)->getKey() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Removing Money Trees by Kendrick Lamar" << std::endl;
    playlist.removeByIndex(5);

    std::cout << "Removing Stay Alive by Jose Gonzalez" << std::endl;
    playlist.removeByKey("Stay Alive");
    std::cout << std::endl;

    std::cout << "Let's see what it looks like now" << std::endl;
    for(unsigned int i = 0; i < playlist.getCount(); i++)
    {
        std::cout << "Artist: " << playlist.getByIndex(i)->getValue() << " -- Song: " << playlist.getByIndex(i)->getKey() << std::endl;
    }

    return 0;
}
