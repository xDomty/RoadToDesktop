#pragma once
#include <string>
#include <iostream>

// Lesson30: Demonstrate friend function inside a class

namespace Lesson30 {

    class clsBox {
    private:
        double _length, _width, _height;

    public:
        clsBox(double length, double width, double height);

        // Member function to calculate volume
        double GetVolume() const;

        // Declare a friend function to access private members
        friend void PrintBoxDimensions(const clsBox& box);
    };

    void run();

}

// Lesson30: Demonstrate friend function inside a class