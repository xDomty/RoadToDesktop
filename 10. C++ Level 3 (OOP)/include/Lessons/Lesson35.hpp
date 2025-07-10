#pragma once

// Lesson35: Passing class objects to functions (By Value / By Reference)

namespace Lesson35 {

    class clsRectangle {
         private:
             double _width, _height;
         
         public:
             clsRectangle(double width, double height);
         
             double GetWidth() const;
             double GetHeight() const;
             double Area() const;
         
             void Print() const;
    };

    // Function that takes a clsRectangle object BY VALUE (makes a copy)
    void ShowRectangleByValue(clsRectangle rect);

    // Function that takes a clsRectangle object BY REFERENCE (no copy)
    void ShowRectangleByRef(const clsRectangle& rect);

    void run();

}

// Lesson35: Passing class objects to functions (By Value / By Reference)