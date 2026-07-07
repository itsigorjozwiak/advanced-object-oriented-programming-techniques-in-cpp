#include <iostream>
#include <memory>

using namespace std;

class Song {
};

int main() {

    cout << "The size of a standard pointer: " << sizeof(Song*) << endl;
    cout << "The size of unique_ptr: " << sizeof(unique_ptr<Song>) << endl;
    cout << "The size of shared_ptr: " << sizeof(shared_ptr<Song>) << endl;
    return 0;
}