// CustomMods.h
#pragma once

#ifndef CUSTOM_MODS_H
#define CUSTOM_MODS_H

/****************************************************************************
 ****************************************************************************
 *****                                                                  *****
 *****                           IMPORTANT!!!                           *****
 *****                                                                  *****
 *****                        Modders take note!                        *****
 *****                                                                  *****
 ***** See the comment in CvDllContext.cpp regarding the DLL GUID value *****
 *****                                                                  *****
 ****************************************************************************
 ****************************************************************************/
#define MOD_DLL_GUID {0xc8433b33, 0xc85a, 0x4ecb, { 0x96, 0xa2, 0x8a, 0x14, 0x88, 0x3d, 0x1b, 0x69 }} // {C8433B33-C85A-4ecb-96A2-8A14883D1B69}
#define MOD_DLL_NAME "Pick'N'Mix GandK DLL"
#define MOD_DLL_VERSION "17"
#define MOD_DLL_BUILD_NAME ""


// Comment out this line to include all the achievements code (which don't work in modded games, so we don't need the code!)
#define NO_ACHIEVEMENTS

// Comment this line out to switch off all custom mod logging
#define CUSTOMLOGDEBUG "CustomMods.log"

// Uncomment this line for the WWII specific version of the DLL
// #define WWII_CUSTOM_BUILD
#if defined(WWII_CUSTOM_BUILD)
#undef MOD_DLL_BUILD_NAME
#define MOD_DLL_BUILD_NAME " - WWII custom"
#else


// Comment these lines out to remove the associated code from the DLL,
// Alternatively, set the associated entries in the CustomModOptions table to disable(0) or enable(1) at load-time

// Great Generals and Admirals gained from combat experience spawn in the war-zone and not in a distant city
#define MOD_GLOBAL_LOCAL_GENERALS                   gCustomMods.isGLOBAL_LOCAL_GENERALS()
// Permits units to have promotion trees different from their assigned CombatClass
#define MOD_GLOBAL_PROMOTION_CLASSES                gCustomMods.isGLOBAL_PROMOTION_CLASSES()
// Permits ships to enter coastal forts/citadels in friendly lands
#define MOD_GLOBAL_PASSABLE_FORTS                   gCustomMods.isGLOBAL_PASSABLE_FORTS()
// Permits ships to enter any forts/citadels (based on code supplied by 12monkeys)
#define MOD_GLOBAL_PASSABLE_FORTS_ANY               (MOD_GLOBAL_PASSABLE_FORTS && gCustomMods.isGLOBAL_PASSABLE_FORTS_ANY())
// Give initial production boost for cities founded on forests, as if the forest had been chopped down by a worker
#define MOD_GLOBAL_CITY_FOREST_BONUS                gCustomMods.isGLOBAL_CITY_FOREST_BONUS()
// Permit cities to work tiles up to MAXIMUM_ACQUIRE_PLOT_DISTANCE - WARNING! Cities take 2.5 times as much memory/file space
#define MOD_GLOBAL_CITY_WORKING                     gCustomMods.isGLOBAL_CITY_WORKING()
// Mountain plots return their terrain as TERRAIN_MOUNTAIN and any land unit may enter a mountain that has a road/rail route
#define MOD_GLOBAL_ALPINE_PASSES                    gCustomMods.isGLOBAL_ALPINE_PASSES()
// Permits City States to gift ships
#define MOD_GLOBAL_CS_GIFT_SHIPS                    gCustomMods.isGLOBAL_CS_GIFT_SHIPS()
// Permits units to upgrade in allied militaristic City States
#define MOD_GLOBAL_CS_UPGRADES                      gCustomMods.isGLOBAL_CS_UPGRADES()
// City States will only raze captured cities if they are very unhappy
#define MOD_GLOBAL_CS_RAZE_RARELY                   gCustomMods.isGLOBAL_CS_RAZE_RARELY()
// City States give different gifts depending on their type (cultural, religious, maritime, etc)
#define MOD_GLOBAL_CS_GIFTS                         gCustomMods.isGLOBAL_CS_GIFTS()
// Remove assembled spaceship parts from conquered capitals
#define MOD_GLOBAL_NO_CONQUERED_SPACESHIPS          gCustomMods.isGLOBAL_NO_CONQUERED_SPACESHIPS()
// Adjacent allied ships block blockades by enemy ships 2 or more tiles away
#define MOD_GLOBAL_ALLIES_BLOCK_BLOCKADES           gCustomMods.isGLOBAL_ALLIES_BLOCK_BLOCKADES()
// Embarked combat units only blockade adjacent tiles
#define MOD_GLOBAL_SHORT_EMBARKED_BLOCKADES         gCustomMods.isGLOBAL_SHORT_EMBARKED_BLOCKADES()
// Other player's settlers captured from Barbarians will sometimes remain as settlers
#define MOD_GLOBAL_GRATEFUL_SETTLERS                gCustomMods.isGLOBAL_GRATEFUL_SETTLERS()
// Route To will only build roads, or upgrade road to rail, for human players
#define MOD_GLOBAL_QUICK_ROUTES                     gCustomMods.isGLOBAL_QUICK_ROUTES()
// Subs under ice are immune to all attacks except from other subs
#define MOD_GLOBAL_SUBS_UNDER_ICE_IMMUNITY          gCustomMods.isGLOBAL_SUBS_UNDER_ICE_IMMUNITY()
// Paratroops can move/attack after the drop, if the drop is not at max range
#define MOD_GLOBAL_PARATROOPS_MOVEMENT              gCustomMods.isGLOBAL_PARATROOPS_MOVEMENT()
// Paratroops take AA damage from hostile units
#define MOD_GLOBAL_PARATROOPS_AA_DAMAGE             gCustomMods.isGLOBAL_PARATROOPS_AA_DAMAGE()
// Nukes will melt ice
#define MOD_GLOBAL_NUKES_MELT_ICE                   gCustomMods.isGLOBAL_NUKES_MELT_ICE() 

