$NetBSD$

--- src/video/x11/SDL_x11messagebox.c.orig	Thu Oct 24 04:05:30 2013
+++ src/video/x11/SDL_x11messagebox.c
@@ -23,6 +23,8 @@
 
 #if SDL_VIDEO_DRIVER_X11
 
+#include <X11/keysym.h>
+
 #include "SDL.h"
 #include "SDL_x11video.h"
 #include "SDL_x11dyn.h"
