
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_util_MonitorInfo__
#define __gnu_classpath_jdwp_util_MonitorInfo__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace util
        {
            class MonitorInfo;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::util::MonitorInfo : public ::java::lang::Object
{

public:
  MonitorInfo();
  virtual void write(::java::io::DataOutputStream *);
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) entryCount;
  ::java::lang::Thread * owner;
  JArray< ::java::lang::Thread * > * waiters;
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_util_MonitorInfo__
