#ifndef I01_LIB_GLOBAL_H
#define I01_LIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(I01_LIB_LIBRARY)
#  define I01_LIB_EXPORT Q_DECL_EXPORT
#else
#  define I01_LIB_EXPORT Q_DECL_IMPORT
#endif

#endif // I01_LIB_GLOBAL_H
