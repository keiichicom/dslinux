/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */

#define alarm_time_t unsigned int

/* #undef CAN_USE_SYS_SELECT_H */

/* Define if using alloca.c.  */
/* #undef C_ALLOCA */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define to one of _getb67, GETB67, getb67 for Cray-2 and Cray-YMP systems.
   This function is required for alloca.c support on those systems.  */
/* #undef CRAY_STACKSEG_END */

#define gethost_addrptr_t const struct in_addr *

#define gethostname_size_t size_t

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef gid_t */

/* Define if you have alloca, as a function or macro.  */
#define HAVE_ALLOCA 1

/* Define if you have <alloca.h> and it should be used (not on Ultrix).  */
#define HAVE_ALLOCA_H 1

/* Define if your curses library has this functionality. */
#define HAVE_BEEP 1

#define HAVE_CURSES_H 1

/* Define if your curses library has this functionality. */
#define HAVE_GETBEGX 1

/* Define if your curses library has this functionality. */
#define HAVE_GETBEGYX 1

/* Define if your curses library has this functionality. */
#define HAVE_GETCURX 1

/* Define if your curses library has this functionality. */
#define HAVE_GETMAXX 1

/* Define if your curses library has this functionality. */
#define HAVE_GETMAXYX 1

/* Define if your curses library has this functionality. */
#define HAVE_GETYX 1

/* Define if you have the curses library. */
/* #undef HAVE_LIBCURSES */

/* Define if you have the ncurses library. */
#define HAVE_LIBNCURSES 1

/* Define if you support file names longer than 14 characters.  */
#define HAVE_LONG_FILE_NAMES 1

/* Define if your compiler supports the "long long" integral type. */
#define HAVE_LONG_LONG 1

/* Most system's curses library uses a _maxx field instead of maxx. */
#define HAVE__MAXX 1

/* #undef HAVE_MSGHDR_ACCRIGHTS */

#define HAVE_MSGHDR_CONTROL 1

/* Define if you have a _res global variable used by resolve routines. */
#define HAVE__RES_DEFDNAME 1

/* Define if you have sigsetjmp and siglongjmp. */
#define HAVE_SIGSETJMP 1

/* #undef HAVE_SOCKADDR_UN_SUN_LEN */

#define HAVE_STRUCT_CMSGDHR 1

/* #undef HAVE_STRUCT_STAT64 */

/* Define if your curses library has this functionality. */
#define HAVE_TOUCHWIN 1

#define HAVE_UNIX_DOMAIN_SOCKETS 1

#define listen_backlog_t int

#define main_void_return_t int

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef mode_t */

/* Define if optind, optarg, etc., need to be declared as extern. */
/* #undef NEED_GETOPT_EXTERN_DECLS */

/* Define if <getopt.h> exists and declares optind, optarg, etc. */
/* #undef NEED_GETOPT_H */

/* Define to `long' if <sys/types.h> doesn't define.  */
/* #undef off_t */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef pid_t */

/* #undef PRAGMA_HDRSTOP */

/* Format string for the printf() family for 64 bit integers. */
#define PRINTF_LONG_LONG "%lld"

/* Define if printing a "long long" with "%lld" works . */
#define PRINTF_LONG_LONG_LLD 1

/* Define if printing a "long long" with "%qd" works . */
/* #undef PRINTF_LONG_LONG_QD */

/* Format string for the printf() family for 64 bit unsigned integers. */
#define PRINTF_ULONG_LONG "%llu"

#define read_return_t ssize_t

#define read_size_t size_t

#define recv_return_t ssize_t

#define recv_size_t size_t

/* Format string for the scanf() family for 64 bit integers. */
#define SCANF_LONG_LONG "%lld"

/* Define if scanning a "long long" with "%lld" works. */
#define SCANF_LONG_LONG_LLD 1

/* Define if scanning a "long long" with "%qd" works. */
/* #undef SCANF_LONG_LONG_QD */

/* Format string for the scanf() family for 64 bit unsigned integers. */
#define SCANF_ULONG_LONG "%llu"

  
/* Define to the type of arg1 for select(). */
#define SELECT_TYPE_ARG1 int

/* Define to the type of args 2, 3 and 4 for select(). */
#define SELECT_TYPE_ARG234 (fd_set *)

/* Define to the type of arg5 for select(). */
#define SELECT_TYPE_ARG5 (struct timeval *)

#define send_return_t ssize_t

#define send_size_t size_t

/* Define if the `setpgrp' function takes no argument.  */
/* #undef SETPGRP_VOID */

/* Define if the setvbuf function takes the buffering type as its second
   argument and the buffer pointer as the third, as on System V
   before release 3.  */
/* #undef SETVBUF_REVERSED */

/* Define to `int' if <sys/signal.h> doesn't define.  */
/* #undef sig_atomic_t */

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* #undef SNPRINTF_RETURNS_PTR */

#define SNPRINTF_TERMINATES 1

#define sockaddr_size_t socklen_t

/* If SOCKS library is being used, define the major version (i.e. 5) */
/* #undef SOCKS */

