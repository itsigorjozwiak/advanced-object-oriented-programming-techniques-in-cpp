#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Song {
private:
    wstring artist_;
    wstring title_;

public:
    Song(const wstring& a, const wstring& t) : artist_(a), title_(t) {
        wcout << L"Konstruktor: " << title_ << endl;
    }

    ~Song() {
        wcout << L"Destruktor: " << title_ << endl;
    }

    wstring getArtist() const { return artist_; }
    wstring getTitle() const { return title_; }
};

template <typename T = Song>
unique_ptr<T> SongFactory(const wstring& artist, const wstring& title) {
    return make_unique<T>(artist, title);
}

int main() {
    auto song = SongFactory(L"Michael Jackson", L"Beat It");

    vector<unique_ptr<Song>> songs;
    songs.push_back(SongFactory(L"Queen", L"Bohemian Rhapsody"));
    songs.push_back(SongFactory(L"Metallica", L"Nothing Else Matters"));
    songs.push_back(SongFactory(L"Dolly Parton", L"Jolene"));

    for (const auto& s : songs) {
        wcout << s->getArtist() << L" - " << s->getTitle() << endl;
    }

    return 0;
}