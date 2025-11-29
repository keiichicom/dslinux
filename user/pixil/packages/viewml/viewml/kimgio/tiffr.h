/**
* QImageIO Routines to read/write TIFF images.
* Sirtaj Singh Kang, Oct 1998.
*
* $Id: tiffr.h 1425 2006-10-03 11:27:15Z dslinux_amadeus $
*/

#ifndef KIMG_TIFFR_H
#define KIMG_TIFFR_H

class QImageIO;

void kimgio_tiff_read( QImageIO *io );
void kimgio_tiff_write( QImageIO *io );

#endif
