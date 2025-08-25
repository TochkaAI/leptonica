/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <openjpeg-2.0/openjpeg.h> header file. */
/* #undef HAVE_OPENJPEG_2_0_OPENJPEG_H */

/* Define to 1 if you have the <openjpeg-2.1/openjpeg.h> header file. */
/* #undef HAVE_OPENJPEG_2_1_OPENJPEG_H */

/* Define to 1 if you have the <openjpeg-2.2/openjpeg.h> header file. */
/* #undef HAVE_OPENJPEG_2_2_OPENJPEG_H */

/* Define to 1 if you have the <openjpeg-2.3/openjpeg.h> header file. */
/* #undef HAVE_OPENJPEG_2_3_OPENJPEG_H */

/* Define to 1 if you have the `fmemopen' function. */
#define HAVE_FMEMOPEN 1

/* Define to 1 if you have the `fstatat' function. */
#define HAVE_FSTATAT 1


/* Define to 1 if you have giflib. */
/* #undef HAVE_LIBGIF */

/* Define to 1 if you have libopenjp2. */
/* #undef HAVE_LIBJP2K */

/* Define to 1 if you have jpeg. */
#define HAVE_LIBJPEG 1

/* Define to 1 if you have libpng. */
#define HAVE_LIBPNG 1

/* Define to 1 if you have libtiff. */
#define HAVE_LIBTIFF 1

/* Define to 1 if you have libwebp. */
/* #undef HAVE_LIBWEBP */

/* Define to 1 if you have libwebpmux. */
/* #undef HAVE_LIBWEBP_ANIM */

/* Define to 1 if you have zlib. */
#define HAVE_LIBZ 1

#if defined(HAVE_OPENJPEG_2_3_OPENJPEG_H)
#define LIBJP2K_HEADER <openjpeg-2.3/openjpeg.h>
#elif defined(HAVE_OPENJPEG_2_2_OPENJPEG_H)
#define LIBJP2K_HEADER <openjpeg-2.2/openjpeg.h>
#elif defined(HAVE_OPENJPEG_2_1_OPENJPEG_H)
#define LIBJP2K_HEADER <openjpeg-2.1/openjpeg.h>
#elif defined(HAVE_OPENJPEG_2_0_OPENJPEG_H)
#define LIBJP2K_HEADER <openjpeg-2.0/openjpeg.h>
#endif
