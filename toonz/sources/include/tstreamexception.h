

#ifndef TSTREAMEXCEPTION_INCLUDED
#define TSTREAMEXCEPTION_INCLUDED

#include "texception.h"

#undef DVAPI
#undef DVVAR
#ifdef TSTREAM_EXPORTS
#define DVAPI DV_EXPORT_API
#define DVVAR DV_EXPORT_VAR
#else
#define DVAPI DV_IMPORT_API
#define DVVAR DV_IMPORT_VAR
#endif

//===================================================================

class TIStream;
class TOStream;

//===================================================================

class DVAPI TIStreamException : public TException
{
public:
	TIStreamException(TIStream &is);
	TIStreamException(TIStream &is, const TException &e);
	TIStreamException(TIStream &is, wstring message);
	TIStreamException(TIStream &is, string message);

	~TIStreamException();
};

#endif
