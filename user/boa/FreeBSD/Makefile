# New ports collection makefile for:    boa, an http server
# Version required:     0.93.15f
# Date created:         Sun Dec 20  23:24:00 CDT 1998
# Whom:                 Martin Hinner <martin@tdp.cz>
#
# $Id: Makefile 559 2006-02-18 16:55:57Z stsp2 $
#

DISTNAME=       boa-0.93.15f
CATEGORIES=	www
MASTER_SITES=   http://cz.boa.org/updates/

MAINTAINER=     martin@tdp.cz

MAN1=		boa.1

do-build:	
	( cd ${WRKDIR}/${DISTNAME}/src; \
	./configure; \
	make all; \
	cd ../../.. )

do-install:	build
	( cd ${WRKDIR}/${DISTNAME}/src; \
	make install; \
	cd ../../.. )

.include <bsd.port.mk>
