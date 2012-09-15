// This file has been generated by Py++.

#include "cbase.h"

#ifdef CLIENT_DLL

#include "boost/python.hpp"

#include "videocfg/videocfg.h"

#include "cbase.h"

#include "src_python_navmesh.h"

#include "src_python.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_navmesh){
    bp::docstring_options doc_options( true, true, false );

    { //::CreateNavArea
    
        typedef int ( *CreateNavArea_function_type )( ::Vector const &,::Vector const & );
        
        bp::def( 
            "CreateNavArea"
            , CreateNavArea_function_type( &::CreateNavArea )
            , ( bp::arg("corner"), bp::arg("otherCorner") ) );
    
    }

    { //::CreateNavAreaByCorners
    
        typedef int ( *CreateNavAreaByCorners_function_type )( ::Vector const &,::Vector const &,::Vector const &,::Vector const & );
        
        bp::def( 
            "CreateNavAreaByCorners"
            , CreateNavAreaByCorners_function_type( &::CreateNavAreaByCorners )
            , ( bp::arg("nwCorner"), bp::arg("neCorner"), bp::arg("seCorner"), bp::arg("swCorner") ) );
    
    }

    { //::DestroyAllNavAreas
    
        typedef void ( *DestroyAllNavAreas_function_type )(  );
        
        bp::def( 
            "DestroyAllNavAreas"
            , DestroyAllNavAreas_function_type( &::DestroyAllNavAreas ) );
    
    }

    { //::DestroyNavArea
    
        typedef void ( *DestroyNavArea_function_type )( int );
        
        bp::def( 
            "DestroyNavArea"
            , DestroyNavArea_function_type( &::DestroyNavArea )
            , ( bp::arg("id") ) );
    
    }

    { //::GetHidingSpotsInRadius
    
        typedef ::boost::python::list ( *GetHidingSpotsInRadius_function_type )( ::Vector const &,float );
        
        bp::def( 
            "GetHidingSpotsInRadius"
            , GetHidingSpotsInRadius_function_type( &::GetHidingSpotsInRadius )
            , ( bp::arg("pos"), bp::arg("radius") ) );
    
    }

    { //::GetNavAreaAt
    
        typedef int ( *GetNavAreaAt_function_type )( ::Vector const &,float );
        
        bp::def( 
            "GetNavAreaAt"
            , GetNavAreaAt_function_type( &::GetNavAreaAt )
            , ( bp::arg("pos"), bp::arg("beneathlimit")=1.2e+2f ) );
    
    }

    { //::GetNavAreasAtBB
    
        typedef ::boost::python::list ( *GetNavAreasAtBB_function_type )( ::Vector const &,::Vector const & );
        
        bp::def( 
            "GetNavAreasAtBB"
            , GetNavAreasAtBB_function_type( &::GetNavAreasAtBB )
            , ( bp::arg("mins"), bp::arg("maxs") ) );
    
    }

    { //::IsBBCoveredByNavAreas
    
        typedef bool ( *IsBBCoveredByNavAreas_function_type )( ::Vector const &,::Vector const &,float,bool,float );
        
        bp::def( 
            "IsBBCoveredByNavAreas"
            , IsBBCoveredByNavAreas_function_type( &::IsBBCoveredByNavAreas )
            , ( bp::arg("mins"), bp::arg("maxs"), bp::arg("tolerance")=1.00000001490116119384765625e-1f, bp::arg("bRequireIsFlat")=(bool)(true), bp::arg("fFlatTol")=6.99999988079071044921875e-1f ) );
    
    }

    { //::NavMeshAvailable
    
        typedef bool ( *NavMeshAvailable_function_type )(  );
        
        bp::def( 
            "NavMeshAvailable"
            , NavMeshAvailable_function_type( &::NavMeshAvailable ) );
    
    }

    { //::NavMeshGetPathDistance
    
        typedef float ( *NavMeshGetPathDistance_function_type )( ::Vector &,::Vector &,bool,float,bool );
        
        bp::def( 
            "NavMeshGetPathDistance"
            , NavMeshGetPathDistance_function_type( &::NavMeshGetPathDistance )
            , ( bp::arg("vStart"), bp::arg("vGoal"), bp::arg("anyz")=(bool)(false), bp::arg("maxdist")=1.0e+4f, bp::arg("notolerance")=(bool)(false) ) );
    
    }

    { //::NavMeshGetPositionNearestNavArea
    
        typedef ::Vector ( *NavMeshGetPositionNearestNavArea_function_type )( ::Vector const &,float );
        
        bp::def( 
            "NavMeshGetPositionNearestNavArea"
            , NavMeshGetPositionNearestNavArea_function_type( &::NavMeshGetPositionNearestNavArea )
            , ( bp::arg("pos"), bp::arg("beneathlimit")=1.2e+2f ) );
    
    }

    { //::NavMeshTestHasArea
    
        typedef bool ( *NavMeshTestHasArea_function_type )( ::Vector &,float );
        
        bp::def( 
            "NavMeshTestHasArea"
            , NavMeshTestHasArea_function_type( &::NavMeshTestHasArea )
            , ( bp::arg("pos"), bp::arg("beneathLimt")=1.2e+2f ) );
    
    }

    { //::RandomNavAreaPosition
    
        typedef ::Vector ( *RandomNavAreaPosition_function_type )(  );
        
        bp::def( 
            "RandomNavAreaPosition"
            , RandomNavAreaPosition_function_type( &::RandomNavAreaPosition ) );
    
    }

    { //::SetAreasBlocked
    
        typedef void ( *SetAreasBlocked_function_type )( ::boost::python::list,bool );
        
        bp::def( 
            "SetAreasBlocked"
            , SetAreasBlocked_function_type( &::SetAreasBlocked )
            , ( bp::arg("areas"), bp::arg("blocked") ) );
    
    }

    { //::SplitAreasAtBB
    
        typedef void ( *SplitAreasAtBB_function_type )( ::Vector const &,::Vector const & );
        
        bp::def( 
            "SplitAreasAtBB"
            , SplitAreasAtBB_function_type( &::SplitAreasAtBB )
            , ( bp::arg("mins"), bp::arg("maxs") ) );
    
    }

    { //::TryMergeSurrounding
    
        typedef bool ( *TryMergeSurrounding_function_type )( int,float );
        
        bp::def( 
            "TryMergeSurrounding"
            , TryMergeSurrounding_function_type( &::TryMergeSurrounding )
            , ( bp::arg("id"), bp::arg("tolerance")=1.1920928955078125e-7f ) );
    
    }
}

