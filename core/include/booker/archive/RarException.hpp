#ifndef DEF_RAREXCEPTION
#define DEF_RAREXCEPTION

#include "../utils/Exception.hpp"

class RarException : public Exception
{
	public:
		RarException(char const* what_arg, char const* file, int line, char const* functionName) noexcept;
		RarException(std::string const& what_arg, std::string const& file, int line, std::string const& functionName) noexcept;
		RarException(RarException const& src) noexcept;
		virtual ~RarException() override;
		
		RarException& operator=(RarException const& src) noexcept;
		
		virtual char const* what() const noexcept override;
};

#endif // DEF_RAREXCEPTION