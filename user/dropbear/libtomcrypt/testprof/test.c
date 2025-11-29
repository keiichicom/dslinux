#include <tomcrypt_test.h>

void run_cmd(int res, int line, char *file, char *cmd)
{
   if (res != CRYPT_OK) {
      fprintf(stderr, "%s (%d)\n%s:%d:%s\n", error_to_string(res), res, file, line, cmd);
      exit(EXIT_FAILURE);
   }
}

/* $Source$ */
/* $Revision: 1054 $ */
/* $Date: 2006-05-22 19:58:10 -0400 (Mon, 22 May 2006) $ */
