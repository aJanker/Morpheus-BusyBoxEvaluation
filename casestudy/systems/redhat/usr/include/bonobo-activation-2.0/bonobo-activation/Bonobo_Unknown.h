/*
 * This file was generated by orbit-idl-2 - DO NOT EDIT!
 */

#ifndef Bonobo_Unknown_H
#define Bonobo_Unknown_H 1
#include <glib.h>
#define ORBIT_IDL_SERIAL 20
#include <orbit/orbit-types.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/** typedefs **/
#if !defined(ORBIT_DECL_Bonobo_Unknown) && !defined(_Bonobo_Unknown_defined)
#define ORBIT_DECL_Bonobo_Unknown 1
#define _Bonobo_Unknown_defined 1
#define Bonobo_Unknown__freekids CORBA_Object__freekids
typedef CORBA_Object Bonobo_Unknown;
extern CORBA_unsigned_long Bonobo_Unknown__classid;
#if !defined(TC_IMPL_TC_Bonobo_Unknown_0)
#define TC_IMPL_TC_Bonobo_Unknown_0 'B'
#define TC_IMPL_TC_Bonobo_Unknown_1 'o'
#define TC_IMPL_TC_Bonobo_Unknown_2 'n'
#define TC_IMPL_TC_Bonobo_Unknown_3 'o'
#define TC_IMPL_TC_Bonobo_Unknown_4 'b'
#define TC_IMPL_TC_Bonobo_Unknown_5 'o'
#define TC_IMPL_TC_Bonobo_Unknown_6 '_'
#define TC_IMPL_TC_Bonobo_Unknown_7 'U'
#define TC_IMPL_TC_Bonobo_Unknown_8 'n'
#define TC_IMPL_TC_Bonobo_Unknown_9 'k'
#define TC_IMPL_TC_Bonobo_Unknown_10 'n'
#define TC_IMPL_TC_Bonobo_Unknown_11 'o'
#define TC_IMPL_TC_Bonobo_Unknown_12 'w'
#define TC_IMPL_TC_Bonobo_Unknown_13 'n'
#ifdef ORBIT_IDL_C_IMODULE_Bonobo_Unknown
static
#else
extern
#endif
ORBIT2_MAYBE_CONST struct CORBA_TypeCode_struct TC_Bonobo_Unknown_struct;
#define TC_Bonobo_Unknown ((CORBA_TypeCode)&TC_Bonobo_Unknown_struct)
#endif
#endif

/** POA structures **/
#ifndef _defined_POA_Bonobo_Unknown
#define _defined_POA_Bonobo_Unknown 1
typedef struct {
  void *_private;
void (*ref)(PortableServer_Servant _servant, CORBA_Environment *ev);
void (*unref)(PortableServer_Servant _servant, CORBA_Environment *ev);
Bonobo_Unknown (*queryInterface)(PortableServer_Servant _servant, const CORBA_char * repoid, CORBA_Environment *ev);
} POA_Bonobo_Unknown__epv;
typedef struct {
  PortableServer_ServantBase__epv *_base_epv;
  POA_Bonobo_Unknown__epv *Bonobo_Unknown_epv;
} POA_Bonobo_Unknown__vepv;
typedef struct {
  void *_private;
  POA_Bonobo_Unknown__vepv *vepv;
} POA_Bonobo_Unknown;
extern void POA_Bonobo_Unknown__init(PortableServer_Servant servant, CORBA_Environment *ev);
extern void POA_Bonobo_Unknown__fini(PortableServer_Servant servant, CORBA_Environment *ev);
#endif /* _defined_POA_Bonobo_Unknown */

/** skel prototypes **/
void _ORBIT_skel_small_Bonobo_Unknown_ref(POA_Bonobo_Unknown *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_ref)(PortableServer_Servant _servant, CORBA_Environment *ev));
void _ORBIT_skel_small_Bonobo_Unknown_unref(POA_Bonobo_Unknown *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_unref)(PortableServer_Servant _servant, CORBA_Environment *ev));
void _ORBIT_skel_small_Bonobo_Unknown_queryInterface(POA_Bonobo_Unknown *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, Bonobo_Unknown (*_impl_queryInterface)(PortableServer_Servant _servant, const CORBA_char * repoid, CORBA_Environment *ev));

/** stub prototypes **/
void Bonobo_Unknown_ref(Bonobo_Unknown _obj, CORBA_Environment *ev);
void Bonobo_Unknown_unref(Bonobo_Unknown _obj, CORBA_Environment *ev);
Bonobo_Unknown Bonobo_Unknown_queryInterface(Bonobo_Unknown _obj, const CORBA_char * repoid, CORBA_Environment *ev);
#include <orbit/orb-core/orbit-interface.h>

#ifdef ORBIT_IDL_C_IMODULE_Bonobo_Unknown
static 
#else
extern 
#endif
ORBit_IInterface Bonobo_Unknown__iinterface;
#define Bonobo_Unknown_IMETHODS_LEN 3
#ifdef ORBIT_IDL_C_IMODULE_Bonobo_Unknown
static 
#else
extern 
#endif
ORBit_IMethod Bonobo_Unknown__imethods[Bonobo_Unknown_IMETHODS_LEN];

/** IMethods index */

#ifndef __Bonobo_Unknown__imethods_index
#define __Bonobo_Unknown__imethods_index
typedef enum {
	Bonobo_Unknown_ref__imethods_index,
	Bonobo_Unknown_unref__imethods_index,
	Bonobo_Unknown_queryInterface__imethods_index
} Bonobo_Unknown__imethods_index;
#endif /* __Bonobo_Unknown__imethods_index */

#ifndef __ORBIT_IMETHODS_INDEX
#define __ORBIT_IMETHODS_INDEX
#define ORBIT_IMETHODS_INDEX(m) (m ## __imethods_index)
#endif /* __ORBIT_IMETHODS_INDEX */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#ifndef EXCLUDE_ORBIT_H
#include <orbit/orbit.h>

#endif /* EXCLUDE_ORBIT_H */
#endif
#undef ORBIT_IDL_SERIAL
