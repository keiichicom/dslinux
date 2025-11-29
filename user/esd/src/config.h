/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Defined if AIX backend is enabled */
/* #undef DRIVER_AIX */

/* Defined if ALSA backend is enabled (deprecated) */
/* #undef DRIVER_ALSA */

/* Defined if ALSA-1.0 backend is enabled */
/* #undef DRIVER_ALSA_09 */

/* Defined if alsa-0.9 new pcm api is detected */
/* #undef DRIVER_ALSA_09_NEW_PCM_API */

/* Defined if Arts backend is enabled */
/* #undef DRIVER_ARTS */

/* Defined if CoreAudio backend is enabled */
/* #undef DRIVER_COREAUDIO */

/* Defined if OS/2 backend is enabled */
/* #undef DRIVER_DART */

/* Defined if HPUX backend is enabled */
/* #undef DRIVER_HPUX */

/* Defined if IRIX backend is enabled */
/* #undef DRIVER_IRIX */

/* Defined if old ALSA backend is enabled (deprecated) */
/* #undef DRIVER_NEWALSA */

/* Defined if no backend is enabled */
/* #undef DRIVER_NONE */

/* Defined if OSF backend is enabled */
/* #undef DRIVER_OSF */

/* Defined if OSS backend is enabled */
#define DRIVER_OSS 1

/* Defined if Solaris backend is enabled */
/* #undef DRIVER_SOLARIS */

/* Defined if ipv6 is enabled */
/* #undef ENABLE_IPV6 */

/* Defined if debugging is enabled */
/* #undef ESDBG */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <alsa/asoundlib.h> header file. */
/* #undef HAVE_ALSA_ASOUNDLIB_H */

/* Define to 1 if you have the <CoreAudio/CoreAudio.h> header file. */
/* #undef HAVE_COREAUDIO_COREAUDIO_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <dmedia/audio.h> header file. */
/* #undef HAVE_DMEDIA_AUDIO_H */

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the `fchown' function. */
#define HAVE_FCHOWN 1

/* Define to 1 if you have the `gethostbyname2' function. */
#define HAVE_GETHOSTBYNAME2 1

/* Defined if inet_aton() works */
/* #undef HAVE_INET_ATON */

/* Defined if inet_ntop() works */
/* #undef HAVE_INET_NTOP */

/* Defined if inet_pton() works */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `asound' library (-lasound). */
/* #undef HAVE_LIBASOUND */

/* Define to 1 if you have the `audio' library (-laudio). */
/* #undef HAVE_LIBAUDIO */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `ossaudio' library (-lossaudio). */
/* #undef HAVE_LIBOSSAUDIO */

/* Define to 1 if you have the `posix4' library (-lposix4). */
/* #undef HAVE_LIBPOSIX4 */

/* Define to 1 if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the `sound' library (-lsound). */
/* #undef HAVE_LIBSOUND */

/* Define to 1 if you have the <machine/soundcard.h> header file. */
/* #undef HAVE_MACHINE_SOUNDCARD_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <mme/mme_api.h> header file. */
/* #undef HAVE_MME_MME_API_H */

/* Defined if nanosleep() works */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the <soundcard.h> header file. */
/* #undef HAVE_SOUNDCARD_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strtok_r' function. */
#define HAVE_STRTOK_R 1

/* Define to 1 if you have the <sun/audioio.h> header file. */
/* #undef HAVE_SUN_AUDIOIO_H */

/* Defined if SUN_LEN() exists */
#define HAVE_SUN_LEN 1

/* Define to 1 if you have the <sys/asoundlib.h> header file. */
/* #undef HAVE_SYS_ASOUNDLIB_H */

/* Define to 1 if you have the <sys/audioio.h> header file. */
/* #undef HAVE_SYS_AUDIOIO_H */

/* Define to 1 if you have the <sys/audio.h> header file. */
/* #undef HAVE_SYS_AUDIO_H */

/* Define to 1 if you have the <sys/audio.io.h> header file. */
/* #undef HAVE_SYS_AUDIO_IO_H */

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/soundcard.h> header file. */
#define HAVE_SYS_SOUNDCARD_H 1

/* Define to 1 if you have the <sys/soundlib.h> header file. */
/* #undef HAVE_SYS_SOUNDLIB_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Defined as the address of the loopback interface */
/* #undef INADDR_LOOPBACK */

/* Name of package */
#define PACKAGE "esound"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "esound"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "esound 0.2.38"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "esound"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.2.38"

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Defined if libwrap is used */
/* #undef USE_LIBWRAP */

/* Version number of package */
#define VERSION "0.2.38"

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
