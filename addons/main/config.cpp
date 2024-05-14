#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = CSTRING(component);
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"weapons_f_vietnam_04_c"};
    VERSION_CONFIG;
  };
};

#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"