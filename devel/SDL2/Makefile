# $NetBSD: Makefile,v 1.3 2013/11/25 12:00:47 wiz Exp $

DISTNAME=	SDL2-2.0.1
PKGREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://www.libsdl.org/release/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.libsdl.org/
COMMENT=	Simple DirectMedia Layer is a cross-platform multimedia library
LICENSE=	zlib

USE_LANGUAGES=	c c++
USE_LIBTOOL=	yes
USE_TOOLS+=	gmake
GNU_CONFIGURE=	yes

.include "../../mk/bsd.prefs.mk"

CFLAGS+= -O3 -DUSING_GENERATED_CONFIG_H -DNO_SHARED_MEMORY -DSDL_VIDEO_DRIVER_X11_XVIDMODE=1

.include "../../mk/bsd.pkg.mk"
