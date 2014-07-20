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
#include "unit_baseanimstate.h"
#include "srcpy.h"
#include "tier0/memdbgon.h"
#include "_entities_enumerations_pypp.hpp"

namespace bp = boost::python;

void _entities_register_enumerations(){

    bp::enum_< Disposition_t>("Disposition_t")
        .value("D_ER", D_ER)
        .value("D_HT", D_HT)
        .value("D_FR", D_FR)
        .value("D_LI", D_LI)
        .value("D_NU", D_NU)
        .value("D_ERROR", D_ERROR)
        .value("D_HATE", D_HATE)
        .value("D_FEAR", D_FEAR)
        .value("D_LIKE", D_LIKE)
        .value("D_NEUTRAL", D_NEUTRAL)
        .export_values()
        ;

    bp::enum_< WeaponSound_t>("WeaponSound")
        .value("EMPTY", EMPTY)
        .value("SINGLE", SINGLE)
        .value("SINGLE_NPC", SINGLE_NPC)
        .value("WPN_DOUBLE", WPN_DOUBLE)
        .value("DOUBLE_NPC", DOUBLE_NPC)
        .value("BURST", BURST)
        .value("RELOAD", RELOAD)
        .value("RELOAD_NPC", RELOAD_NPC)
        .value("MELEE_MISS", MELEE_MISS)
        .value("MELEE_HIT", MELEE_HIT)
        .value("MELEE_HIT_WORLD", MELEE_HIT_WORLD)
        .value("SPECIAL1", SPECIAL1)
        .value("SPECIAL2", SPECIAL2)
        .value("SPECIAL3", SPECIAL3)
        .value("TAUNT", TAUNT)
        .value("FAST_RELOAD", FAST_RELOAD)
        .value("NUM_SHOOT_SOUND_TYPES", NUM_SHOOT_SOUND_TYPES)
        .export_values()
        ;

    bp::enum_< entity_list_ids_t>("entity_list_ids_t")
        .value("ENTITY_LIST_INTERPOLATE", ENTITY_LIST_INTERPOLATE)
        .value("ENTITY_LIST_TELEPORT", ENTITY_LIST_TELEPORT)
        .value("ENTITY_LIST_PRERENDER", ENTITY_LIST_PRERENDER)
        .value("ENTITY_LIST_SIMULATE", ENTITY_LIST_SIMULATE)
        .value("ENTITY_LIST_DELETE", ENTITY_LIST_DELETE)
        .value("NUM_ENTITY_LISTS", NUM_ENTITY_LISTS)
        .export_values()
        ;

}

