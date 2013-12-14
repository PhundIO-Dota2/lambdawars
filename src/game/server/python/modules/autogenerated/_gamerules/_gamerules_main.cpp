// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"

#include "gamerules.h"

#include "multiplay_gamerules.h"

#include "singleplay_gamerules.h"

#include "teamplay_gamerules.h"

#include "srcpy_gamerules.h"

#include "ammodef.h"

#include "items.h"

#include "hl2wars_gamerules.h"

#include "srcpy.h"

#include "tier0/memdbgon.h"

#include "../../game/server/python/modules/autogenerated/_gamerules/CAmmoDef_pypp.hpp"

#include "../../game/server/python/modules/autogenerated/_gamerules/CGameRules_pypp.hpp"

#include "../../game/server/python/modules/autogenerated/_gamerules/CHL2WarsGameRules_pypp.hpp"

#include "../../game/server/python/modules/autogenerated/_gamerules/CMultiplayRules_pypp.hpp"

#include "../../game/server/python/modules/autogenerated/_gamerules/CSingleplayRules_pypp.hpp"

#include "../../game/server/python/modules/autogenerated/_gamerules/CTeamplayRules_pypp.hpp"

#include "../../game/server/python/modules/autogenerated/_gamerules/_gamerules_free_functions_pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_gamerules){
    bp::docstring_options doc_options( true, true, false );

    register_CAmmoDef_class();

    register_CGameRules_class();

    register_CMultiplayRules_class();

    register_CTeamplayRules_class();

    register_CHL2WarsGameRules_class();

    register_CSingleplayRules_class();

    _gamerules_register_free_functions();
}


