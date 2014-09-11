// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __Simulator_hh__
#define __Simulator_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_Simulator
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_Simulator
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_Simulator
#endif



#ifndef __BasicDataType_hh_EXTERNAL_GUARD__
#define __BasicDataType_hh_EXTERNAL_GUARD__
#include <BasicDataType.hh>
#endif
#ifndef __ExtendedDataTypes_hh_EXTERNAL_GUARD__
#define __ExtendedDataTypes_hh_EXTERNAL_GUARD__
#include <ExtendedDataTypes.hh>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE ssr

_CORBA_MODULE_BEG

  enum RETURN_VALUE { RETVAL_OK, RETVAL_INVALID_PRECONDITION, RETVAL_OBJECT_NOT_FOUND, RETVAL_NOT_IMPLEMENTED, RETVAL_UNKNOWN_ERROR /*, __max_RETURN_VALUE=0xffffffff */ };
  typedef RETURN_VALUE& RETURN_VALUE_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_RETURN_VALUE;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_OBJECT_HANDLE;

  typedef ::CORBA::Long OBJECT_HANDLE;
  typedef ::CORBA::Long_out OBJECT_HANDLE_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_StringSeq;

  class StringSeq_var;

  class StringSeq : public _CORBA_Unbounded_Sequence_String {
  public:
    typedef StringSeq_var _var_type;
    inline StringSeq() {}
    inline StringSeq(const StringSeq& _s)
      : _CORBA_Unbounded_Sequence_String(_s) {}

    inline StringSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence_String(_max) {}
    inline StringSeq(_CORBA_ULong _max, _CORBA_ULong _len, char** _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence_String(_max, _len, _val, _rel) {}

  

    inline StringSeq& operator = (const StringSeq& _s) {
      _CORBA_Unbounded_Sequence_String::operator=(_s);
      return *this;
    }
  };

  class StringSeq_out;

  class StringSeq_var {
  public:
    inline StringSeq_var() : _pd_seq(0) {}
    inline StringSeq_var(StringSeq* _s) : _pd_seq(_s) {}
    inline StringSeq_var(const StringSeq_var& _s) {
      if( _s._pd_seq )  _pd_seq = new StringSeq(*_s._pd_seq);
      else              _pd_seq = 0;
    }
    inline ~StringSeq_var() { if( _pd_seq )  delete _pd_seq; }
      
    inline StringSeq_var& operator = (StringSeq* _s) {
      if( _pd_seq )  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline StringSeq_var& operator = (const StringSeq_var& _s) {
      if( _s._pd_seq ) {
        if( !_pd_seq )  _pd_seq = new StringSeq;
        *_pd_seq = *_s._pd_seq;
      } else if( _pd_seq ) {
        delete _pd_seq;
        _pd_seq = 0;
      }
      return *this;
    }
    inline _CORBA_String_element operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline StringSeq* operator -> () { return _pd_seq; }
    inline const StringSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator StringSeq& () const { return *_pd_seq; }
#else
    inline operator const StringSeq& () const { return *_pd_seq; }
    inline operator StringSeq& () { return *_pd_seq; }
#endif
      
    inline const StringSeq& in() const { return *_pd_seq; }
    inline StringSeq&       inout()    { return *_pd_seq; }
    inline StringSeq*&      out() {
      if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline StringSeq* _retn() { StringSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class StringSeq_out;
    
  private:
    StringSeq* _pd_seq;
  };

  class StringSeq_out {
  public:
    inline StringSeq_out(StringSeq*& _s) : _data(_s) { _data = 0; }
    inline StringSeq_out(StringSeq_var& _s)
      : _data(_s._pd_seq) { _s = (StringSeq*) 0; }
    inline StringSeq_out(const StringSeq_out& _s) : _data(_s._data) {}
    inline StringSeq_out& operator = (const StringSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline StringSeq_out& operator = (StringSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator StringSeq*&()  { return _data; }
    inline StringSeq*& ptr()       { return _data; }
    inline StringSeq* operator->() { return _data; }

    inline _CORBA_String_element operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    StringSeq*& _data;

  private:
    StringSeq_out();
    StringSeq_out& operator=(const StringSeq_var&);
  };

#ifndef __ssr_mSimulator__
#define __ssr_mSimulator__

  class Simulator;
  class _objref_Simulator;
  class _impl_Simulator;
  
  typedef _objref_Simulator* Simulator_ptr;
  typedef Simulator_ptr SimulatorRef;

  class Simulator_Helper {
  public:
    typedef Simulator_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_Simulator, Simulator_Helper> Simulator_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_Simulator,Simulator_Helper > Simulator_out;

#endif

  // interface Simulator
  class Simulator {
  public:
    // Declarations for this interface type.
    typedef Simulator_ptr _ptr_type;
    typedef Simulator_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_Simulator :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    RETURN_VALUE loadProject(const char* path);
    RETURN_VALUE start();
    RETURN_VALUE pause();
    RETURN_VALUE resume();
    RETURN_VALUE stop();
    RETURN_VALUE spawnRobotRTC(const char* objectName, const char* arg);
    RETURN_VALUE spawnRangeRTC(const char* objectName, const char* arg);
    RETURN_VALUE spawnCameraRTC(const char* objectName, const char* arg);
    RETURN_VALUE spawnAccelerometerRTC(const char* objectName, const char* arg);
    RETURN_VALUE spawnGyroRTC(const char* objectName, const char* arg);
    RETURN_VALUE spawnDepthRTC(const char* objectName, const char* arg);
    RETURN_VALUE killRobotRTC(const char* objectName);
    RETURN_VALUE killAllRobotRTC();
    RETURN_VALUE getObjectPose(const char* objectName, ::RTC::Pose3D& pose);
    RETURN_VALUE setObjectPose(const char* objectName, const ::RTC::Pose3D& pose);
    RETURN_VALUE synchronizeRTC(const char* rtcFullPath);
    RETURN_VALUE getSynchronizingRTCs(::ssr::StringSeq_out fullPaths);
    RETURN_VALUE getSimulationTimeStep(::CORBA::Float& timeStep);
    RETURN_VALUE getSimulationTime(::CORBA::Float& time);

    inline _objref_Simulator()  { _PR_setobj(0); }  // nil
    _objref_Simulator(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_Simulator();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_Simulator(const _objref_Simulator&);
    _objref_Simulator& operator = (const _objref_Simulator&);
    // not implemented

    friend class Simulator;
  };

  class _pof_Simulator : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_Simulator() : _OMNI_NS(proxyObjectFactory)(Simulator::_PD_repoId) {}
    virtual ~_pof_Simulator();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_Simulator :
    public virtual omniServant
  {
  public:
    virtual ~_impl_Simulator();

    virtual RETURN_VALUE loadProject(const char* path) = 0;
    virtual RETURN_VALUE start() = 0;
    virtual RETURN_VALUE pause() = 0;
    virtual RETURN_VALUE resume() = 0;
    virtual RETURN_VALUE stop() = 0;
    virtual RETURN_VALUE spawnRobotRTC(const char* objectName, const char* arg) = 0;
    virtual RETURN_VALUE spawnRangeRTC(const char* objectName, const char* arg) = 0;
    virtual RETURN_VALUE spawnCameraRTC(const char* objectName, const char* arg) = 0;
    virtual RETURN_VALUE spawnAccelerometerRTC(const char* objectName, const char* arg) = 0;
    virtual RETURN_VALUE spawnGyroRTC(const char* objectName, const char* arg) = 0;
    virtual RETURN_VALUE spawnDepthRTC(const char* objectName, const char* arg) = 0;
    virtual RETURN_VALUE killRobotRTC(const char* objectName) = 0;
    virtual RETURN_VALUE killAllRobotRTC() = 0;
    virtual RETURN_VALUE getObjectPose(const char* objectName, ::RTC::Pose3D& pose) = 0;
    virtual RETURN_VALUE setObjectPose(const char* objectName, const ::RTC::Pose3D& pose) = 0;
    virtual RETURN_VALUE synchronizeRTC(const char* rtcFullPath) = 0;
    virtual RETURN_VALUE getSynchronizingRTCs(::ssr::StringSeq_out fullPaths) = 0;
    virtual RETURN_VALUE getSimulationTimeStep(::CORBA::Float& timeStep) = 0;
    virtual RETURN_VALUE getSimulationTime(::CORBA::Float& time) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Simulator;

_CORBA_MODULE_END



_CORBA_MODULE POA_ssr
_CORBA_MODULE_BEG

  class Simulator :
    public virtual ssr::_impl_Simulator,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~Simulator();

    inline ::ssr::Simulator_ptr _this() {
      return (::ssr::Simulator_ptr) _do_this(::ssr::Simulator::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_ssr
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

inline void operator >>=(ssr::RETURN_VALUE _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (ssr::RETURN_VALUE& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= ssr::RETVAL_UNKNOWN_ERROR) {
    _e = (ssr::RETURN_VALUE) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, ssr::RETURN_VALUE _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, ssr::RETURN_VALUE& _s);

void operator<<=(::CORBA::Any& _a, const ssr::StringSeq& _s);
void operator<<=(::CORBA::Any& _a, ssr::StringSeq* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, ssr::StringSeq*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const ssr::StringSeq*& _sp);

void operator<<=(::CORBA::Any& _a, ssr::Simulator_ptr _s);
void operator<<=(::CORBA::Any& _a, ssr::Simulator_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, ssr::Simulator_ptr& _s);



inline void
ssr::Simulator::_marshalObjRef(::ssr::Simulator_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_Simulator
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_Simulator
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_Simulator
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_Simulator
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_Simulator
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_Simulator
#endif

#endif  // __Simulator_hh__