#define sockopt_size_t socklen_t

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
 STACK_DIRECTION > 0 => grows toward higher addresses
 STACK_DIRECTION < 0 => grows toward lower addresses
 STACK_DIRECTION = 0 => direction of growth unknown
 */
/* #undef STACK_DIRECTION */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define to the full path of the Tar program, if you have it. */
#define TAR "/bin/tar"

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#define TIME_WITH_SYS_TIME 1

#define tv_sec_t long

#define tv_usec_t long

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef uid_t */

/* Result of "uname -a" */
#define UNAME "Linux jenkins 3.2.0-4-686-pae #1 SMP Debian 3.2.78-1 i686 GNU/Linux"

#define waddstr_str_t const char *

#define WADDSTR_TYPE_ARG1_CONST 1

#define write_return_t ssize_t

#define write_size_t size_t

/* Define if you have the __getbegx function.  */
/* #undef HAVE___GETBEGX */

/* Define if you have the __getbegy function.  */
/* #undef HAVE___GETBEGY */

/* Define if you have the __getcurx function.  */
/* #undef HAVE___GETCURX */

/* Define if you have the __getcury function.  */
/* #undef HAVE___GETCURY */

/* Define if you have the __getmaxx function.  */
/* #undef HAVE___GETMAXX */

/* Define if you have the __getmaxy function.  */
/* #undef HAVE___GETMAXY */

/* Define if you have the _posix_getpwnam_r function.  */
/* #undef HAVE__POSIX_GETPWNAM_R */

/* Define if you have the _posix_getpwuid_r function.  */
/* #undef HAVE__POSIX_GETPWUID_R */

/* Define if you have the curs_set function.  */
#define HAVE_CURS_SET 1

/* Define if you have the doupdate function.  */
#define HAVE_DOUPDATE 1

/* Define if you have the fstat64 function.  */
/* #undef HAVE_FSTAT64 */

/* Define if you have the getcwd function.  */
#define HAVE_GETCWD 1

/* Define if you have the getdomainname function.  */
#define HAVE_GETDOMAINNAME 1

/* Define if you have the gethostbyaddr_r function.  */
#define HAVE_GETHOSTBYADDR_R 1

/* Define if you have the gethostbyname2_r function.  */
#define HAVE_GETHOSTBYNAME2_R 1

/* Define if you have the gethostbyname_r function.  */
#define HAVE_GETHOSTBYNAME_R 1

/* Define if you have the gethostname function.  */
#define HAVE_GETHOSTNAME 1

/* Define if you have the getlogin_r function.  */
#define HAVE_GETLOGIN_R 1

/* Define if you have the getpass function.  */
#define HAVE_GETPASS 1

/* Define if you have the getpassphrase function.  */
/* #undef HAVE_GETPASSPHRASE */

/* Define if you have the getpwnam_r function.  */
#define HAVE_GETPWNAM_R 1

/* Define if you have the getpwuid_r function.  */
#define HAVE_GETPWUID_R 1

/* Define if you have the getservbyname_r function.  */
#define HAVE_GETSERVBYNAME_R 1

/* Define if you have the getservbyport_r function.  */
#define HAVE_GETSERVBYPORT_R 1

/* Define if you have the getwd function.  */
/* #undef HAVE_GETWD */

/* Define if you have the gmtime_r function.  */
#define HAVE_GMTIME_R 1

/* Define if you have the gnu_get_libc_release function.  */
/* #undef HAVE_GNU_GET_LIBC_RELEASE */

/* Define if you have the gnu_get_libc_version function.  */
/* #undef HAVE_GNU_GET_LIBC_VERSION */

/* Define if you have the inet_aton function.  */
#define HAVE_INET_ATON 1

/* Define if you have the inet_ntop function.  */
#define HAVE_INET_NTOP 1

/* Define if you have the keypad function.  */
#define HAVE_KEYPAD 1

/* Define if you have the llseek function.  */
#define HAVE_LLSEEK 1

/* Define if you have the localtime_r function.  */
#define HAVE_LOCALTIME_R 1

/* Define if you have the lseek64 function.  */
#define HAVE_LSEEK64 1

/* Define if you have the lstat64 function.  */
/* #undef HAVE_LSTAT64 */

/* Define if you have the memmove function.  */
#define HAVE_MEMMOVE 1

/* Define if you have the mktime function.  */
#define HAVE_MKTIME 1

/* Define if you have the nodelay function.  */
#define HAVE_NODELAY 1

/* Define if you have the open64 function.  */
/* #undef HAVE_OPEN64 */

/* Define if you have the pathconf function.  */
#define HAVE_PATHCONF 1

/* Define if you have the readdir_r function.  */
#define HAVE_READDIR_R 1

/* Define if you have the readlink function.  */
#define HAVE_READLINK 1

/* Define if you have the res_init function.  */
/* #undef HAVE_RES_INIT */

/* Define if you have the setlocale function.  */
#define HAVE_SETLOCALE 1

/* Define if you have the setpgid function.  */
#define HAVE_SETPGID 1