// Permits land units to cross ice - AFFECTS SAVE GAME DATA FORMAT
#define MOD_TRAITS_CROSSES_ICE                      gCustomMods.isTRAITS_CROSSES_ICE()
// Permits cities to work more rings - AFFECTS SAVE GAME DATA FORMAT
#define MOD_TRAITS_CITY_WORKING                     gCustomMods.isTRAITS_CITY_WORKING()

// Permits cities to work more rings - AFFECTS SAVE GAME DATA FORMAT
#define MOD_POLICIES_CITY_WORKING                   gCustomMods.isPOLICIES_CITY_WORKING()

// Permits cities to work more rings - AFFECTS SAVE GAME DATA FORMAT
#define MOD_TECHS_CITY_WORKING                      gCustomMods.isTECHS_CITY_WORKING()

// Permits variable recon ranges by creating extra recon range promotions (like extra sight range)
#define MOD_PROMOTIONS_VARIABLE_RECON               gCustomMods.isPROMOTIONS_VARIABLE_RECON()
// Permits land units to cross mountains (like the Carthage trait)
#define MOD_PROMOTIONS_CROSS_MOUNTAINS              gCustomMods.isPROMOTIONS_CROSS_MOUNTAINS()
// Permits coastal units to cross oceans
#define MOD_PROMOTIONS_CROSS_OCEANS                 gCustomMods.isPROMOTIONS_CROSS_OCEANS()
// Permits land units to cross ice
#define MOD_PROMOTIONS_CROSS_ICE                    gCustomMods.isPROMOTIONS_CROSS_ICE()
// Adds a HalfMove feature to the UnitPromotions_Terrains and UnitPromotions_Features tables
#define MOD_PROMOTIONS_HALF_MOVE                    gCustomMods.isPROMOTIONS_HALF_MOVE()
// Permits Deep Water (Ocean) embarkation for hovering units - AFFECTS SAVE GAME DATA FORMAT
#define MOD_PROMOTIONS_DEEP_WATER_EMBARKATION       gCustomMods.isPROMOTIONS_DEEP_WATER_EMBARKATION()

// Permit the focus (gold/production/culture) of puppet cities to be set (but not what is being built or how specialists are allocated)
#define MOD_UI_CITY_PRODUCTION                      gCustomMods.isUI_CITY_PRODUCTION()
// Permit human players to choose they own city tiles due to cultural expansion
#define MOD_UI_CITY_EXPANSION                       gCustomMods.isUI_CITY_EXPANSION()

// Purchase of buildings in cities allows for any current production
#define MOD_BUILDINGS_PRO_RATA_PURCHASE             gCustomMods.isBUILDINGS_PRO_RATA_PURCHASE()
// Permits cities to work more rings - AFFECTS SAVE GAME DATA FORMAT
#define MOD_BUILDINGS_CITY_WORKING                  gCustomMods.isBUILDINGS_CITY_WORKING()

// Restricts worker suggestions to local tiles
#define MOD_UNITS_LOCAL_WORKERS                     gCustomMods.isUNITS_LOCAL_WORKERS()
// Hovering unit can only heal over land
#define MOD_UNITS_HOVERING_LAND_ONLY_HEAL           gCustomMods.isUNITS_HOVERING_LAND_ONLY_HEAL()
// Permits hovering units to attack coastal shipping
#define MOD_UNITS_HOVERING_COASTAL_ATTACKS          gCustomMods.isUNITS_HOVERING_COASTAL_ATTACKS()

// Removes religion preference
#define MOD_RELIGION_NO_PREFERRENCES                gCustomMods.isRELIGION_NO_PREFERRENCES()
// Randomises religion choice (if preferred religion unavailable)
#define MOD_RELIGION_RANDOMISE                      gCustomMods.isRELIGION_RANDOMISE()
// Adds ConversionModifier and GlobalConversionModifier (in the same vein as espionage modifiers) to buildings - AFFECTS SAVE GAME DATA FORMAT
#define MOD_RELIGION_CONVERSION_MODIFIERS           gCustomMods.isRELIGION_CONVERSION_MODIFIERS()

// Event sent when a team circumnavigates the globe -->
//   GameEvents.CircumnavigatedGlobe.Add(function(eTeam) end)
#define MOD_EVENTS_CIRCUMNAVIGATION                 gCustomMods.isEVENTS_CIRCUMNAVIGATION()

// Event sent when the player enters a new era, see also NewEraPopup.lua and BUTTONPOPUP_NEW_ERA
//   GameEvents.TeamSetEra.Add(function(eTeam, eEra, bFirst) end)
#define MOD_EVENTS_NEW_ERA                          gCustomMods.isEVENTS_NEW_ERA()

