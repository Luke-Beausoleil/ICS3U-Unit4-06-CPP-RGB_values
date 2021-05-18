// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program returns all possible RGB values

#include <iostream>

int main() {
    // this function outputs all the RGB values

    // variables
    int red = 0;
    int green = 0;
    int blue = 0;

    // process & output
    for (red = 0; red < 256; red++) {
        for (green = 0; green < 256; green++) {
            for (blue = 0; blue < 256; blue++) {
                std::cout << "RGB(" << red << ", " << green <<
                      ", " << blue << ")" << std::endl;
            }
        }
    }
}
