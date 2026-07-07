#include <iostream>
#include <memory>

using namespace std;

class Song {
public:
    Song() {
        cout << "Konstruktor" << endl;
    }

    ~Song() {
        cout << "Destruktor" << endl;
    }
};

int main(){
    shared_ptr<Song> p1 = make_shared<Song>();
    cout << "Reference count after creating p1: " << p1.use_count() << endl;

    {
        shared_ptr<Song> p2 = p1;
        cout << "Reference count after creating p2: " << p1.use_count() << endl;
    }

    cout << "Reference count after p2 is destroyed: " << p1.use_count() << endl;

    return 0;
}