/* Define if you have the setpgrp function.  */
#define HAVE_SETPGRP 1

/* Define if you have the setsid function.  */
#define HAVE_SETSID 1

/* Define if you have the setvbuf function.  */
#define HAVE_SETVBUF 1

/* Define if you have the sigaction function.  */
#define HAVE_SIGACTION 1

/* Define if you have the sigsetjmp function.  */
#define HAVE_SIGSETJMP 1

/* Define if you have the snprintf function.  */
#define HAVE_SNPRINTF 1

/* Define if you have the stat64 function.  */
/* #undef HAVE_STAT64 */

/* Define if you have the strcasecmp function.  */
#define HAVE_STRCASECMP 1

/* Define if you have the strcoll function.  */
#define HAVE_STRCOLL 1

/* Define if you have the strdup function.  */
#define HAVE_STRDUP 1

/* Define if you have the strerror function.  */
#define HAVE_STRERROR 1

/* Define if you have the strncoll function.  */
/* #undef HAVE_STRNCOLL */

/* Define if you have the strstr function.  */
#define HAVE_STRSTR 1

/* Define if you have the strtoq function.  */
#define HAVE_STRTOQ 1

/* Define if you have the symlink function.  */
#define HAVE_SYMLINK 1

/* Define if you have the sysconf function.  */
#define HAVE_SYSCONF 1

/* Define if you have the sysctl function.  */
#define HAVE_SYSCTL 1

/* Define if you have the sysinfo function.  */
#define HAVE_SYSINFO 1

/* Define if you have the syslog function.  */
#define HAVE_SYSLOG 1

/* Define if you have the tcgetattr function.  */
#define HAVE_TCGETATTR 1

/* Define if you have the uname function.  */
#define HAVE_UNAME 1

/* Define if you have the vsnprintf function.  */
#define HAVE_VSNPRINTF 1

/* Define if you have the waitpid function.  */
#define HAVE_WAITPID 1

/* Define if you have the wnoutrefresh function.  */
#define HAVE_WNOUTREFRESH 1

/* Define if you have the <arpa/nameser.h> header file.  */
#define HAVE_ARPA_NAMESER_H 1

/* Define if you have the <curses.h> header file.  */
#define HAVE_CURSES_H 1

/* Define if you have the <gnu/libc-version.h> header file.  */
/* #undef HAVE_GNU_LIBC_VERSION_H */

/* Define if you have the <locale.h> header file.  */
#define HAVE_LOCALE_H 1

/* Define if you have the <ncurses.h> header file.  */
/* #undef HAVE_NCURSES_H */

/* Define if you have the <net/errno.h> header file.  */
/* #undef HAVE_NET_ERRNO_H */

/* Define if you have the <nserve.h> header file.  */
/* #undef HAVE_NSERVE_H */

/* Define if you have the <resolv.h> header file.  */
#define HAVE_RESOLV_H 1

/* Define if you have the <sgtty.h> header file.  */
#define HAVE_SGTTY_H 1

/* Define if you have the <snprintf.h> header file.  */
/* #undef HAVE_SNPRINTF_H */

/* Define if you have the <socks.h> header file.  */
/* #undef HAVE_SOCKS_H */

/* Define if you have the <socks5p.h> header file.  */
/* #undef HAVE_SOCKS5P_H */

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <strings.h> header file.  */
#define HAVE_STRINGS_H 1

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H 1

/* Define if you have the <sys/socket.h> header file.  */
#define HAVE_SYS_SOCKET_H 1

/* Define if you have the <sys/systeminfo.h> header file.  */
/* #undef HAVE_SYS_SYSTEMINFO_H */

/* Define if you have the <sys/time.h> header file.  */
#define HAVE_SYS_TIME_H 1

/* Define if you have the <sys/types.h> header file.  */
#define HAVE_SYS_TYPES_H 1

/* Define if you have the <sys/un.h> header file.  */
#define HAVE_SYS_UN_H 1

/* Define if you have the <sys/utsname.h> header file.  */
#define HAVE_SYS_UTSNAME_H 1

/* Define if you have the <syslog.h> header file.  */
#define HAVE_SYSLOG_H 1

/* Define if you have the <termio.h> header file.  */
#define HAVE_TERMIO_H 1

/* Define if you have the <termios.h> header file.  */
#define HAVE_TERMIOS_H 1

/* Define if you have the <time.h> header file.  */
#define HAVE_TIME_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the <utime.h> header file.  */
#define HAVE_UTIME_H 1

/* Define if you have the 44bsd library (-l44bsd).  */
/* #undef HAVE_LIB44BSD */

/* Define if you have the gen library (-lgen).  */
/* #undef HAVE_LIBGEN */

/* Define if you have the nsl library (-lnsl).  */
/* #undef HAVE_LIBNSL */

/* Define if you have the resolv library (-lresolv).  */
#define HAVE_LIBRESOLV 1

/* Define if you have the snprintf library (-lsnprintf).  */
/* #undef HAVE_LIBSNPRINTF */

/* Define if you have the socket library (-lsocket).  */
/* #undef HAVE_LIBSOCKET */
