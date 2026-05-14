#include "../../../include/booker/utils/ImageUtils.hpp"

#include <map>
#include <cctype>

static std::map<std::string, std::string> const IMAGE_MIME_MAP = {
	// JPEG
	{".jpg", "image/jpeg"},
	{".jpeg", "image/jpeg"},
	{".jpe", "image/jpeg"},
	{".jfif", "image/jpeg"},
	// PNG
	{".png", "image/png"},
	// GIF
	{".gif", "image/gif"},
	// BMP
	{".bmp", "image/bmp"},
	{".dib", "image/bmp"},
	// WebP
	{".webp", "image/webp"},
	// TIFF
	{".tiff", "image/tiff"},
	{".tif", "image/tiff"},
	// SVG
	{".svg", "image/svg+xml"},
	{".svgz", "image/svg+xml"},
	// Other rare image formats.
	{".avif", "image/avif"},
	{".heic", "image/heic"},
	{".heif", "image/heif"},
	{".jxr", "image/jxr"},
	{".jp2", "image/jp2"}
};

bool isImageExtension(std::filesystem::path const& filePath)
{
	std::string extension = filePath.extension().string();
	
	if(extension.empty())
		return false;
	
	for(char& c : extension)
		c = static_cast<char>(std::tolower(static_cast<int>(c)));
	
	return IMAGE_MIME_MAP.find(extension) != IMAGE_MIME_MAP.end();
}

std::string mimeFromExtension(std::filesystem::path const& filePath)
{
	std::string extension = filePath.extension().string();
	
	if(extension.empty())
		return "application/octet-stream";
	
	for(char& c : extension)
		c = static_cast<char>(std::tolower(static_cast<int>(c)));
	
	std::map<std::string, std::string>::const_iterator it = IMAGE_MIME_MAP.find(extension);
	
	if(it != IMAGE_MIME_MAP.end())
		return it->second;
	else
		return "application/octet-stream";
}