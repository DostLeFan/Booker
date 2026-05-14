#ifndef IMAGEUTILS_HPP
#define IMAGEUTILS_HPP

/*!
\file ImageUtils.hpp
\brief Define utils functions related to images.
*/

#include <filesystem>
#include <string>

bool isImageExtension(std::filesystem::path const& filePath);
std::string mimeFromExtension(std::filesystem::path const& filePath);

#endif // IMAGEUTILS_HPP