#include "pixel.hpp"
#include "header.hpp"

int main(int argc, char* argv[]){
    ifstream inFile;
    inFile.open(argv[1], ios::in | ios::binary);
    ofstream outFile;
    outFile.open(argv[2], ios::out | ios::binary);
    
    Header header;
    Pixel pixel;

    header.readHeader(inFile);
    header.writeHeader(outFile);

    int size = (header.getHeight()) * (header.getWidth());
    Pixel pixelArray[size];
    cout << size << endl;

    for (int i = 0; i < size; i++){
        pixelArray[i] = pixel.readPixel(inFile);
    }

    /*for ( Pixel i : pixelArray[0]){
        i.writePixel(outFile);
    }
    */

    pixel.writePixel(outFile);

    return 0;
}