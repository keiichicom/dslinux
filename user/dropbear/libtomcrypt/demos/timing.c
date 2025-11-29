#include <tomcrypt_test.h>

int main(void)
{
init_timer();
reg_algs();
time_keysched();
time_cipher();
time_cipher2();
time_cipher3();
time_hash();
time_macs();
time_encmacs();
time_prng();
time_mult();
time_sqr();
time_rsa();
time_ecc();
time_dh();
return EXIT_SUCCESS;

}

/* $Source$ */
/* $Revision: 1054 $ */
/* $Date: 2006-05-22 19:58:10 -0400 (Mon, 22 May 2006) $ */
