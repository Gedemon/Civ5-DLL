// CustomMods.cpp
#include "CvGameCoreDLLPCH.h"
#include "CustomMods.h"

// must be included after all other headers
#include "LintFree.h"

CustomMods gCustomMods;

CustomMods::CustomMods() :
	m_bGLOBAL_STACKING_RULES(false),
	m_bGLOBAL_LOCAL_GENERALS(false),
	m_bGLOBAL_PROMOTION_CLASSES(false),
	m_bGLOBAL_PASSABLE_FORTS(false),
	m_bGLOBAL_PASSABLE_FORTS_ANY(false),
	m_bGLOBAL_ANYTIME_GOODY_GOLD(false),
	m_bGLOBAL_CITY_FOREST_BONUS(false),
	m_bGLOBAL_CITY_WORKING(false),
	m_bGLOBAL_ALPINE_PASSES(false),
	m_bGLOBAL_CS_GIFT_SHIPS(false),
	m_bGLOBAL_CS_UPGRADES(false),
	m_bGLOBAL_CS_RAZE_RARELY(false),
	m_bGLOBAL_CS_GIFTS(false),
	m_bGLOBAL_VENICE_KEEPS_RESOURCES(false),
	m_bGLOBAL_NO_FOLLOWUP_FROM_CITIES(false),
	m_bGLOBAL_CAPTURE_AFTER_ATTACKING(false),
	m_bGLOBAL_NO_CONQUERED_SPACESHIPS(false),
	m_bGLOBAL_ALLIES_BLOCK_BLOCKADES(false),
	m_bGLOBAL_SHORT_EMBARKED_BLOCKADES(false),
	m_bGLOBAL_GRATEFUL_SETTLERS(false),
	m_bGLOBAL_QUICK_ROUTES(false),
	m_bGLOBAL_SUBS_UNDER_ICE_IMMUNITY(false),
	m_bGLOBAL_PARATROOPS_MOVEMENT(false),
	m_bGLOBAL_PARATROOPS_AA_DAMAGE(false),
	m_bGLOBAL_NUKES_MELT_ICE(false),
	m_bGLOBAL_GREATWORK_YIELDTYPES(false),

	m_bTRAITS_CROSSES_ICE(false),
	m_bTRAITS_CITY_WORKING(false),

	m_bPOLICIES_CITY_WORKING(false),

	m_bTECHS_CITY_WORKING(false),

	m_bPROMOTIONS_VARIABLE_RECON(false),
	m_bPROMOTIONS_CROSS_MOUNTAINS(false),
	m_bPROMOTIONS_CROSS_OCEANS(false),
	m_bPROMOTIONS_CROSS_ICE(false),
	m_bPROMOTIONS_HALF_MOVE(false),
	m_bPROMOTIONS_DEEP_WATER_EMBARKATION(false),

	m_bUI_CITY_PRODUCTION(false),
	m_bUI_CITY_EXPANSION(false),

	m_bBUILDINGS_PRO_RATA_PURCHASE(false),
	m_bBUILDINGS_CITY_WORKING(false),

	m_bTRADE_WONDER_RESOURCE_ROUTES(false),

	m_bUNITS_LOCAL_WORKERS(false),
	m_bUNITS_HOVERING_LAND_ONLY_HEAL(false),
	m_bUNITS_HOVERING_COASTAL_ATTACKS(false),

	m_bDIPLOMACY_TECH_BONUSES(false),

	m_bRELIGION_NO_PREFERRENCES(false),
	m_bRELIGION_RANDOMISE(false),
	m_bRELIGION_CONVERSION_MODIFIERS(false),
	m_bRELIGION_KEEP_PROPHET_OVERFLOW(false),

	m_bPROCESS_STOCKPILE(false),

	m_bAI_SECONDARY_WORKERS(false),
	m_bAI_SECONDARY_SETTLERS(false),

	m_bEVENTS_NEW_ERA(false),
	m_bEVENTS_NW_DISCOVERY(false),
	m_bEVENTS_DIPLO_EVENTS(false),
	m_bEVENTS_MINORS(false),
	m_bEVENTS_GOODY_TECH(false),
	m_bEVENTS_AI_OVERRIDE_TECH(false),
	m_bEVENTS_GREAT_PEOPLE(false),
	m_bEVENTS_FOUND_RELIGION(false),
	m_bEVENTS_ACQUIRE_BELIEFS(false),
	m_bEVENTS_PLOT(false),
	m_bEVENTS_CITY(false),
	m_bEVENTS_CITY_BORDERS(false),
	m_bEVENTS_CITY_RAZING(false),
	m_bEVENTS_CITY_BOMBARD(false),
	m_bEVENTS_AREA_RESOURCES(false),
	m_bEVENTS_PARADROPS(false),
	m_bEVENTS_UNIT_PREKILL(false),
	m_bEVENTS_CAN_MOVE_INTO(false),
	m_bEVENTS_UNIT_UPGRADES(false),
	m_bEVENTS_WAR_AND_PEACE(false),
	m_bEVENTS_NUCLEAR_DETONATION(false),
	m_bEVENTS_REBASE(false),

	m_bEVENTS_RED_TURN(false),
	m_bEVENTS_RED_COMBAT(false),
	m_bEVENTS_RED_COMBAT_MISSION(false),
	m_bEVENTS_RED_COMBAT_ABORT(false),
	m_bEVENTS_RED_COMBAT_RESULT(false),
	m_bEVENTS_RED_COMBAT_ENDED(false),

	m_bAPI_ESPIONAGE(false),
	m_bAPI_TRADEROUTES(false),
	m_bAPI_RELIGION(false),
	m_bAPI_PLOT_BASED_DAMAGE(false),
	m_bAPI_EXTENSIONS(false),
	m_bAPI_LUA_EXTENSIONS(false),

	m_bCONFIG_AI_IN_XML(false),

	m_bBUGFIX_LUA_CHANGE_VISIBILITY_COUNT(false),
	m_bBUGFIX_MOVE_AFTER_PURCHASE(false),
	m_bBUGFIX_UNITCLASS_NOT_UNIT(false),
	m_bBUGFIX_BUILDINGCLASS_NOT_BUILDING(false),
	m_bBUGFIX_FREE_FOOD_BUILDING(false),
	m_bBUGFIX_NAVAL_FREE_UNITS(false),
	m_bBUGFIX_NAVAL_NEAREST_WATER(false),
	m_bBUGFIX_CITY_STACKING(false),
	m_bBUGFIX_BARB_CAMP_TERRAINS(false),
	m_bBUGFIX_BARB_CAMP_SPAWNING(false),
	m_bBUGFIX_REMOVE_GHOST_ROUTES(false),
	m_bBUGFIX_UNITS_AWAKE_IN_DANGER(false),
	m_bBUGFIX_WORKERS_VISIBLE_DANGER(false),
	m_bBUGFIX_INTERCEPTOR_STRENGTH(false),
	m_bBUGFIX_UNIT_POWER_CALC(false),
	m_bBUGFIX_UNIT_POWER_BONUS_VS_DOMAIN_ONLY(false),
	m_bBUGFIX_UNIT_POWER_NAVAL_CONSISTENCY(false),
	m_bBUGFIX_UNIT_PREREQ_PROJECT(false),
	m_bBUGFIX_HOVERING_PATHFINDER(false),
	m_bBUGFIX_EMBARKING_PATHFINDER(false),

	m_bInit(false)
{
}

