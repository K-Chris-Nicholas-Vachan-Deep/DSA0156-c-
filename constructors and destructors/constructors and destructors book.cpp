#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    // Constructor
    Book(const std::string& bookTitle, const std::string& bookAuthor, int bookYear)
        : title(bookTitle), author(bookAuthor), year(bookYear) {
        std::cout << "Book \"" << title << "\" by " << author << " (" << year << ") created." << std::endl;
    }

    // Destructor
    ~Book() {
        std::cout << "Book \"" << title << "\" by " << author << " (" << year << ") destroyed." << std::endl;
    }

    // Getters (optional)
    const std::string& getTitle() const { return title; }
    const std::string& getAuthor() const { return author; }
    int getYear() const { return year; }
};

int main() {
    Book myBook("1984", "George Orwell", 1949);
    return 0;
}
