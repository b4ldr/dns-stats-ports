# $FreeBSD$

PORTNAME=	dns-stats-compactor
PORTVERSION=	0.11.0
CATEGORIES=	dns

MAINTAINER=	jim@sinodun.com
COMMENT=	DNS traffic capture and reconstruction
USE_GITHUB= yes
GH_ACCOUNT= dns-stats
GH_PROJECT= compactor
GH_TAGNAME= 39f67fd

LICENSE=	MPL
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	asciidoctor:textproc/rubygem-asciidoctor
LIB_DEPENDS=	libtins.so:net/libtins \
		libboost_filesystem.so:devel/boost-libs \
		libboost_iostreams.so:devel/boost-libs \
		libboost_log.so:devel/boost-libs \
		libboost_program_options.so:devel/boost-libs \
		libboost_system.so:devel/boost-libs \
		libboost_thread.so:devel/boost-libs \
		libpcap.so:net/libpcap

USE_RC_SUBR=	compactor

USES=		autoreconf libtool compiler:c++11-lang gmake pkgconfig

GNU_CONFIGURE=	yes

DATADIR=	/var/lib/${PORTNAME}
PLIST_SUB+=	DATADIR=${DATADIR} \
		PORTNAME="${PORTNAME}"

post-stage:
	@${MKDIR} -p ${STAGEDIR}${DATADIR}/pcap/ignored
	@${MKDIR} -p ${STAGEDIR}${DATADIR}/pcap/raw
	@${MKDIR} -p ${STAGEDIR}${DATADIR}/cdns
	@${MV} ${STAGEDIR}${ETCDIR}/compactor.conf ${STAGEDIR}${ETCDIR}/compactor.conf.sample

.include <bsd.port.mk>