// Event sent when the team discovers a new Natural Wonder
//   GameEvents.NaturalWonderDiscovered.Add(function(iTeam, iFeature, iX, iY, bFirst) end)
#define MOD_EVENTS_NW_DISCOVERY                     gCustomMods.isEVENTS_NW_DISCOVERY()

// Event sent during Game.DoFromUIDiploEvent, see also DiscussionDialog.lua
//   GameEvents.UiDiploEvent.Add(function(eEvent, eAIPlayer, iArg1, iArg2) end)
#define MOD_EVENTS_DIPLO_EVENTS                     gCustomMods.isEVENTS_DIPLO_EVENTS()

// Events sent on status change with City States
//   GameEvents.MinorFriendsChanged.Add(function(iMinor, iMajor, bIsFriend, iOldFriendship, iNewFriendship) end)
//   GameEvents.MinorAlliesChanged.Add(function(iMinor, iMajor, bIsAlly, iOldFriendship, iNewFriendship) end)
#define MOD_EVENTS_MINORS                           gCustomMods.isEVENTS_MINORS()

// Events sent if a Goody Hut is giving a tech
//   GameEvents.GoodyHutCanResearch.Add(function(iPlayer, eTech) return true end)
//   GameEvents.GoodyHutTechResearched.Add(function(iPlayer, eTech) end)
#define MOD_EVENTS_GOODY_TECH                       gCustomMods.isEVENTS_GOODY_TECH()

// Events sent by Great People actions
//   GameEvents.GreatPersonExpended.Add(function(iPlayer, iUnit, iUnitType, iX, iY) end)
#define MOD_EVENTS_GREAT_PEOPLE                     gCustomMods.isEVENTS_GREAT_PEOPLE()

// Events sent when a player is about to found a religion
//   GameEvents.PlayerCanFoundPantheon(function(iPlayer) return true end)
//   GameEvents.PlayerCanFoundReligion(function(iPlayer, iCity) return true end)
//   GameEvents.GetReligionToFound.Add(function(iPlayer, iPreferredReligion, bIsAlreadyFounded) return iPreferredReligion end)
//   GameEvents.PantheonFounded.Add(function(iPlayer, iCapitalCity, iReligion, iBelief1) end)
//   GameEvents.ReligionFounded.Add(function(iPlayer, iHolyCity, iReligion, iBelief1, iBelief2, iBelief3, iBelief4, iBelief5) end)
//   GameEvents.ReligionEnhanced.Add(function(iPlayer, iReligion, iBelief1, iBelief2) end)
#define MOD_EVENTS_FOUND_RELIGION                   gCustomMods.isEVENTS_FOUND_RELIGION()

// Events sent when choosing beliefs
//   GameEvents.PlayerCanHaveBelief.Add(function(iPlayer, iBelief) return true end)
//   GameEvents.ReligionCanHaveBelief.Add(function(iReligion, iBelief) return true end)
#define MOD_EVENTS_ACQUIRE_BELIEFS                  gCustomMods.isEVENTS_ACQUIRE_BELIEFS()

// Event sent to ascertain if a unit can start a paradrop from this tile
// This is a "TestAny" event so is currently fairly unique!!!
//   GameEvents.CanParadropFrom.Add(function(iPlayer, iUnit, iPlotX, iPlotY) return false end)
// This is a standard "TestAll" event
//   GameEvents.CannotParadropFrom.Add(function(iPlayer, iUnit, iPlotX, iPlotY) return false end)
// This is a standard "Hook" event
//   GameEvents.ParadropAt.Add(function(iPlayer, iUnit, iFromX, iFromY, iToX, iToY) end)
#define MOD_EVENTS_PARADROPS                        gCustomMods.isEVENTS_PARADROPS()

// Event sent to ascertain if a unit can move into a given plot - VERY, VERY CPU INTENSIVE!!!
//   GameEvents.CanMoveInto.Add(function(iPlayer, iUnit, iPlotX, iPlotY, bAttack, bDeclareWar) return true end)
#define MOD_EVENTS_CAN_MOVE_INTO                    gCustomMods.isEVENTS_CAN_MOVE_INTO()

// Event sent when a nuke is fired
//   GameEvents.NuclearDetonation.Add(function(iPlayer, iX, iY, bWar, bBystanders) end)
#define MOD_EVENTS_NUCLEAR_DETONATION               gCustomMods.isEVENTS_NUCLEAR_DETONATION()
#endif

// Events sent about war and peace
//   GameEvents.IsAbleToDeclareWar.Add(function(iPlayer, iAgainstTeam) return true end)
//   GameEvents.DeclareWar.Add(function(iPlayer, iAgainstTeam) end)
//   GameEvents.IsAbleToMakePeace.Add(function(iPlayer, iAgainstTeam) return true end)
//   GameEvents.MakePeace.Add(function(iPlayer, iAgainstTeam) end)
#define MOD_EVENTS_WAR_AND_PEACE                    gCustomMods.isEVENTS_WAR_AND_PEACE()

// Events sent after a city produces/buys something
//   GameEvents.CityTrained.Add(function(iPlayer, iCity, iUnit, bGold, bFaith) end)
//   GameEvents.CityConstructed.Add(function(iPlayer, iCity, iBuilding, bGold, bFaith) end)
//   GameEvents.CityCreated.Add(function(iPlayer, iCity, iProject, bGold, bFaith) end)
//   GameEvents.CityBoughtPlot.Add(function(iPlayer, iCity, iPlotX, iPlotY, bGold, bCulture) end)
//   GameEvents.CitySoldBuilding.Add(function(iPlayer, iCity, iBuilding) end)
#define MOD_EVENTS_CITY                             gCustomMods.isEVENTS_CITY()

