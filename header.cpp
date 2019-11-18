#include "header.hpp"

Header::Header(string m, int w, int h, int mv){
    magic = m;
    width = w;
    height = h;
    maxVal = mv;
}

void Header::setMagic(string m){
    magic = m;
}

void Header::setWidth(int w){
    width = w;
}

void Header::setHeight(int h){
    height = h;
}

void Header::setMaxVal(int mv){
    maxVal = mv;
}

string Header::getMagic() const{
    return magic;
}

int Header::getWidth() const{
    return width;
}

int Header::getHeight()const{
    return height;
}

int Header::getMVal()const{
    return maxVal;
}

void Header::readHeader(ifstream& inFile){
    inFile >> magic;
    inFile >> width >> height >> maxVal;

    
}

void Header::writeHeader(ofstream& outFile){
    
    //cout << magic << endl;
    //cout << width << endl << height << endl << maxVal << endl;

    outFile << magic << width << height << maxVal;
    Header newHead(magic, width, height, maxVal);
}
