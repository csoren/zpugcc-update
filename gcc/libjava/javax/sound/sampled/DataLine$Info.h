
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_DataLine$Info__
#define __javax_sound_sampled_DataLine$Info__

#pragma interface

#include <javax/sound/sampled/Line$Info.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
          class AudioFormat;
          class DataLine$Info;
          class Line$Info;
      }
    }
  }
}

class javax::sound::sampled::DataLine$Info : public ::javax::sound::sampled::Line$Info
{

public:
  DataLine$Info(::java::lang::Class *, ::javax::sound::sampled::AudioFormat *);
  DataLine$Info(::java::lang::Class *, JArray< ::javax::sound::sampled::AudioFormat * > *, jint, jint);
  DataLine$Info(::java::lang::Class *, ::javax::sound::sampled::AudioFormat *, jint);
  virtual JArray< ::javax::sound::sampled::AudioFormat * > * getFormats();
  virtual jint getMaxBufferSize();
  virtual jint getMinBufferSize();
  virtual jboolean isFormatSupported(::javax::sound::sampled::AudioFormat *);
  virtual jboolean matches(::javax::sound::sampled::Line$Info *);
  virtual ::java::lang::String * toString();
private:
  jint __attribute__((aligned(__alignof__( ::javax::sound::sampled::Line$Info)))) minBufferSize;
  jint maxBufferSize;
  JArray< ::javax::sound::sampled::AudioFormat * > * formats;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_sound_sampled_DataLine$Info__
