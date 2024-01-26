#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    while (true)
    {
        cout << "Enter the image file path without the quotation marks at the start/end (enter 0 to exit the operation):" << endl;
        string filepath;
        getline(cin, filepath);

        if (filepath == "0")
        {
            cout << "Exiting the program." << endl;
            break;
        }

        ifstream file(filepath, ios::binary);

        char header[15];
        file.read(header, sizeof(header));

        if (header[0] == (char)0xFF)
        {
            cout << "This file is a JPEG." << endl;
        }

        else if (header[2] == (char)0x4A || header[8] == (char)0x15 || header[14] == (char)0x01 || header[9] == (char)0x1B)  //if the file entered is Fuji RAF / Olympus ORF / Sony ARW / Nikon NEF
        {
            cout << "This file is a RAW." << endl; //will print that the file entered is a RAW file.
        }

        else if (header[2] == (char)0x2A)
        {
            cout << "This file is a TIFF." << endl;
        }

        else if (header[1] == (char)0x50)
        {
            cout << "This file is a PNG." << endl;
        }

        else if (header[3] == (char)0x38)
        {
            cout << "This file is a GIF." << endl;
        }

        else if (header[0] == (char)0x42)
        {
            cout << "This file is a BMP." << endl;
        }

        else
        {
            cout << "Unknown file format... try again.." << endl;
        }
    }

    return 0;
}
