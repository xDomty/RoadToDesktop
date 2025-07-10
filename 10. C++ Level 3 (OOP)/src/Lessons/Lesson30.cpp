#include "Lessons/Lesson30.hpp"

namespace Lesson30 {

    clsBox::clsBox(double length, double width, double height)
        : _length(length), _width(width), _height(height) {
    }

    double clsBox::GetVolume() const {
        return _length * _width * _height;
    }

    // Friend function definition
    void PrintBoxDimensions(const clsBox& box) {
        std::cout << "Box dimensions (L x W x H): "
            << box._length << " x "
            << box._width << " x "
            << box._height << std::endl;
    }

    void run() {
        clsBox myBox(3.5, 2.0, 5.0);
        std::cout << "Box volume: " << myBox.GetVolume() << std::endl;

        // Call the friend function
        PrintBoxDimensions(myBox);
    }

}