// Events sent as units are promoted/upgraded
//   GameEvents.CanHavePromotion.Add(function(iPlayer, iUnit, iPromotionType) return true end)
//   GameEvents.UnitPromoted.Add(function(iPlayer, iUnit, iPromotionType) end)
//   GameEvents.CanHaveAnyUpgrade.Add(function(iPlayer, iUnit) return true end)
//   GameEvents.CanHaveUpgrade.Add(function(iPlayer, iUnit, iUnitClassType, iUnitType) return true end)
//   GameEvents.UnitUpgraded.Add(function(iPlayer, iOldUnit, iNewUnit, bGoodyHut) end)
#define MOD_EVENTS_UNIT_UPGRADES                    gCustomMods.isEVENTS_UNIT_UPGRADES()

// Event sent to ascertain if a unit can rebase to a specific plot (either a city or a carrier)
// This is a "TestAny" event so is currently fairly unique!!!
//   GameEvents.CanLoadAt(function(iPlayer, iUnit, iPlotX, iPlotY) return false end)
// This is a "TestAny" event so is currently fairly unique!!!
//   GameEvents.CanRebaseInCity.Add(function(iPlayer, iUnit, iPlotX, iPlotY) return false end)
// This is a "TestAny" event so is currently fairly unique!!!
//   GameEvents.CanRebaseTo.Add(function(iPlayer, iUnit, iPlotX, iPlotY, bIsCity) return false end)
// This is a standard "Hook" event
//   GameEvents.RebaseTo.Add(function(iPlayer, iUnit, iPlotX, iPlotY) end)
#define MOD_EVENTS_REBASE                           gCustomMods.isEVENTS_REBASE()

// Events generated by the RED (by Gedemon) dll mod code
//   Turn   --> PlayerEndTurnInitiated, PlayerEndTurnCompleted, TurnComplete
//   Combat --> PushingMissionTo, MustAbortAttack, CombatResult, CombatEnded
#define MOD_EVENTS_RED_TURN                         gCustomMods.isEVENTS_RED_TURN()
#define MOD_EVENTS_RED_COMBAT                       gCustomMods.isEVENTS_RED_COMBAT()
#define MOD_EVENTS_RED_COMBAT_MISSION               (MOD_EVENTS_RED_COMBAT && gCustomMods.isEVENTS_RED_COMBAT_MISSION())
#define MOD_EVENTS_RED_COMBAT_ABORT                 (MOD_EVENTS_RED_COMBAT && gCustomMods.isEVENTS_RED_COMBAT_ABORT())
#define MOD_EVENTS_RED_COMBAT_RESULT                (MOD_EVENTS_RED_COMBAT && gCustomMods.isEVENTS_RED_COMBAT_RESULT())
#define MOD_EVENTS_RED_COMBAT_ENDED                 (MOD_EVENTS_RED_COMBAT && gCustomMods.isEVENTS_RED_COMBAT_ENDED())

#if defined(WWII_CUSTOM_BUILD)
#undef MOD_EVENTS_RED_COMBAT_MISSION
#undef MOD_EVENTS_RED_COMBAT_ABORT
#undef MOD_EVENTS_RED_COMBAT_RESULT
#endif

// Enables the Espionage API - AFFECTS SAVE GAME DATA FORMAT
#define MOD_API_ESPIONAGE                           gCustomMods.isAPI_ESPIONAGE()
// Enables the Religion API
#define MOD_API_RELIGION                            gCustomMods.isAPI_RELIGION()
// Enabes the Plot Based Damage API (replaces fixed damage from mountains)
#define MOD_API_PLOT_BASED_DAMAGE                   gCustomMods.isAPI_PLOT_BASED_DAMAGE()
// Enables the Extensions API
#define MOD_API_EXTENSIONS                          gCustomMods.isAPI_EXTENSIONS()
// Enables the LUA Extensions API
#define MOD_API_LUA_EXTENSIONS                      gCustomMods.isAPI_LUA_EXTENSIONS()

// Push various hard-coded values controlling the AI out into XML
#define MOD_CONFIG_AI_IN_XML                        gCustomMods.isCONFIG_AI_IN_XML()

