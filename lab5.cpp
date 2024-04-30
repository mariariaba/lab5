#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
protected:
    string author;
    string title;
    int pages;
    int year;

public:

    Book(string _author, string _title, int _pages, int _year)
        : author(_author), title(_title), pages(_pages), year(_year) {}

    void display() {
        setlocale(LC_CTYPE, "ukr");
        cout << "Автор: " << author << endl;
        cout << "Назва: " << title << endl;
        cout << "Кiлькiсть сторiнок: " << pages << endl;
        cout << "Рiк видання: " << year << endl;
    }
};

class SpecializedBook : public Book {
private:
    string genre;

public:
   
    SpecializedBook(string _author, string _title, int _pages, int _year, string _genre)
        : Book(_author, _title, _pages, _year), genre(_genre) {}

    void display() {
        Book::display();
        setlocale(LC_CTYPE, "ukr");
        cout << "Жанр: " << genre << endl;
    }
};

int main() {
    
    Book book1("Стiвен Кiнг", "Сяйво", 447, 1977);
    SpecializedBook book2("Джоан Роулінг", "Гаррi Поттер i фiлософський камiнь", 332, 1997, "Фантастика");

    setlocale(LC_CTYPE, "ukr");
    cout << "Книга 1 (базовий клас):" << endl;
    book1.display();

    cout << endl;

    cout << "Книга 2 (похiдний клас):" << endl;
    book2.display();

    return 0;
}
