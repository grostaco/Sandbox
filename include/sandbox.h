#pragma once

#define ignore (void)!
#define unused __attribute__((unused))
#define DO_PRAGMA_(x)  _Pragma(#x)
#define DO_PRAGMA(x)   DO_PRAGMA_(x)
#define nowarn_begin() _Pragma("GCC diagnostic push")
#define nowarn_for(x)  DO_PRAGMA(GCC diagnostic ignored x)
#define nowarn_end()   _Pragma("GCC diagnostic pop")