// Fixes the NumCitiesFreeFoodBuilding (policy finisher) bug where the civilization has a UB for the Aquaduct
#define MOD_BUGFIX_FREE_FOOD_BUILDING               gCustomMods.isBUGFIX_FREE_FOOD_BUILDING()
// Fixes the bug where the naval Civilization_FreeUnits start on land
#define MOD_BUGFIX_NAVAL_FREE_UNITS                 gCustomMods.isBUGFIX_NAVAL_FREE_UNITS()
// Fixes the bug where the naval units jump to the nearest city and not the nearest available water plot
#define MOD_BUGFIX_NAVAL_NEAREST_WATER              gCustomMods.isBUGFIX_NAVAL_NEAREST_WATER()
// Fixes the bug where Barb Camps ignore the ValidTerrains and ValidFeatures tables
#define MOD_BUGFIX_BARB_CAMP_TERRAINS               gCustomMods.isBUGFIX_BARB_CAMP_TERRAINS()
// Fixes the bug where you can't remove roads in no-mans-land originally built by a now dead player
#define MOD_BUGFIX_REMOVE_GHOST_ROUTES              gCustomMods.isBUGFIX_REMOVE_GHOST_ROUTES()
// Fixes healing units ignoring enemy units and sleeping units under direct fire remaining asleep - thanks to hulkster for highlighting the latter issue
#define MOD_BUGFIX_UNITS_AWAKE_IN_DANGER            gCustomMods.isBUGFIX_UNITS_AWAKE_IN_DANGER()
// Fixes workers stopping what they are doing at any hint of danger to only when they can see an enemy unit
#define MOD_BUGFIX_WORKERS_VISIBLE_DANGER           gCustomMods.isBUGFIX_WORKERS_VISIBLE_DANGER()
// Fixes the bug in calculating AA interception strength which takes terrain into account
#define MOD_BUGFIX_INTERCEPTOR_STRENGTH             gCustomMods.isBUGFIX_INTERCEPTOR_STRENGTH()
// Fixes the very dodgy maths in the calculation of a unit's power
#define MOD_BUGFIX_UNIT_POWER_CALC                  gCustomMods.isBUGFIX_UNIT_POWER_CALC()
// Fixes the Anti-Air non-domain bonuses issue, requires BUGFIX_UNIT_POWER_CALC to be enabled
#define MOD_BUGFIX_UNIT_POWER_BONUS_VS_DOMAIN_ONLY  gCustomMods.isBUGFIX_UNIT_POWER_BONUS_VS_DOMAIN_ONLY()
// Fixes the naval imbalance in a unit's power calculation, requires BUGFIX_UNIT_POWER_CALC to be enabled
#define MOD_BUGFIX_UNIT_POWER_NAVAL_CONSISTENCY     gCustomMods.isBUGFIX_UNIT_POWER_NAVAL_CONSISTENCY()
// Fixes a bug in the pathfinder code for hovering units at the seaside!
#define MOD_BUGFIX_HOVERING_PATHFINDER              gCustomMods.isBUGFIX_HOVERING_PATHFINDER()
// Fixes a bug in the pathfinder code for embarking
#define MOD_BUGFIX_EMBARKING_PATHFINDER             gCustomMods.isBUGFIX_EMBARKING_PATHFINDER()
// Fixes the Range-3 targetting bug - code by DaveMcW (http://forums.civfanatics.com/showthread.php?t=479509)
#define MOD_BUGFIX_RANGE_3_TARGETTING               gCustomMods.isBUGFIX_RANGE_3_TARGETTING()


//
// MOD_PROMOTIONS_XYZ changes manage/grant the promotions and may affect the game saving code
// MOD_PATHFINDER_XYZ changes only affect the path finding code so can be disabled if necessary
//

#if defined(MOD_PROMOTIONS_CROSS_MOUNTAINS)
#define MOD_PATHFINDER_CROSS_MOUNTAINS         MOD_PROMOTIONS_CROSS_MOUNTAINS
#endif
#if defined(MOD_PROMOTIONS_CROSS_OCEANS)
#define MOD_PATHFINDER_CROSS_OCEANS            MOD_PROMOTIONS_CROSS_OCEANS
#endif
#if defined(MOD_PROMOTIONS_CROSS_ICE)
#define MOD_PATHFINDER_CROSS_ICE               MOD_PROMOTIONS_CROSS_ICE
#endif
#if defined(MOD_PROMOTIONS_DEEP_WATER_EMBARKATION)
#define MOD_PATHFINDER_DEEP_WATER_EMBARKATION  MOD_PROMOTIONS_DEEP_WATER_EMBARKATION
#endif

// ONLY CHANGE THIS IF YOU TRULY KNOW WHAT YOU ARE DOING IN THE PATHFINDER CODE!!!
#if defined(MOD_PATHFINDER_CROSS_ICE) || defined(MOD_PATHFINDER_DEEP_WATER_EMBARKATION)
#define MOD_PATHFINDER_TERRAFIRMA
#endif


//
// NOTHING BELOW HERE SHOULD NEED CHANGING
//

// Serialization wrappers (makes it easier to find save breaking code)
#define MOD_SERIALIZE_TO(stream, member) stream << member
#define MOD_SERIALIZE_FROM(stream, member) stream >> member


// Custom database table name and columns
#define MOD_DB_TABLE "CustomModOptions"
#define MOD_DB_COL_NAME "Name"
#define MOD_DB_COL_VALUE "Value"
#define MOD_DB_COL_CLASS "Class"

// Custom mod logger
#ifdef CUSTOMLOGDEBUG
#define	CUSTOMLOG(sFmt, ...) {															\
	CvString sMsg;																		\
	CvString::format(sMsg, sFmt, __VA_ARGS__);											\
	LOGFILEMGR.GetLog(CUSTOMLOGDEBUG, FILogFile::kDontTimeStamp)->Msg(sMsg.c_str());	\
}
#else
#define	CUSTOMLOG(sFmt, ...) ((void)0)
#endif


// Class used to cache the database control settings
class CustomMods {
public:
	CustomMods();

	void preloadCache();
	void reloadCache();
	int getOption(const char* szName);

