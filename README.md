# File Format Identifier

## Overview
This simple C++ program allows users to identify the format of an image file based on its header information. The supported formats include JPEG, RAW (Fuji RAF / Olympus ORF / Sony ARW / Nikon NEF), TIFF, PNG, GIF, and BMP.

## How to Use
1. Run the program.
2. Enter the file path of the image without quotation marks.
3. The program will analyze the file's header and determine its format.
4. Repeat the process as needed. Enter '0' to exit the operation.

## Supported Formats
- JPEG
- RAW (Fuji RAF / Olympus ORF / Sony ARW / Nikon NEF)
- TIFF
- PNG
- GIF
- BMP

## Example

Enter the image file path without the quotation marks at the start/end (enter 0 to exit the operation):
/path/to/image.jpg
This file is a JPEG.

Enter the image file path without the quotation marks at the start/end (enter 0 to exit the operation):
/path/to/image.raw
This file is a RAW.

...

Enter the image file path without the quotation marks at the start/end (enter 0 to exit the operation):
0
Exiting the program.


## Dependencies
- C++ Standard Library

## Notes
- Make sure to enter the correct file path without quotation marks.
- The program analyzes the file header to determine the format.
- If the format is unknown, the program will prompt the user to try again.
