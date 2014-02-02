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
BUILD_DEPENDS+=	fontconfig>=2.*:../../fonts/fontconfig
PKG_INSTALLATION_TYPES= overwrite pkgviews

CPPFLAGS+=	-DPREFIX="\"${PREFIX}\""
CPPFLAGS+=	-DX11BASE="\"${X11BASE}\""

.include "../../mk/bsd.prefs.mk"

CFLAGS+= -O3 -DNO_SHARED_MEMORY -DSDL_VIDEO_DRIVER_X11_XVIDMODE=1
CONFIGURE_ARGS+= --with-x --enable-video --enable-video-x11 --disable-x11-shared

#.include "../../fonts/fontconfig/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXrandr/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"
.include "../../x11/xproto/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