void CustomMods::preloadCache() {
	(void) getOption("EVENTS_CIRCUMNAVIGATION");
}

void CustomMods::reloadCache() {
	m_bInit = false;

	preloadCache();
}

int CustomMods::getOption(const char* szOption, int defValue) {
	return getOption(string(szOption), defValue);
}

int CustomMods::getOption(string sOption, int defValue) {
	if (!m_bInit) {
		const char* szBadPrefix = "MOD_";

		Database::Results kResults;
		DB.SelectAll(kResults, MOD_DB_TABLE);

		while (kResults.Step()) {
			const char* szName = kResults.GetText(MOD_DB_COL_NAME);
			const int iValue = kResults.GetInt(MOD_DB_COL_VALUE);

			bool bPrefixError = (strncmp(szName, szBadPrefix, strlen(szBadPrefix)) == 0);

			CUSTOMLOG("%s: %s = %d", (bPrefixError ? "PREFIX ERROR" : "Cache"), szName, iValue);
			m_options[string(szName)] = iValue;
		}

		m_bGLOBAL_STACKING_RULES                  = (m_options[string("GLOBAL_STACKING_RULES")] == 1);
		m_bGLOBAL_LOCAL_GENERALS                  = (m_options[string("GLOBAL_LOCAL_GENERALS")] == 1);
		m_bGLOBAL_PROMOTION_CLASSES               = (m_options[string("GLOBAL_PROMOTION_CLASSES")] == 1);
		m_bGLOBAL_PASSABLE_FORTS                  = (m_options[string("GLOBAL_PASSABLE_FORTS")] == 1);
		m_bGLOBAL_PASSABLE_FORTS_ANY              = (m_options[string("GLOBAL_PASSABLE_FORTS_ANY")] == 1);
		m_bGLOBAL_ANYTIME_GOODY_GOLD              = (m_options[string("GLOBAL_ANYTIME_GOODY_GOLD")] == 1);
		m_bGLOBAL_CITY_FOREST_BONUS               = (m_options[string("GLOBAL_CITY_FOREST_BONUS")] == 1);
		m_bGLOBAL_CITY_WORKING                    = (m_options[string("GLOBAL_CITY_WORKING")] == 1);
		m_bGLOBAL_ALPINE_PASSES                   = (m_options[string("GLOBAL_ALPINE_PASSES")] == 1);
		m_bGLOBAL_CS_GIFT_SHIPS                   = (m_options[string("GLOBAL_CS_GIFT_SHIPS")] == 1);
		m_bGLOBAL_CS_UPGRADES                     = (m_options[string("GLOBAL_CS_UPGRADES")] == 1);
		m_bGLOBAL_CS_RAZE_RARELY                  = (m_options[string("GLOBAL_CS_RAZE_RARELY")] == 1);
		m_bGLOBAL_CS_GIFTS                        = (m_options[string("GLOBAL_CS_GIFTS")] == 1);
		m_bGLOBAL_VENICE_KEEPS_RESOURCES          = (m_options[string("GLOBAL_VENICE_KEEPS_RESOURCES")] == 1);
		m_bGLOBAL_NO_FOLLOWUP_FROM_CITIES         = (m_options[string("GLOBAL_NO_FOLLOWUP_FROM_CITIES")] == 1);
		m_bGLOBAL_CAPTURE_AFTER_ATTACKING         = (m_options[string("GLOBAL_CAPTURE_AFTER_ATTACKING")] == 1);
		m_bGLOBAL_NO_CONQUERED_SPACESHIPS         = (m_options[string("GLOBAL_NO_CONQUERED_SPACESHIPS")] == 1);
		m_bGLOBAL_ALLIES_BLOCK_BLOCKADES          = (m_options[string("GLOBAL_ALLIES_BLOCK_BLOCKADES")] == 1);
		m_bGLOBAL_SHORT_EMBARKED_BLOCKADES        = (m_options[string("GLOBAL_SHORT_EMBARKED_BLOCKADES")] == 1);
		m_bGLOBAL_GRATEFUL_SETTLERS               = (m_options[string("GLOBAL_GRATEFUL_SETTLERS")] == 1);
		m_bGLOBAL_QUICK_ROUTES                    = (m_options[string("GLOBAL_QUICK_ROUTES")] == 1);
		m_bGLOBAL_SUBS_UNDER_ICE_IMMUNITY         = (m_options[string("GLOBAL_SUBS_UNDER_ICE_IMMUNITY")] == 1);
		m_bGLOBAL_PARATROOPS_MOVEMENT             = (m_options[string("GLOBAL_PARATROOPS_MOVEMENT")] == 1);
		m_bGLOBAL_PARATROOPS_AA_DAMAGE            = (m_options[string("GLOBAL_PARATROOPS_AA_DAMAGE")] == 1);
		m_bGLOBAL_NUKES_MELT_ICE                  = (m_options[string("GLOBAL_NUKES_MELT_ICE")] == 1); 
		m_bGLOBAL_GREATWORK_YIELDTYPES            = (m_options[string("GLOBAL_GREATWORK_YIELDTYPES")] == 1); 

		m_bTRAITS_CROSSES_ICE                     = (m_options[string("TRAITS_CROSSES_ICE")] == 1);
		m_bTRAITS_CITY_WORKING                    = (m_options[string("TRAITS_CITY_WORKING")] == 1);

		m_bPOLICIES_CITY_WORKING                  = (m_options[string("POLICIES_CITY_WORKING")] == 1);

		m_bTECHS_CITY_WORKING                     = (m_options[string("TECHS_CITY_WORKING")] == 1);

		m_bPROMOTIONS_VARIABLE_RECON              = (m_options[string("PROMOTIONS_VARIABLE_RECON")] == 1);
		m_bPROMOTIONS_CROSS_MOUNTAINS             = (m_options[string("PROMOTIONS_CROSS_MOUNTAINS")] == 1);
		m_bPROMOTIONS_CROSS_OCEANS                = (m_options[string("PROMOTIONS_CROSS_OCEANS")] == 1);
		m_bPROMOTIONS_CROSS_ICE                   = (m_options[string("PROMOTIONS_CROSS_ICE")] == 1);
		m_bPROMOTIONS_HALF_MOVE                   = (m_options[string("PROMOTIONS_HALF_MOVE")] == 1);
		m_bPROMOTIONS_DEEP_WATER_EMBARKATION      = (m_options[string("PROMOTIONS_DEEP_WATER_EMBARKATION")] == 1);

		m_bUI_CITY_PRODUCTION                     = (m_options[string("UI_CITY_PRODUCTION")] == 1);
		m_bUI_CITY_EXPANSION                      = (m_options[string("UI_CITY_EXPANSION")] == 1);

		m_bBUILDINGS_PRO_RATA_PURCHASE            = (m_options[string("BUILDINGS_PRO_RATA_PURCHASE")] == 1);
		m_bBUILDINGS_CITY_WORKING                 = (m_options[string("BUILDINGS_CITY_WORKING")] == 1);

		m_bTRADE_WONDER_RESOURCE_ROUTES           = (m_options[string("TRADE_WONDER_RESOURCE_ROUTES")] == 1);

		m_bUNITS_LOCAL_WORKERS                    = (m_options[string("UNITS_LOCAL_WORKERS")] == 1);
		m_bUNITS_HOVERING_LAND_ONLY_HEAL          = (m_options[string("UNITS_HOVERING_LAND_ONLY_HEAL")] == 1);
		m_bUNITS_HOVERING_COASTAL_ATTACKS         = (m_options[string("UNITS_HOVERING_COASTAL_ATTACKS")] == 1);

		m_bDIPLOMACY_TECH_BONUSES                 = (m_options[string("DIPLOMACY_TECH_BONUSES")] == 1);

		m_bRELIGION_NO_PREFERRENCES               = (m_options[string("RELIGION_NO_PREFERRENCES")] == 1);
		m_bRELIGION_RANDOMISE                     = (m_options[string("RELIGION_RANDOMISE")] == 1);
		m_bRELIGION_CONVERSION_MODIFIERS          = (m_options[string("RELIGION_CONVERSION_MODIFIERS")] == 1);
		m_bRELIGION_KEEP_PROPHET_OVERFLOW         = (m_options[string("RELIGION_KEEP_PROPHET_OVERFLOW")] == 1);

		m_bPROCESS_STOCKPILE                      = (m_options[string("PROCESS_STOCKPILE")] == 1);

		m_bAI_SECONDARY_WORKERS                   = (m_options[string("AI_SECONDARY_WORKERS")] == 1);
		m_bAI_SECONDARY_SETTLERS                  = (m_options[string("AI_SECONDARY_SETTLERS")] == 1);

		m_bEVENTS_CIRCUMNAVIGATION                = (m_options[string("EVENTS_CIRCUMNAVIGATION")] == 1);
		m_bEVENTS_NEW_ERA                         = (m_options[string("EVENTS_NEW_ERA")] == 1);
		m_bEVENTS_NW_DISCOVERY                    = (m_options[string("EVENTS_NW_DISCOVERY")] == 1);
		m_bEVENTS_DIPLO_EVENTS                    = (m_options[string("EVENTS_DIPLO_EVENTS")] == 1);
		m_bEVENTS_MINORS                          = (m_options[string("EVENTS_MINORS")] == 1);
		m_bEVENTS_GOODY_TECH                      = (m_options[string("EVENTS_GOODY_TECH")] == 1);
		m_bEVENTS_AI_OVERRIDE_TECH                = (m_options[string("EVENTS_AI_OVERRIDE_TECH")] == 1);
		m_bEVENTS_GREAT_PEOPLE                    = (m_options[string("EVENTS_GREAT_PEOPLE")] == 1);
		m_bEVENTS_FOUND_RELIGION                  = (m_options[string("EVENTS_FOUND_RELIGION")] == 1);
		m_bEVENTS_ACQUIRE_BELIEFS                 = (m_options[string("EVENTS_ACQUIRE_BELIEFS")] == 1);
		m_bEVENTS_PLOT                            = (m_options[string("EVENTS_PLOT")] == 1);
		m_bEVENTS_CITY                            = (m_options[string("EVENTS_CITY")] == 1);
		m_bEVENTS_CITY_BORDERS                    = (m_options[string("EVENTS_CITY_BORDERS")] == 1);
		m_bEVENTS_CITY_RAZING                     = (m_options[string("EVENTS_CITY_RAZING")] == 1);
		m_bEVENTS_CITY_BOMBARD                    = (m_options[string("EVENTS_CITY_BOMBARD")] == 1);
		m_bEVENTS_AREA_RESOURCES                  = (m_options[string("EVENTS_AREA_RESOURCES")] == 1);
		m_bEVENTS_PARADROPS                       = (m_options[string("EVENTS_PARADROPS")] == 1);
		m_bEVENTS_UNIT_PREKILL                    = (m_options[string("EVENTS_UNIT_PREKILL")] == 1);
		m_bEVENTS_CAN_MOVE_INTO                   = (m_options[string("EVENTS_CAN_MOVE_INTO")] == 1);
		m_bEVENTS_UNIT_UPGRADES                   = (m_options[string("EVENTS_UNIT_UPGRADES")] == 1);
		m_bEVENTS_WAR_AND_PEACE                   = (m_options[string("EVENTS_WAR_AND_PEACE")] == 1);
		m_bEVENTS_NUCLEAR_DETONATION              = (m_options[string("EVENTS_NUCLEAR_DETONATION")] == 1);
		m_bEVENTS_REBASE                          = (m_options[string("EVENTS_REBASE")] == 1);

		m_bEVENTS_RED_TURN                        = (m_options[string("EVENTS_RED_TURN")] == 1);
		m_bEVENTS_RED_COMBAT                      = (m_options[string("EVENTS_RED_COMBAT")] == 1);
		m_bEVENTS_RED_COMBAT_MISSION              = (m_options[string("EVENTS_RED_COMBAT_MISSION")] == 1);
		m_bEVENTS_RED_COMBAT_ABORT                = (m_options[string("EVENTS_RED_COMBAT_ABORT")] == 1);
		m_bEVENTS_RED_COMBAT_RESULT               = (m_options[string("EVENTS_RED_COMBAT_RESULT")] == 1);
		m_bEVENTS_RED_COMBAT_ENDED                = (m_options[string("EVENTS_RED_COMBAT_ENDED")] == 1);

		m_bAPI_ESPIONAGE                          = (m_options[string("API_ESPIONAGE")] == 1);
		m_bAPI_TRADEROUTES                        = (m_options[string("API_TRADEROUTES")] == 1);
		m_bAPI_RELIGION                           = (m_options[string("API_RELIGION")] == 1);
		m_bAPI_PLOT_BASED_DAMAGE                  = (m_options[string("API_PLOT_BASED_DAMAGE")] == 1);
		m_bAPI_EXTENSIONS                         = (m_options[string("API_EXTENSIONS")] == 1);
		m_bAPI_LUA_EXTENSIONS                     = (m_options[string("API_LUA_EXTENSIONS")] == 1);

		m_bCONFIG_AI_IN_XML                       = (m_options[string("CONFIG_AI_IN_XML")] == 1);

		m_bBUGFIX_LUA_CHANGE_VISIBILITY_COUNT     = (m_options[string("BUGFIX_LUA_CHANGE_VISIBILITY_COUNT")] == 1);
		m_bBUGFIX_MOVE_AFTER_PURCHASE             = (m_options[string("BUGFIX_MOVE_AFTER_PURCHASE")] == 1);
		m_bBUGFIX_UNITCLASS_NOT_UNIT              = (m_options[string("BUGFIX_UNITCLASS_NOT_UNIT")] == 1);
		m_bBUGFIX_BUILDINGCLASS_NOT_BUILDING      = (m_options[string("BUGFIX_BUILDINGCLASS_NOT_BUILDING")] == 1);
		m_bBUGFIX_FREE_FOOD_BUILDING              = (m_options[string("BUGFIX_FREE_FOOD_BUILDING")] == 1);
		m_bBUGFIX_NAVAL_FREE_UNITS                = (m_options[string("BUGFIX_NAVAL_FREE_UNITS")] == 1);
		m_bBUGFIX_NAVAL_NEAREST_WATER             = (m_options[string("BUGFIX_NAVAL_NEAREST_WATER")] == 1);
		m_bBUGFIX_CITY_STACKING                   = (m_options[string("BUGFIX_CITY_STACKING")] == 1);
		m_bBUGFIX_BARB_CAMP_TERRAINS              = (m_options[string("BUGFIX_BARB_CAMP_TERRAINS")] == 1);
		m_bBUGFIX_BARB_CAMP_SPAWNING              = (m_options[string("BUGFIX_BARB_CAMP_SPAWNING")] == 1);
		m_bBUGFIX_REMOVE_GHOST_ROUTES             = (m_options[string("BUGFIX_REMOVE_GHOST_ROUTES")] == 1);
		m_bBUGFIX_UNITS_AWAKE_IN_DANGER           = (m_options[string("BUGFIX_UNITS_AWAKE_IN_DANGER")] == 1);
		m_bBUGFIX_WORKERS_VISIBLE_DANGER          = (m_options[string("BUGFIX_WORKERS_VISIBLE_DANGER")] == 1);
		m_bBUGFIX_INTERCEPTOR_STRENGTH            = (m_options[string("BUGFIX_INTERCEPTOR_STRENGTH")] == 1);
		m_bBUGFIX_UNIT_POWER_CALC                 = (m_options[string("BUGFIX_UNIT_POWER_CALC")] == 1);
		m_bBUGFIX_UNIT_POWER_BONUS_VS_DOMAIN_ONLY = (m_options[string("BUGFIX_UNIT_POWER_BONUS_VS_DOMAIN_ONLY")] == 1);
		m_bBUGFIX_UNIT_POWER_NAVAL_CONSISTENCY    = (m_options[string("BUGFIX_UNIT_POWER_NAVAL_CONSISTENCY")] == 1);
		m_bBUGFIX_UNIT_PREREQ_PROJECT             = (m_options[string("BUGFIX_UNIT_PREREQ_PROJECT")] == 1);
		m_bBUGFIX_HOVERING_PATHFINDER             = (m_options[string("BUGFIX_HOVERING_PATHFINDER")] == 1);
		m_bBUGFIX_EMBARKING_PATHFINDER            = (m_options[string("BUGFIX_EMBARKING_PATHFINDER")] == 1);

		m_bInit = true;
	}

	if (m_options.find(sOption) == m_options.end()) {
		return defValue;
	}

	return m_options[sOption];
}

int CustomMods::getCivOption(const char* szCiv, const char* szName, int defValue) {
	return getOption(string(szCiv) + "_" + szName, getOption(szName, defValue));
}