#else

#include "boost/python.hpp"

#include "cbase.h"

#include "src_python_navmesh.h"

#include "src_python.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_navmesh){
    bp::docstring_options doc_options( true, true, false );

    { //::CreateNavArea
    
        typedef int ( *CreateNavArea_function_type )( ::Vector const &,::Vector const & );
        
        bp::def( 
            "CreateNavArea"
            , CreateNavArea_function_type( &::CreateNavArea )
            , ( bp::arg("corner"), bp::arg("otherCorner") ) );
    
    }

    { //::CreateNavAreaByCorners
    
        typedef int ( *CreateNavAreaByCorners_function_type )( ::Vector const &,::Vector const &,::Vector const &,::Vector const & );
        
        bp::def( 
            "CreateNavAreaByCorners"
            , CreateNavAreaByCorners_function_type( &::CreateNavAreaByCorners )
            , ( bp::arg("nwCorner"), bp::arg("neCorner"), bp::arg("seCorner"), bp::arg("swCorner") ) );
    
    }

    { //::DestroyAllNavAreas
    
        typedef void ( *DestroyAllNavAreas_function_type )(  );
        
        bp::def( 
            "DestroyAllNavAreas"
            , DestroyAllNavAreas_function_type( &::DestroyAllNavAreas ) );
    
    }

    { //::DestroyNavArea
    
        typedef void ( *DestroyNavArea_function_type )( int );
        
        bp::def( 
            "DestroyNavArea"
            , DestroyNavArea_function_type( &::DestroyNavArea )
            , ( bp::arg("id") ) );
    
    }

    { //::GetHidingSpotsInRadius
    
        typedef ::boost::python::list ( *GetHidingSpotsInRadius_function_type )( ::Vector const &,float );
        
        bp::def( 
            "GetHidingSpotsInRadius"
            , GetHidingSpotsInRadius_function_type( &::GetHidingSpotsInRadius )
            , ( bp::arg("pos"), bp::arg("radius") ) );
    
    }

    { //::GetNavAreaAt
    
        typedef int ( *GetNavAreaAt_function_type )( ::Vector const &,float );
        
        bp::def( 
            "GetNavAreaAt"
            , GetNavAreaAt_function_type( &::GetNavAreaAt )
            , ( bp::arg("pos"), bp::arg("beneathlimit")=1.2e+2f ) );
    
    }

    { //::GetNavAreasAtBB
    
        typedef ::boost::python::list ( *GetNavAreasAtBB_function_type )( ::Vector const &,::Vector const & );
        
        bp::def( 
            "GetNavAreasAtBB"
            , GetNavAreasAtBB_function_type( &::GetNavAreasAtBB )
            , ( bp::arg("mins"), bp::arg("maxs") ) );
    
    }

    { //::IsBBCoveredByNavAreas
    
        typedef bool ( *IsBBCoveredByNavAreas_function_type )( ::Vector const &,::Vector const &,float,bool,float );
        
        bp::def( 
            "IsBBCoveredByNavAreas"
            , IsBBCoveredByNavAreas_function_type( &::IsBBCoveredByNavAreas )
            , ( bp::arg("mins"), bp::arg("maxs"), bp::arg("tolerance")=1.00000001490116119384765625e-1f, bp::arg("bRequireIsFlat")=(bool)(true), bp::arg("fFlatTol")=6.99999988079071044921875e-1f ) );
    
    }

    { //::NavMeshAvailable
    
        typedef bool ( *NavMeshAvailable_function_type )(  );
        
        bp::def( 
            "NavMeshAvailable"
            , NavMeshAvailable_function_type( &::NavMeshAvailable ) );
    
    }

    { //::NavMeshGetPathDistance
    
        typedef float ( *NavMeshGetPathDistance_function_type )( ::Vector &,::Vector &,bool,float,bool );
        
        bp::def( 
            "NavMeshGetPathDistance"
            , NavMeshGetPathDistance_function_type( &::NavMeshGetPathDistance )
            , ( bp::arg("vStart"), bp::arg("vGoal"), bp::arg("anyz")=(bool)(false), bp::arg("maxdist")=1.0e+4f, bp::arg("notolerance")=(bool)(false) ) );
    
    }

    { //::NavMeshGetPositionNearestNavArea
    
        typedef ::Vector ( *NavMeshGetPositionNearestNavArea_function_type )( ::Vector const &,float );
        
        bp::def( 
            "NavMeshGetPositionNearestNavArea"
            , NavMeshGetPositionNearestNavArea_function_type( &::NavMeshGetPositionNearestNavArea )
            , ( bp::arg("pos"), bp::arg("beneathlimit")=1.2e+2f ) );
    
    }

    { //::NavMeshTestHasArea
    
        typedef bool ( *NavMeshTestHasArea_function_type )( ::Vector &,float );
        
        bp::def( 
            "NavMeshTestHasArea"
            , NavMeshTestHasArea_function_type( &::NavMeshTestHasArea )
            , ( bp::arg("pos"), bp::arg("beneathLimt")=1.2e+2f ) );
    
    }

    { //::RandomNavAreaPosition
    
        typedef ::Vector ( *RandomNavAreaPosition_function_type )(  );
        
        bp::def( 
            "RandomNavAreaPosition"
            , RandomNavAreaPosition_function_type( &::RandomNavAreaPosition ) );
    
    }

    { //::SetAreasBlocked
    
        typedef void ( *SetAreasBlocked_function_type )( ::boost::python::list,bool );
        
        bp::def( 
            "SetAreasBlocked"
            , SetAreasBlocked_function_type( &::SetAreasBlocked )
            , ( bp::arg("areas"), bp::arg("blocked") ) );
    
    }

    { //::SplitAreasAtBB
    
        typedef void ( *SplitAreasAtBB_function_type )( ::Vector const &,::Vector const & );
        
        bp::def( 
            "SplitAreasAtBB"
            , SplitAreasAtBB_function_type( &::SplitAreasAtBB )
            , ( bp::arg("mins"), bp::arg("maxs") ) );
    
    }

    { //::TryMergeSurrounding
    
        typedef bool ( *TryMergeSurrounding_function_type )( int,float );
        
        bp::def( 
            "TryMergeSurrounding"
            , TryMergeSurrounding_function_type( &::TryMergeSurrounding )
            , ( bp::arg("id"), bp::arg("tolerance")=1.1920928955078125e-7f ) );
    
    }
}

#endif // CLIENT_DLL

