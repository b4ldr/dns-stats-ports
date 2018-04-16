# $FreeBSD$

PORTNAME=	libtins
PORTVERSION=	3.4
CATEGORIES=	net

MAINTAINER=	jim@sinodun.com
COMMENT=	C++ packet crafting and sniffing library

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpcap.so:net/libpcap

USE_GITHUB=	yes
GH_ACCOUNT=	mfontanini
GH_TAGNAME=	v${PORTVERSION}

USES=		cmake ssl
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DLIBTINS_ENABLE_CXX11=1
PLIST_SUB+=	PORTVERSION="${PORTVERSION}"

.include <bsd.port.mk>
