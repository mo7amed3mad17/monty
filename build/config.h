#ifndef CONFIG_H_IN_95GLRFZR
#define CONFIG_H_IN_95GLRFZR

#define HAVE_GLIBC

#define HAVE_FWRITE_UNLOCKED
#define HAVE_FPUTS_UNLOCKED
#define HAVE_FPUTC_UNLOCKED
/* #undef HAVE_FPRINTF_UNLOCKED */

#define HAVE_ERROR_H
#define HAVE_ERROR
#define HAVE_ERROR_AT_LINE

#define HAVE_ERR_H
#define HAVE_ERR
#define HAVE_VERR
/* #undef HAVE_ERRC */
/* #undef HAVE_VERRC */
#define HAVE_ERRX
#define HAVE_VERRX
#define HAVE_WARN
#define HAVE_VWARN
/* #undef HAVE_WARNC */
/* #undef HAVE_VWARNC */
#define HAVE_WARNX
#define HAVE_VWARNX
/* #undef HAVE_ERR_SET_FILE */
#define HAVE__FPRINTF_CHK
#define HAVE__WRITE_NOCANCEL

/* #undef HAVE_GETPROGNAME */

#ifdef HAVE_ERROR_H
  #include <error.h>
#endif

#ifdef HAVE_ERR_H
  #include <err.h>
#endif

#ifdef HAVE_GLIBC
  extern char *program_invocation_short_name;
  #define PROGRAM_NAME program_invocation_short_name
#elif defined HAVE_GETPROGNAME
  #define PROGRAM_NAME getprogname()
#else
  #error Missing a way to get program name at run time
#endif

#include <stdio.h>
#include <stdlib.h>

#endif /* end of include guard: CONFIG_H_IN_95GLRFZR */
