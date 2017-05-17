#ifndef _DLL_SOCKET__GLOBAL_H
#define _DLL_SOCKET__GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(_DLL_SOCKET__LIBRARY)
#  define _DLL_SOCKET_SHARED_EXPORT Q_DECL_EXPORT
#else
#  define _DLL_SOCKET_SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // _DLL_SOCKET__GLOBAL_H
