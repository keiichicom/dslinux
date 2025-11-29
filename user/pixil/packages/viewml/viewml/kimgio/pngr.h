/*
* PNGR.H -- Prototypes for QImageIO read/write handlers for
*	the PNG graphic format using libpng.
*
*	Copyright (c) October 1998, Sirtaj Singh Kang.
*	Distributed under the LGPL.
*
*	$Id: pngr.h 1425 2006-10-03 11:27:15Z dslinux_amadeus $
*/
#ifndef	_SSK_PNGR_H
#define _SSK_PNGR_H

class QImageIO;

void kimgio_png_read( QImageIO *io );
void kimgio_png_write(QImageIO *io );

#endif
