#include "Lessons/Lesson37.hpp"
#include <iostream>

namespace Lesson37 {

	// clsBook START DEFINITION

        clsBook::clsBook() : _Title(""), _Author(""), _Year(0) { }
        
        clsBook::clsBook(const std::string& Title, const std::string& Author, int Year)
            : _Title(Title), _Author(Author), _Year(Year) {
        }
        
        void clsBook::SetTitle(const std::string& Title) { _Title = Title; }
        void clsBook::SetAuthor(const std::string& Author) { _Author = Author; }
        void clsBook::SetYear(int Year) { _Year = Year; }
        
        std::string clsBook::GetTitle() const { return _Title; }
        std::string clsBook::GetAuthor() const { return _Author; }
        int clsBook::GetYear() const { return _Year; }
        
        void clsBook::Print() const {
            std::cout << "Title: " << _Title
                << ", Author: " << _Author
                << ", Year: " << _Year << std::endl;
        }

	// clsBook END DEFINITION

    void FillBooksArray(clsBook* Books, int Size) {
        for (int i = 0; i < Size; ++i) {
            std::string Title, Author;
            int Year;

            std::cout << "Enter title for book #" << (i + 1) << ": ";
            std::getline(std::cin, Title);

            std::cout << "Enter author for book #" << (i + 1) << ": ";
            std::getline(std::cin, Author);

            std::cout << "Enter year for book #" << (i + 1) << ": ";
            std::cin >> Year;
            std::cin.ignore();

            Books[i].SetTitle(Title);
            Books[i].SetAuthor(Author);
            Books[i].SetYear(Year);
        }
    }

    void PrintBooks(clsBook* Arr, int Size) {
        for (int i = 0; i < Size; ++i) {
            std::cout << "Book #" << (i + 1) << ": ";
            Arr[i].Print();
        }
    }

    int EnterAPosNum(std::string message) {
		int num;
        Checkpoint: std::cout << message; std::cin >> num; std::cin.ignore(); // Clear newline
        while (num < 1) {
            std::cout << "Error : Please enter a positive number \n";
            goto Checkpoint;
        } return num;
    }

    void run() {
        int n = EnterAPosNum("Enter the number of books you want to enter: ");
        clsBook* Books = new clsBook[n];

        FillBooksArray(Books, n);

        std::cout << "\nAll books entered:\n";
        PrintBooks(Books, n);

        delete[] Books;
    }

}