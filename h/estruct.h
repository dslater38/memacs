#ifndef ESTRUCT_H_INCLUDED
#define ESTRUCT_H_INCLUDED

#ifdef BUILD_MSWIN
#include "mswin/estruct.h"
#elif defined(BUILD_NTCONSOLE)
#include "nt/estruct.h"
#elif defined(BUILD_XPCONSOLE)
#include "xp/estruct.h"
#elif defined(BUILD_LINUX)
#	include "linux/estruct.h"
#else
#	include "estruct_orig.h"
#endif

#endif            