	inline bool isGLOBAL_LOCAL_GENERALS()                   { return m_bGLOBAL_LOCAL_GENERALS; }
	inline bool isGLOBAL_PROMOTION_CLASSES()                { return m_bGLOBAL_PROMOTION_CLASSES; }
	inline bool isGLOBAL_PASSABLE_FORTS()                   { return m_bGLOBAL_PASSABLE_FORTS; }
	inline bool isGLOBAL_PASSABLE_FORTS_ANY()               { return m_bGLOBAL_PASSABLE_FORTS_ANY; }
	inline bool isGLOBAL_CITY_FOREST_BONUS()                { return m_bGLOBAL_CITY_FOREST_BONUS; }
	inline bool isGLOBAL_CITY_WORKING()                     { return m_bGLOBAL_CITY_WORKING; }
	inline bool isGLOBAL_ALPINE_PASSES()                    { return m_bGLOBAL_ALPINE_PASSES; }
	inline bool isGLOBAL_CS_GIFT_SHIPS()                    { return m_bGLOBAL_CS_GIFT_SHIPS; }
	inline bool isGLOBAL_CS_UPGRADES()                      { return m_bGLOBAL_CS_UPGRADES; }
	inline bool isGLOBAL_CS_RAZE_RARELY()                   { return m_bGLOBAL_CS_RAZE_RARELY; }
	inline bool isGLOBAL_CS_GIFTS()                         { return m_bGLOBAL_CS_GIFTS; }
	inline bool isGLOBAL_NO_CONQUERED_SPACESHIPS()          { return m_bGLOBAL_NO_CONQUERED_SPACESHIPS; }
	inline bool isGLOBAL_ALLIES_BLOCK_BLOCKADES()           { return m_bGLOBAL_ALLIES_BLOCK_BLOCKADES; }
	inline bool isGLOBAL_SHORT_EMBARKED_BLOCKADES()         { return m_bGLOBAL_SHORT_EMBARKED_BLOCKADES; }
	inline bool isGLOBAL_GRATEFUL_SETTLERS()                { return m_bGLOBAL_GRATEFUL_SETTLERS; }
	inline bool isGLOBAL_QUICK_ROUTES()                     { return m_bGLOBAL_QUICK_ROUTES; }
	inline bool isGLOBAL_SUBS_UNDER_ICE_IMMUNITY()          { return m_bGLOBAL_SUBS_UNDER_ICE_IMMUNITY; }
	inline bool isGLOBAL_PARATROOPS_MOVEMENT()              { return m_bGLOBAL_PARATROOPS_MOVEMENT; }
	inline bool isGLOBAL_PARATROOPS_AA_DAMAGE()             { return m_bGLOBAL_PARATROOPS_AA_DAMAGE; }
	inline bool isGLOBAL_NUKES_MELT_ICE()                   { return m_bGLOBAL_NUKES_MELT_ICE; } 

	inline bool isTRAITS_CROSSES_ICE()                      { return m_bTRAITS_CROSSES_ICE; }
	inline bool isTRAITS_CITY_WORKING()                     { return m_bTRAITS_CITY_WORKING; }

	inline bool isPOLICIES_CITY_WORKING()                   { return m_bPOLICIES_CITY_WORKING; }

	inline bool isTECHS_CITY_WORKING()                      { return m_bTECHS_CITY_WORKING; }

	inline bool isPROMOTIONS_VARIABLE_RECON()               { return m_bPROMOTIONS_VARIABLE_RECON; }
	inline bool isPROMOTIONS_CROSS_MOUNTAINS()              { return m_bPROMOTIONS_CROSS_MOUNTAINS; }
	inline bool isPROMOTIONS_CROSS_OCEANS()                 { return m_bPROMOTIONS_CROSS_OCEANS; }
	inline bool isPROMOTIONS_CROSS_ICE()                    { return m_bPROMOTIONS_CROSS_ICE; }
	inline bool isPROMOTIONS_HALF_MOVE()                    { return m_bPROMOTIONS_HALF_MOVE; }
	inline bool isPROMOTIONS_DEEP_WATER_EMBARKATION()       { return m_bPROMOTIONS_DEEP_WATER_EMBARKATION; }

	inline bool isUI_CITY_PRODUCTION()                      { return m_bUI_CITY_PRODUCTION; }
	inline bool isUI_CITY_EXPANSION()                       { return m_bUI_CITY_EXPANSION; }

	inline bool isBUILDINGS_PRO_RATA_PURCHASE()             { return m_bBUILDINGS_PRO_RATA_PURCHASE; }
	inline bool isBUILDINGS_CITY_WORKING()                  { return m_bBUILDINGS_CITY_WORKING; }

	inline bool isUNITS_LOCAL_WORKERS()                     { return m_bUNITS_LOCAL_WORKERS; }
	inline bool isUNITS_HOVERING_LAND_ONLY_HEAL()           { return m_bUNITS_HOVERING_LAND_ONLY_HEAL; }
	inline bool isUNITS_HOVERING_COASTAL_ATTACKS()          { return m_bUNITS_HOVERING_COASTAL_ATTACKS; }

	inline bool isRELIGION_NO_PREFERRENCES()                { return m_bRELIGION_NO_PREFERRENCES; }
	inline bool isRELIGION_RANDOMISE()                      { return m_bRELIGION_RANDOMISE; }
	inline bool isRELIGION_CONVERSION_MODIFIERS()           { return m_bRELIGION_CONVERSION_MODIFIERS; }

