## Process this file with automake to produce Makefile.in

AM_CPPFLAGS = \
	-DG_LOG_DOMAIN=\"Gimp-GEGL\"

INCLUDES = \
	-I$(top_builddir)	\
	-I$(top_srcdir)		\
	-I$(top_builddir)/app	\
	-I$(top_srcdir)/app	\
	$(GEGL_CFLAGS)		\
	$(GDK_PIXBUF_CFLAGS)	\
	-I$(includedir)

noinst_LIBRARIES = libappgegl.a

libappgegl_a_SOURCES = \
	gimp-gegl-types.h		\
	gimp-gegl.c			\
	gimp-gegl.h			\
	gimp-gegl-utils.c		\
	gimp-gegl-utils.h		\
	\
	gimpbrightnesscontrastconfig.c	\
	gimpbrightnesscontrastconfig.h	\
	gimpcolorbalanceconfig.c	\
	gimpcolorbalanceconfig.h	\
	gimpcolorizeconfig.c		\
	gimpcolorizeconfig.h		\
	gimpcurvesconfig.c		\
	gimpcurvesconfig.h		\
	gimpdesaturateconfig.c		\
	gimpdesaturateconfig.h		\
	gimphuesaturationconfig.c	\
	gimphuesaturationconfig.h	\
	gimplevelsconfig.c		\
	gimplevelsconfig.h		\
	gimpposterizeconfig.c		\
	gimpposterizeconfig.h		\
	gimpthresholdconfig.c		\
	gimpthresholdconfig.h		\
	\
	gimpoperationcolorbalance.c	\
	gimpoperationcolorbalance.h	\
	gimpoperationcolorize.c		\
	gimpoperationcolorize.h		\
	gimpoperationcurves.c		\
	gimpoperationcurves.h		\
	gimpoperationdesaturate.c	\
	gimpoperationdesaturate.h	\
	gimpoperationhuesaturation.c	\
	gimpoperationhuesaturation.h	\
	gimpoperationlevels.c		\
	gimpoperationlevels.h		\
	gimpoperationpointfilter.c	\
	gimpoperationpointfilter.h	\
	gimpoperationposterize.c	\
	gimpoperationposterize.h	\
	gimpoperationthreshold.c	\
	gimpoperationthreshold.h	\
	gimpoperationtilesink.c		\
	gimpoperationtilesink.h		\
	gimpoperationtilesource.c	\
	gimpoperationtilesource.h
