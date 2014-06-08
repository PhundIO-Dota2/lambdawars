// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "npcevent.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "baseprojectile.h"
#include "basegrenade_shared.h"
#include "takedamageinfo.h"
#include "c_ai_basenpc.h"
#include "c_basetoggle.h"
#include "c_triggers.h"
#include "soundinfo.h"
#include "saverestore.h"
#include "vcollide_parse.h"
#include "iclientvehicle.h"
#include "steam/steamclientpublic.h"
#include "view_shared.h"
#include "c_playerresource.h"
#include "c_breakableprop.h"
#include "nav_area.h"
#include "Sprite.h"
#include "SpriteTrail.h"
#include "c_smoke_trail.h"
#include "beam_shared.h"
#include "c_hl2wars_player.h"
#include "unit_base_shared.h"
#include "wars_func_unit.h"
#include "hl2wars_player_shared.h"
#include "wars_mapboundary.h"
#include "srcpy_util.h"
#include "c_wars_weapon.h"
#include "wars_flora.h"
#include "srcpy.h"
#include "tier0/memdbgon.h"
#include "PyHandle_pypp.hpp"

namespace bp = boost::python;

struct PyHandle_wrapper : PyHandle, bp::wrapper< PyHandle > {

    PyHandle_wrapper(PyHandle const & arg )
    : PyHandle( arg )
      , bp::wrapper< PyHandle >(){
        // copy constructor
        
    }

    PyHandle_wrapper(::boost::python::api::object ent )
    : PyHandle( ent )
      , bp::wrapper< PyHandle >(){
        // constructor
    
    }

    PyHandle_wrapper(int iEntry, int iSerialNumber )
    : PyHandle( iEntry, iSerialNumber )
      , bp::wrapper< PyHandle >(){
        // constructor
    
    }

    virtual PyObject *GetPySelf() { return boost::python::detail::wrapper_base_::get_owner(*this); }

};

void register_PyHandle_class(){

    { //::PyHandle
        typedef bp::class_< PyHandle_wrapper, bp::bases< CBaseHandle > > PyHandle_exposer_t;
        PyHandle_exposer_t PyHandle_exposer = PyHandle_exposer_t( "PyHandle", bp::init< bp::api::object >(( bp::arg("ent") )) );
        bp::scope PyHandle_scope( PyHandle_exposer );
        bp::implicitly_convertible< bp::api::object, PyHandle >();
        PyHandle_exposer.def( bp::init< int, int >(( bp::arg("iEntry"), bp::arg("iSerialNumber") )) );
        { //::PyHandle::Bool
        
            typedef bool ( ::PyHandle::*__bool___function_type )(  ) ;
            
            PyHandle_exposer.def( 
                "__bool__"
                , __bool___function_type( &::PyHandle::Bool ) );
        
        }
        { //::PyHandle::GetAttr
        
            typedef ::boost::python::api::object ( ::PyHandle::*__getattr___function_type )( char const * ) ;
            
            PyHandle_exposer.def( 
                "__getattr__"
                , __getattr___function_type( &::PyHandle::GetAttr )
                , ( bp::arg("name") ) );
        
        }
        { //::PyHandle::GetAttribute
        
            typedef ::boost::python::api::object ( ::PyHandle::*__getattribute___function_type )( char const * ) ;
            
            PyHandle_exposer.def( 
                "__getattribute__"
                , __getattribute___function_type( &::PyHandle::GetAttribute )
                , ( bp::arg("name") ) );
        
        }
        { //::PyHandle::Hash
        
            typedef ::Py_hash_t ( ::PyHandle::*__hash___function_type )(  ) ;
            
            PyHandle_exposer.def( 
                "__hash__"
                , __hash___function_type( &::PyHandle::Hash ) );
        
        }
        { //::PyHandle::PyGet
        
            typedef ::boost::python::api::object ( ::PyHandle::*Get_function_type )(  ) const;
            
            PyHandle_exposer.def( 
                "Get"
                , Get_function_type( &::PyHandle::PyGet ) );
        
        }
        { //::PyHandle::Set
        
            typedef void ( ::PyHandle::*Set_function_type )( ::boost::python::api::object ) ;
            
            PyHandle_exposer.def( 
                "Set"
                , Set_function_type( &::PyHandle::Set )
                , ( bp::arg("ent") ) );
        
        }
        { //::PyHandle::SetAttr
        
            typedef void ( ::PyHandle::*__setattr___function_type )( char const *,::boost::python::api::object ) ;
            
            PyHandle_exposer.def( 
                "__setattr__"
                , __setattr___function_type( &::PyHandle::SetAttr )
                , ( bp::arg("name"), bp::arg("v") ) );
        
        }
        { //::PyHandle::Str
        
            typedef ::boost::python::api::object ( ::PyHandle::*__str___function_type )(  ) ;
            
            PyHandle_exposer.def( 
                "__str__"
                , __str___function_type( &::PyHandle::Str ) );
        
        }
        PyHandle_exposer.def( bp::self != bp::other< bp::api::object >() );
        PyHandle_exposer.def( bp::self != bp::self );
        { //::PyHandle::operator=
        
            typedef ::PyHandle const & ( ::PyHandle::*assign_function_type )( ::boost::python::api::object ) ;
            
            PyHandle_exposer.def( 
                "assign"
                , assign_function_type( &::PyHandle::operator= )
                , ( bp::arg("val") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        PyHandle_exposer.def( bp::self == bp::other< bp::api::object >() );
        PyHandle_exposer.def( bp::self == bp::self );
    }

}

