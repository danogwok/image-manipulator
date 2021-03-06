
#ifndef _CPI
#define _CPI

#include "Image.h"
using namespace std;
namespace imaging
{

	class CPIImageWriter : public ImageWriter
	{
		public:
			virtual void write(std::string filename, const Image & src);
			CPIImageWriter() 
				: ImageWriter("cpi") {}
	};

	class CPIImageReader : public ImageReader
	{
		public:
			virtual Image * read(std::string filename);
			CPIImageReader() 
				: ImageReader("cpi") {}
	};

} //namespace imaging

#endif
