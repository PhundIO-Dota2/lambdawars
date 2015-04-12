// This file has been generated by Py++.

#include "cbase.h"
#ifdef CLIENT_DLL
#include "cbase.h"

#include "wars_achievements.h"

#include "srcpy.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_achievements){
    bp::docstring_options doc_options( true, true, false );

    bp::enum_< WarsAchievements_e>("WarsAchievements_e")
        .value("ACHIEVEMENT_WARS_TEST", ACHIEVEMENT_WARS_TEST)
        .export_values()
        ;
}
#else
#include "cbase.h"

#include "wars_achievements.h"

#include "srcpy.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_achievements){
    bp::docstring_options doc_options( true, true, false );

    bp::enum_< WarsAchievements_e>("WarsAchievements_e")
        .value("ACHIEVEMENT_WARS_TEST", ACHIEVEMENT_WARS_TEST)
        .export_values()
        ;
}
#endif