	inline bool isEVENTS_CIRCUMNAVIGATION()                 { return m_bEVENTS_CIRCUMNAVIGATION; }
	inline bool isEVENTS_NEW_ERA()                          { return m_bEVENTS_NEW_ERA; }
	inline bool isEVENTS_NW_DISCOVERY()                     { return m_bEVENTS_NW_DISCOVERY; }
	inline bool isEVENTS_DIPLO_EVENTS()                     { return m_bEVENTS_DIPLO_EVENTS; }
	inline bool isEVENTS_MINORS()                           { return m_bEVENTS_MINORS; }
	inline bool isEVENTS_GOODY_TECH()                       { return m_bEVENTS_GOODY_TECH; }
	inline bool isEVENTS_GREAT_PEOPLE()                     { return m_bEVENTS_GREAT_PEOPLE; }
	inline bool isEVENTS_FOUND_RELIGION()                   { return m_bEVENTS_FOUND_RELIGION; }
	inline bool isEVENTS_ACQUIRE_BELIEFS()                  { return m_bEVENTS_ACQUIRE_BELIEFS; }
	inline bool isEVENTS_CITY()                             { return m_bEVENTS_CITY; }
	inline bool isEVENTS_PARADROPS()                        { return m_bEVENTS_PARADROPS; }
	inline bool isEVENTS_CAN_MOVE_INTO()                    { return m_bEVENTS_CAN_MOVE_INTO; }
	inline bool isEVENTS_UNIT_UPGRADES()                    { return m_bEVENTS_UNIT_UPGRADES; }
	inline bool isEVENTS_WAR_AND_PEACE()                    { return m_bEVENTS_WAR_AND_PEACE; }
	inline bool isEVENTS_NUCLEAR_DETONATION()               { return m_bEVENTS_NUCLEAR_DETONATION; }
	inline bool isEVENTS_REBASE()                           { return m_bEVENTS_REBASE; }

	inline bool isEVENTS_RED_TURN()                         { return m_bEVENTS_RED_TURN; }
	inline bool isEVENTS_RED_COMBAT()                       { return m_bEVENTS_RED_COMBAT; }
	inline bool isEVENTS_RED_COMBAT_MISSION()               { return m_bEVENTS_RED_COMBAT_MISSION; }
	inline bool isEVENTS_RED_COMBAT_ABORT()                 { return m_bEVENTS_RED_COMBAT_ABORT; }
	inline bool isEVENTS_RED_COMBAT_RESULT()                { return m_bEVENTS_RED_COMBAT_RESULT; }
	inline bool isEVENTS_RED_COMBAT_ENDED()                 { return m_bEVENTS_RED_COMBAT_ENDED; }

	inline bool isAPI_ESPIONAGE()                           { return m_bAPI_ESPIONAGE; }
	inline bool isAPI_RELIGION()                            { return m_bAPI_RELIGION; }
	inline bool isAPI_PLOT_BASED_DAMAGE()                   { return m_bAPI_PLOT_BASED_DAMAGE; }
	inline bool isAPI_EXTENSIONS()                          { return m_bAPI_EXTENSIONS; }
	inline bool isAPI_LUA_EXTENSIONS()                      { return m_bAPI_LUA_EXTENSIONS; }

	inline bool isCONFIG_AI_IN_XML()                        { return m_bCONFIG_AI_IN_XML; }

	inline bool isBUGFIX_FREE_FOOD_BUILDING()               { return m_bBUGFIX_FREE_FOOD_BUILDING; }
	inline bool isBUGFIX_NAVAL_FREE_UNITS()                 { return m_bBUGFIX_NAVAL_FREE_UNITS; }
	inline bool isBUGFIX_NAVAL_NEAREST_WATER()              { return m_bBUGFIX_NAVAL_NEAREST_WATER; }
	inline bool isBUGFIX_BARB_CAMP_TERRAINS()               { return m_bBUGFIX_BARB_CAMP_TERRAINS; }
	inline bool isBUGFIX_REMOVE_GHOST_ROUTES()              { return m_bBUGFIX_REMOVE_GHOST_ROUTES; }
	inline bool isBUGFIX_UNITS_AWAKE_IN_DANGER()            { return m_bBUGFIX_UNITS_AWAKE_IN_DANGER; }
	inline bool isBUGFIX_WORKERS_VISIBLE_DANGER()           { return m_bBUGFIX_WORKERS_VISIBLE_DANGER; }
	inline bool isBUGFIX_INTERCEPTOR_STRENGTH()             { return m_bBUGFIX_INTERCEPTOR_STRENGTH; }
	inline bool isBUGFIX_UNIT_POWER_CALC()                  { return m_bBUGFIX_UNIT_POWER_CALC; }
	inline bool isBUGFIX_UNIT_POWER_BONUS_VS_DOMAIN_ONLY()  { return m_bBUGFIX_UNIT_POWER_BONUS_VS_DOMAIN_ONLY; }
	inline bool isBUGFIX_UNIT_POWER_NAVAL_CONSISTENCY()     { return m_bBUGFIX_UNIT_POWER_NAVAL_CONSISTENCY; }
	inline bool isBUGFIX_HOVERING_PATHFINDER()              { return m_bBUGFIX_HOVERING_PATHFINDER; }
	inline bool isBUGFIX_EMBARKING_PATHFINDER()             { return m_bBUGFIX_EMBARKING_PATHFINDER; }
	inline bool isBUGFIX_RANGE_3_TARGETTING()               { return m_bBUGFIX_RANGE_3_TARGETTING; }

protected:
	bool m_bInit;
	std::map<string, int> m_options;

