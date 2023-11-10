#ifndef CLOCK_GLOBAL_H
#define CLOCK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CLOCK_LIBRARY)
#  define CLOCK_EXPORT Q_DECL_EXPORT
#else
#  define CLOCK_EXPORT Q_DECL_IMPORT
#endif

#endif // CLOCK_GLOBAL_H
