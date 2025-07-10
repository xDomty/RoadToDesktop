#pragma once
#include <string>

// Lesson37: Creating dynamic arrays of class objects

namespace Lesson37 {

    class clsBook {
         private:
             std::string _Title;
             std::string _Author;
             int _Year;
         
         public:
			 clsBook(); // dummy constructor
             clsBook(const std::string& Title, const std::string& Author, int Year);
         
			 // Setters
                void SetTitle(const std::string& Title);
                void SetAuthor(const std::string& Author);
                void SetYear(int Year);
         
			 // Getters
                std::string GetTitle() const;
                std::string GetAuthor() const;
                int GetYear() const;
                
                void Print() const;
    };

    // Function to fill the dynamic array of books
    void FillBooksArray(clsBook* Books, int Size);

    // Function to print array of clsBook objects (accepts pointer to first element and size)
    void PrintBooks(clsBook* Arr, int Size);

    int EnterAPosNum(std::string message);

    void run();

}

// LessonObjectsDynamicArray: Creating dynamic arrays of class objects