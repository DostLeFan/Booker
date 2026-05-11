#include "../../../include/booker/archive/RarWriter.hpp"

RarWriter::RarWriter() : Rar() {}

RarWriter::RarWriter(RarWriter const& src) : Rar(src) {}


RarWriter& RarWriter::operator=(RarWriter const& src)
{
	Rar::operator=(src);
	
	return *this;
}