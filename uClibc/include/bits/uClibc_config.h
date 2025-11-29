/*
 * Automatically generated C config: don't edit
 */
#if !defined __FEATURES_H && !defined __need_uClibc_config_h
#error Never include <bits/uClibc_config.h> directly; use <features.h> instead
#endif
#define AUTOCONF_INCLUDED

/*
 * Version Number
 */
#define __UCLIBC_MAJOR__ 0
#define __UCLIBC_MINOR__ 9
#define __UCLIBC_SUBLEVEL__ 27
#undef __TARGET_alpha__
#define __TARGET_arm__ 1
#undef __TARGET_bfin__
#undef __TARGET_cris__
#undef __TARGET_e1__
#undef __TARGET_frv__
#undef __TARGET_h8300__
#undef __TARGET_i386__
#undef __TARGET_i960__
#undef __TARGET_m68k__
#undef __TARGET_microblaze__
#undef __TARGET_mips__
#undef __TARGET_nios__
#undef __TARGET_nios2__
#undef __TARGET_powerpc__
#undef __TARGET_sh__
#undef __TARGET_sparc__
#undef __TARGET_v850__

/*
 * Target Architecture Features and Options
 */
#define __HAVE_ELF__ 1
#define __ARCH_SUPPORTS_LITTLE_ENDIAN__ 1
#define __TARGET_ARCH__ "arm"
#define __ARCH_SUPPORTS_BIG_ENDIAN__ 1
#undef __CONFIG_GENERIC_ARM__
#undef __CONFIG_ARM610__
#undef __CONFIG_ARM710__
#undef __CONFIG_ARM720T__
#undef __CONFIG_ARM920T__
#undef __CONFIG_ARM922T__
#undef __CONFIG_ARM926T__
#define __CONFIG_ARM946E_S__ 1
#undef __CONFIG_ARM_SA110__
#undef __CONFIG_ARM_SA1100__
#undef __CONFIG_ARM_XSCALE__
#define __ARCH_LITTLE_ENDIAN__ 1
#undef __ARCH_BIG_ENDIAN__
#undef __ARCH_HAS_NO_MMU__
#undef __ARCH_HAS_MMU__
#define __UCLIBC_HAS_FLOATS__ 1
#define __HAS_FPU__ 1
#define __DO_C99_MATH__ 1
#define __WARNINGS__ "-Wall"
#define __KERNEL_SOURCE__ "$(ROOTDIR)/$(LINUXDIR)/."
#define __UCLIBC_UCLINUX_BROKEN_MUNMAP__ 1
#define __EXCLUDE_BRK__ 1
#define __C_SYMBOL_PREFIX__ ""
#define __HAVE_DOT_CONFIG__ 1

/*
 * General Library Settings
 */
#undef __HAVE_NO_PIC__
#undef __DOPIC__
#undef __HAVE_NO_SHARED__
#undef __ARCH_HAS_NO_LDSO__
#define __UCLIBC_CTOR_DTOR__ 1
#undef __HAS_NO_THREADS__
#define __UCLIBC_HAS_THREADS__ 1
#define __PTHREADS_DEBUG_SUPPORT__ 1
#undef __UCLIBC_HAS_LFS__
#define __MALLOC__ 1
#undef __MALLOC_SIMPLE__
#undef __MALLOC_STANDARD__
#undef __MALLOC_GLIBC_COMPAT__
#define __UCLIBC_DYNAMIC_ATEXIT__ 1
#define __HAS_SHADOW__ 1
#undef __UNIX98PTY_ONLY__
#undef __ASSUME_DEVPTS__
#define __UCLIBC_HAS_TM_EXTENSIONS__ 1
#undef __UCLIBC_HAS_TZ_CACHING__
#define __UCLIBC_HAS_TZ_FILE__ 1
#undef __UCLIBC_HAS_TZ_FILE_READ_MANY__
#define __UCLIBC_TZ_FILE_PATH__ "/etc/config/TZ"

/*
 * Networking Support
 */
#undef __UCLIBC_HAS_IPV6__
#undef __UCLIBC_HAS_RPC__

/*
 * String and Stdio Support
 */
#undef __UCLIBC_HAS_STRING_GENERIC_OPT__
#define __UCLIBC_HAS_STRING_ARCH_OPT__ 1
#undef __UCLIBC_HAS_CTYPE_TABLES__
#undef __UCLIBC_HAS_WCHAR__
#undef __UCLIBC_HAS_LOCALE__
#undef __UCLIBC_HAS_GLIBC_CUSTOM_PRINTF__
#undef __USE_OLD_VFPRINTF__
#define __UCLIBC_PRINTF_SCANF_POSITIONAL_ARGS__ 9
#undef __UCLIBC_HAS_SCANF_GLIBC_A_FLAG__
#undef __UCLIBC_HAS_STDIO_BUFSIZ_NONE__
#define __UCLIBC_HAS_STDIO_BUFSIZ_256__ 1
#undef __UCLIBC_HAS_STDIO_BUFSIZ_512__
#undef __UCLIBC_HAS_STDIO_BUFSIZ_1024__
#undef __UCLIBC_HAS_STDIO_BUFSIZ_2048__
#undef __UCLIBC_HAS_STDIO_BUFSIZ_4096__
#undef __UCLIBC_HAS_STDIO_BUFSIZ_8192__
#define __UCLIBC_HAS_STDIO_BUILTIN_BUFFER_NONE__ 1
#undef __UCLIBC_HAS_STDIO_BUILTIN_BUFFER_4__
#undef __UCLIBC_HAS_STDIO_BUILTIN_BUFFER_8__
#define __UCLIBC_HAS_STDIO_GETC_MACRO__ 1
#define __UCLIBC_HAS_STDIO_PUTC_MACRO__ 1
#define __UCLIBC_HAS_STDIO_AUTO_RW_TRANSITION__ 1
#undef __UCLIBC_HAS_FOPEN_EXCLUSIVE_MODE__
#undef __UCLIBC_HAS_GLIBC_CUSTOM_STREAMS__
#define __UCLIBC_HAS_PRINTF_M_SPEC__ 1
#undef __UCLIBC_HAS_ERRNO_MESSAGES__
#undef __UCLIBC_HAS_SIGNUM_MESSAGES__
#define __UCLIBC_HAS_GNU_GETOPT__ 1

/*
 * Big and Tall
 */
#define __UCLIBC_HAS_REGEX__ 1
#undef __UCLIBC_HAS_WORDEXP__
#undef __UCLIBC_HAS_FTW__
#define __UCLIBC_HAS_GLOB__ 1

/*
 * Library Installation Options
 */
#define __RUNTIME_PREFIX__ "/usr/$(TARGET_ARCH)-linux-uclibc/"
#define __DEVEL_PREFIX__ "/usr/$(TARGET_ARCH)-linux-uclibc"

/*
 * uClibc security related options
 */
#undef __UCLIBC_SECURITY__

/*
 * uClibc development/debugging options
 */
#undef __DODEBUG__
#undef __DOASSERTS__
#undef __UCLIBC_MALLOC_DEBUGGING__
#undef __UCLIBC_MJN3_ONLY__
