#ifndef DEF_RARWRITER
#define DEF_RARWRITER

/*
Just a simple class to expose these methods :

bool isRarInstalled() const;
bool compressOneFile(std::string const& filePath, std::string const& archiveName, bool checkUnsafeChars = true) const;
bool compressMultipleFiles(std::vector<std::string> const& files, std::string const& archiveName) const;
bool compressDirectory(std::string const& directoryPath, std::string const& archiveName, bool checkUnsafeChars = true) const;
*/

#include <RarLib/Rar.hpp>

class RarWriter : public Rar
{
	public:
		RarWriter();
		RarWriter(RarWriter const& src);
		virtual ~RarWriter() = default;
		
		RarWriter& operator=(RarWriter const& src);
};

#endif // DEF_RARWRITER