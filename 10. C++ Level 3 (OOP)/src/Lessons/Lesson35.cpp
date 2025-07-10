#include "Lessons/Lesson35.hpp"
#include <iostream>


// Lesson35: Passing class objects to functions (By Value / By Reference)

namespace Lesson35 {

    // clsRectangle START DEFINITION

         clsRectangle::clsRectangle(double width, double height)
             : _width(width), _height(height) {
         }
         
         double clsRectangle::GetWidth() const { return _width; }
         double clsRectangle::GetHeight() const { return _height; }
         double clsRectangle::Area() const { return _width * _height; }
         
         void clsRectangle::Print() const {
             std::cout << "Rectangle: " << _width << " x " << _height
                 << " | Area = " << Area() << std::endl;
         }

    // clsRectangle END DEFINITION


    void ShowRectangleByValue(clsRectangle rect) {
        std::cout << "[By Value] Address of object: " << &rect << std::endl;
        rect.Print();
    }

    void ShowRectangleByRef(const clsRectangle& rect) {
        std::cout << "[By Reference] Address of object: " << &rect << std::endl;
        rect.Print();
    }

    void run() {
        clsRectangle myRect(5.0, 3.0);

        std::cout << "Original object address: " << &myRect << std::endl;
        std::cout << "Passing by value:" << std::endl;
        ShowRectangleByValue(myRect);

        std::cout << "Passing by reference:" << std::endl;
        ShowRectangleByRef(myRect);
    }

}

// Lesson35: Passing class objects to functions (By Value / By Reference)