
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenBackRef__
#define __gnu_java_util_regex_RETokenBackRef__

#pragma interface

#include <gnu/java/util/regex/REToken.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace util
      {
        namespace regex
        {
            class CharIndexed;
            class REMatch;
            class RETokenBackRef;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenBackRef : public ::gnu::java::util::regex::REToken
{

public: // actually package-private
  RETokenBackRef(jint, jint, jboolean);
  ::gnu::java::util::regex::REMatch * matchThis(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  void dump(::java::lang::StringBuffer *);
private:
  jint __attribute__((aligned(__alignof__( ::gnu::java::util::regex::REToken)))) num;
  jboolean insens;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_RETokenBackRef__