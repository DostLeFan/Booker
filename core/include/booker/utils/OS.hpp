#ifndef OS_HPP
#define OS_HPP

/*!
\file OS.hpp
\brief This file define macros to detect OS.
\details Thanks to this wiki : https://sourceforge.net/p/predef/wiki/Home/
\def WINDOWS
Defined if the project is compiled on a Windows machine.
*/

#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__) || defined(_WIN32_WCE) || defined(WIN32_PLATFORM_HPC2000) || defined(WIN32_PLATFORM_HPCPRO) || defined(WIN32_PLATFORM_PSPC) || defined(WIN32_PLATFORM_WFSP)
	#ifndef WINDOWS
		#define WINDOWS
	#endif
#endif

#endif // OS_HPP