#include "../include/Include.hpp"

#include <iostream>

int main(int argc, char** argv)
{
	if(argc != 2)
	{
		std::cerr << "Usage : " << argv[0] << " [PDF_FILENAME]" << std::endl;
		
		return -1;
	}
	
	std::string pdfFileName = argv[1];
	
	if(convertPdfToJpg(pdfFileName))
		std::cout << "Successfull conversion of \"" << pdfFileName << "\"' pages into JPG." << std::endl;
	else
		std::cerr << "An error occured while converting pages of \"" << pdfFileName << "\" into JPG." << std::endl;
	
	return 0;
}