	bool m_bGLOBAL_LOCAL_GENERALS;
	bool m_bGLOBAL_PROMOTION_CLASSES;
	bool m_bGLOBAL_PASSABLE_FORTS;
	bool m_bGLOBAL_PASSABLE_FORTS_ANY;
	bool m_bGLOBAL_CITY_FOREST_BONUS;
	bool m_bGLOBAL_CITY_WORKING;
	bool m_bGLOBAL_ALPINE_PASSES;
	bool m_bGLOBAL_CS_GIFT_SHIPS;
	bool m_bGLOBAL_CS_UPGRADES;
	bool m_bGLOBAL_CS_RAZE_RARELY;
	bool m_bGLOBAL_CS_GIFTS;
	bool m_bGLOBAL_NO_CONQUERED_SPACESHIPS;
	bool m_bGLOBAL_ALLIES_BLOCK_BLOCKADES;
	bool m_bGLOBAL_SHORT_EMBARKED_BLOCKADES;
	bool m_bGLOBAL_GRATEFUL_SETTLERS;
	bool m_bGLOBAL_QUICK_ROUTES;
	bool m_bGLOBAL_SUBS_UNDER_ICE_IMMUNITY;
	bool m_bGLOBAL_PARATROOPS_MOVEMENT;
	bool m_bGLOBAL_PARATROOPS_AA_DAMAGE;
	bool m_bGLOBAL_NUKES_MELT_ICE;

	bool m_bTRAITS_CROSSES_ICE;
	bool m_bTRAITS_CITY_WORKING;

	bool m_bPOLICIES_CITY_WORKING;

	bool m_bTECHS_CITY_WORKING;

	bool m_bPROMOTIONS_VARIABLE_RECON;
	bool m_bPROMOTIONS_CROSS_MOUNTAINS;
	bool m_bPROMOTIONS_CROSS_OCEANS;
	bool m_bPROMOTIONS_CROSS_ICE;
	bool m_bPROMOTIONS_HALF_MOVE;
	bool m_bPROMOTIONS_DEEP_WATER_EMBARKATION;

	bool m_bUI_CITY_PRODUCTION;
	bool m_bUI_CITY_EXPANSION;

	bool m_bBUILDINGS_PRO_RATA_PURCHASE;
	bool m_bBUILDINGS_CITY_WORKING;

	bool m_bUNITS_LOCAL_WORKERS;
	bool m_bUNITS_HOVERING_LAND_ONLY_HEAL;
	bool m_bUNITS_HOVERING_COASTAL_ATTACKS;

	bool m_bRELIGION_NO_PREFERRENCES;
	bool m_bRELIGION_RANDOMISE;
	bool m_bRELIGION_CONVERSION_MODIFIERS;

	bool m_bEVENTS_CIRCUMNAVIGATION;
	bool m_bEVENTS_NEW_ERA;
	bool m_bEVENTS_NW_DISCOVERY;
	bool m_bEVENTS_DIPLO_EVENTS;
	bool m_bEVENTS_MINORS;
	bool m_bEVENTS_GOODY_TECH;
	bool m_bEVENTS_GREAT_PEOPLE;
	bool m_bEVENTS_FOUND_RELIGION;
	bool m_bEVENTS_ACQUIRE_BELIEFS;
	bool m_bEVENTS_CITY;
	bool m_bEVENTS_PARADROPS;
	bool m_bEVENTS_CAN_MOVE_INTO;
	bool m_bEVENTS_UNIT_UPGRADES;
	bool m_bEVENTS_WAR_AND_PEACE;
	bool m_bEVENTS_NUCLEAR_DETONATION;
	bool m_bEVENTS_REBASE;

	bool m_bEVENTS_RED_TURN;
	bool m_bEVENTS_RED_COMBAT;
	bool m_bEVENTS_RED_COMBAT_MISSION;
	bool m_bEVENTS_RED_COMBAT_ABORT;
	bool m_bEVENTS_RED_COMBAT_RESULT;
	bool m_bEVENTS_RED_COMBAT_ENDED;

	bool m_bAPI_ESPIONAGE;
	bool m_bAPI_RELIGION;
	bool m_bAPI_PLOT_BASED_DAMAGE;
	bool m_bAPI_EXTENSIONS;
	bool m_bAPI_LUA_EXTENSIONS;

	bool m_bCONFIG_AI_IN_XML;

	bool m_bBUGFIX_FREE_FOOD_BUILDING;
	bool m_bBUGFIX_NAVAL_FREE_UNITS;
	bool m_bBUGFIX_NAVAL_NEAREST_WATER;
	bool m_bBUGFIX_BARB_CAMP_TERRAINS;
	bool m_bBUGFIX_REMOVE_GHOST_ROUTES;
	bool m_bBUGFIX_UNITS_AWAKE_IN_DANGER;
	bool m_bBUGFIX_WORKERS_VISIBLE_DANGER;
	bool m_bBUGFIX_INTERCEPTOR_STRENGTH;
	bool m_bBUGFIX_UNIT_POWER_CALC;
	bool m_bBUGFIX_UNIT_POWER_BONUS_VS_DOMAIN_ONLY;
	bool m_bBUGFIX_UNIT_POWER_NAVAL_CONSISTENCY;
	bool m_bBUGFIX_HOVERING_PATHFINDER;
	bool m_bBUGFIX_EMBARKING_PATHFINDER;
	bool m_bBUGFIX_RANGE_3_TARGETTING;
};

extern CustomMods gCustomMods;
#endif