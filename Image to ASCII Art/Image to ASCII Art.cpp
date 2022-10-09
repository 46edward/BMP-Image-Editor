#include <iostream>
#include "image.hpp"

int main()
{
    Image img;
    img.read("img.bmp");
    img.horizontalScale(3.0f);
    img.write("out.bmp");
    img.clear();
}

