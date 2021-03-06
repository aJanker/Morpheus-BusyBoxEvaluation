
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_ExecutorService__
#define __java_util_concurrent_ExecutorService__

#pragma interface

#include <java/lang/Object.h>

class java::util::concurrent::ExecutorService : public ::java::lang::Object
{

public:
  virtual void shutdown() = 0;
  virtual ::java::util::List * shutdownNow() = 0;
  virtual jboolean isShutdown() = 0;
  virtual jboolean isTerminated() = 0;
  virtual jboolean awaitTermination(jlong, ::java::util::concurrent::TimeUnit *) = 0;
  virtual ::java::util::concurrent::Future * submit(::java::util::concurrent::Callable *) = 0;
  virtual ::java::util::concurrent::Future * submit(::java::lang::Runnable *, ::java::lang::Object *) = 0;
  virtual ::java::util::concurrent::Future * submit(::java::lang::Runnable *) = 0;
  virtual ::java::util::List * invokeAll(::java::util::Collection *) = 0;
  virtual ::java::util::List * invokeAll(::java::util::Collection *, jlong, ::java::util::concurrent::TimeUnit *) = 0;
  virtual ::java::lang::Object * invokeAny(::java::util::Collection *) = 0;
  virtual ::java::lang::Object * invokeAny(::java::util::Collection *, jlong, ::java::util::concurrent::TimeUnit *) = 0;
  virtual void execute(::java::lang::Runnable *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_util_concurrent_ExecutorService__
