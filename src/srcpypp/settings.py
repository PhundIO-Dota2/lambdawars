import os

SPECIFIC_MODULE = None
APPEND_FILE_ONLY = False

# Alien Swarm code base? 
ASW_CODE_BASE = True

# Project project paths (see vxprojinfo.py for the available info)
vcxprojserver = '../game/server/wars_server.vcxproj'
vcxprojclient = '../game/client/wars_client.vcxproj'

# Automatically add all python module files to the project files
# Backup before using!
autoupdatevxproj = True
addpythonfiles = True

# Paths
mod_client_path = os.path.normpath('../game/client/python/modules/')
mod_server_path = os.path.normpath('../game/server/python/modules/')
mod_shared_path = os.path.normpath('../game/shared/python/modules/')

client_path = os.path.normpath('../game/client/python/modules/autogenerated/')
server_path = os.path.normpath('../game/server/python/modules/autogenerated/')
shared_path = os.path.normpath('../game/shared/python/modules/autogenerated/')

# Modules
modules_asw = [
    # Base
	('srcbuiltins', 'SrcBuiltins'),
    ('srcbase', 'SrcBase'),
    ('_vmath', 'VMath'),
    ('_entities', 'Entities'),
    ('_entities_misc', 'EntitiesMisc'),
    ('_gameinterface', 'GameInterface'),
    ('_utils', 'Utils'),
    ('_physics', 'Physics'),
    ('_sound', 'Sound'),
    ('_particles', 'Particles'),
    ('materials', 'Materials'),
    ('_animation', 'Animation'),
    ('_te', 'TE'),
    ('_fow', 'FOW'),
    
    # # Client
    ('isteam', 'ISteam'),
    ('_input', 'Input'),
    ('_vgui', 'VGUI'),
    ('_vguicontrols', 'VGUIControls'),
    #('_awesomium', 'Awesomium'),
    ('_cef', 'CEF'),
    
    # # Game
    ('_gamerules', 'GameRules'),
    ('unit_helper', 'UnitHelper'),
    
    # # Misc
    ('_navmesh', 'NavMesh'),
    ('_ndebugoverlay', 'NDebugOverlay'),
    ('vprof', 'VProf'),
    ('_srctests', '_SrcTests'),
    ('matchmaking', 'MatchMaking'),
]
#modules_asw = []

# Base files (in case you want to make use automatically updating the vcxproj)
pythonfiles_shared = [
    '../shared/python/src_python.cpp',
    '../shared/python/src_python.h',
    '../shared/python/src_python_animation.cpp',
    '../shared/python/src_python_animation.h',
    '../shared/python/src_python_base.cpp',
    '../shared/python/src_python_base.h',
    '../shared/python/src_python_class_shared.cpp',
    '../shared/python/src_python_class_shared.h',
    '../shared/python/src_python_converters.h',
    '../shared/python/src_python_converters_ents.h',
    '../shared/python/src_python_entities.cpp',
    '../shared/python/src_python_entities.h',
    '../shared/python/src_python_gameinterface.cpp',
    '../shared/python/src_python_gameinterface.h',
    '../shared/python/src_python_gameinterface_converters.h',
    '../shared/python/src_python_gamerules.cpp',
    '../shared/python/src_python_gamerules.h',
    '../shared/python/src_python_matchmaking.cpp',
    '../shared/python/src_python_matchmaking.h',
    '../shared/python/src_python_materials.cpp',
    '../shared/python/src_python_materials.h',
    '../shared/python/src_python_navmesh.cpp',
    '../shared/python/src_python_navmesh.h',
    '../shared/python/src_python_networkvar.cpp',
    '../shared/python/src_python_networkvar.h',
    '../shared/python/src_python_particles.cpp',
    '../shared/python/src_python_particles.h',
    '../shared/python/src_python_physics.cpp',
    '../shared/python/src_python_physics.h',
    '../shared/python/src_python_scclasses.cpp',
    '../shared/python/src_python_sound.cpp',
    '../shared/python/src_python_sound.h',
    '../shared/python/src_python_te.cpp',
    '../shared/python/src_python_te.h',
    '../shared/python/src_python_tests.cpp',
    '../shared/python/src_python_tests.h',
    '../shared/python/src_python_usermessage.cpp',
    '../shared/python/src_python_usermessage.h',
    '../shared/python/src_python_util.cpp',
    '../shared/python/src_python_util.h',
    '../shared/python/srcpy_srcbuiltins.cpp',
    '../shared/python/srcpy_srcbuiltins.h',
]

pythonfiles_client = [
    'python/src_python_client_class.cpp',
    'python/src_python_client_class.h',
    'python/src_python_hud.cpp',
    'python/src_python_hud.h',
    'python/src_python_vgui.cpp',
    'python/src_python_vgui.h',
    'python/SurfaceBuffer.cpp',
    'python/SurfaceBuffer.h',
]

pythonfiles_server = [
    'python/src_python_server_class.cpp',
    'python/src_python_server_class.h',
]

