
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_xlib_Visual__
#define __gnu_gcj_xlib_Visual__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
        class RawData;
      namespace xlib
      {
          class Display;
          class Screen;
          class Visual;
      }
    }
  }
}

class gnu::gcj::xlib::Visual : public ::java::lang::Object
{

public: // actually package-private
  Visual(::gnu::gcj::RawData *, ::gnu::gcj::xlib::Screen *, jint);
  Visual(::gnu::gcj::xlib::Display *, ::gnu::gcj::RawData *, jint);
public: // actually protected
  void init(::gnu::gcj::RawData *, jint);
  void finalize();
public: // actually package-private
  ::gnu::gcj::RawData * getVisualStructure();
public:
  jint getRedMask();
  jint getGreenMask();
  jint getBlueMask();
  jint getScreenNumber();
  jint getDepth();
  ::gnu::gcj::xlib::Screen * getScreen();
  jint getVisualClass();
  jboolean hasRGBSubfields();
public: // actually protected
  void ensureXVisualInfo(jint);
public:
  ::java::lang::String * toString();
  static const jint VC_STATIC_GRAY = 0;
  static const jint VC_GRAY_SCALE = 1;
  static const jint VC_STATIC_COLOR = 2;
  static const jint VC_PSEUDO_COLOR = 3;
  static const jint VC_TRUE_COLOR = 4;
  static const jint VC_DIRECT_COLOR = 5;
public: // actually protected
  static const jint MASK_ID = 1;
  static const jint MASK_SCREEN = 2;
  static const jint MASK_DEPTH = 4;
  static const jint MASK_CLASS = 8;
  static const jint MASK_RED = 16;
  static const jint MASK_GREEN = 32;
  static const jint MASK_BLUE = 64;
  static const jint MASK_COLORMAP_SIZE = 128;
  static const jint MASK_BITS_PER_RGB = 256;
  static const jint MASK_ALL = 511;
private:
  static const jint MASK_VISUAL_STRUCTURE = -2147483647 - 1;
public: // actually package-private
  ::gnu::gcj::xlib::Display * __attribute__((aligned(__alignof__( ::java::lang::Object)))) display;
  ::gnu::gcj::RawData * xVisualInfo;
  jint infoMask;
  ::gnu::gcj::xlib::Screen * screen;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_xlib_Visual__
