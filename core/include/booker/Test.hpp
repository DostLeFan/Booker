#ifndef TEST_HPP
#define TEST_HPP

#include <string>

bool convertPdfToJpg(std::string const& pdfPath, int dpi = 300, std::string const& outputPrefix = "page");

#endif // TEST_HPP