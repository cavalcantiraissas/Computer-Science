/*
Federal University of Mato Grosso
Course: Programming II || List 04
Student: Raissa C. Cavalcanti
*/

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Media {
public:
    virtual void displayInfo() const = 0; 
    virtual void play() const = 0; 
    virtual ~Media() {}                  
};

class Book : public Media {
private:
    string title;
    string author;
    int numPages;
public:
    Book(const string& t, const string& a, int n)
        : title(t), author(a), numPages(n) {}

    void displayInfo() const override {
        cout << "Book: " << title << ", Author: " << author << ", Pages: " << numPages << endl;
    }

    void play() const override {
        cout << "Reading the book \"" << title << "\" by " << author << "." << endl;
    }
};

class CD : public Media {
private:
    string title;
    string artist;
    int numTracks;
public:
    CD(const string& t, const string& a, int n)
        : title(t), artist(a), numTracks(n) {}

    void displayInfo() const override {
        cout << "CD: " << title << ", Artist: " << artist << ", Tracks: " << numTracks << endl;
    }

    void play() const override {
        cout << "Playing the CD \"" << title << "\" by " << artist << "." << endl;
    }
};

class DVD : public Media {
private:
    string title;
    string director;
    int duration; // in minutes
public:
    DVD(const string& t, const string& d, int dur)
        : title(t), director(d), duration(dur) {}

    void displayInfo() const override {
        cout << "DVD: " << title << ", Director: " << director << ", Duration: " << duration << " minutes" << endl;
    }

    void play() const override {
        cout << "Playing the DVD \"" << title << "\", directed by " << director << "." << endl;
    }
};

int main() {
    vector<shared_ptr<Media>> medias;
    medias.push_back(make_shared<Book>("The Lord of the Rings", "J.R.R. Tolkien", 1200));
    medias.push_back(make_shared<CD>("Abbey Road", "The Beatles", 17));
    medias.push_back(make_shared<DVD>("Inception", "Christopher Nolan", 148));

    for (const auto& media : medias) {
        media->displayInfo();
        media->play();
        cout << endl;
    }

    return 0;
}
