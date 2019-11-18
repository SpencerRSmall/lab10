#include "pixel.hpp"

Pixel::Pixel(unsigned char r, unsigned char g, unsigned char b){
    red = r;
    green = g;
    blue = b;
}

void Pixel::setR(unsigned char r){
    red = r;
}

void Pixel::setG(unsigned char g){
    green = g;
}

void Pixel::setB(unsigned char b){
    blue = b;
}

void Pixel::setPixel(unsigned char r, unsigned char g, unsigned char b){
    red = r;
    green = g;
    blue = b;
}

Pixel Pixel::getPixel() const{
    return Pixel(red, green, blue);
}

unsigned char Pixel::getR() const{
    return red;
}

unsigned char Pixel::getG() const{
    return green;
}

unsigned char Pixel::getB() const{
    return blue;
}

Pixel Pixel::readPixel(ifstream& inFile){

    inFile >> red >> green >> blue;    

    cout << red << endl << green << endl << blue;

    return Pixel(red, green, blue);
}

void Pixel::writePixel(ofstream& outFile){

    outFile << red << green << blue;
    Pixel newPix(red, green, blue);
}
