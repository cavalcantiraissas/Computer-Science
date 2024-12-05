/*
Federal University of Mato Grosso
Course: Programming II || List 04
Student: Raissa C. Cavalcanti

Exercise TWO
*/

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;
    int numPages;

public:
    Book(string t, string a, int year, int pages)
        : title(t), author(a), publicationYear(year), numPages(pages) {}

    void setTitle(string t) { title = t; }
    string getTitle() const { return title; }

    void setAuthor(string a) { author = a; }
    string getAuthor() const { return author; }

    void setPublicationYear(int year) { publicationYear = year; }
    int getPublicationYear() const { return publicationYear; }

    void setNumPages(int pages) { numPages = pages; }
    int getNumPages() const { return numPages; }

    void showData() const {
        cout << "Title: " << title << ", Author: " << author
             << ", Year: " << publicationYear << ", Pages: " << numPages << endl;
    }
};

int main() {
    Book b1("1984", "George Orwell", 1949, 328);
    b1.showData(); // Title: 1984, Author: George Orwell, Year: 1949, Pages: 328

    Book b2("Fogo Morto", "Graciliano Ramos", 1933, 229);
    b2.showData(); // Title: Fogo Morto, Author: Graciliano Ramos, Year: 1933, Pages: 229

    b2.setNumPages(299);
    b2.showData(); // Title: Fogo Morto, Author: Graciliano Ramos, Year: 1933, Pages: 299

    return 0;
}
