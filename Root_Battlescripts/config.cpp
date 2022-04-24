#include "BIS_AddonInfo.hpp"
////////////////////////////////////////////////////////////////////
//DeRap: modules_f_curator\Flares\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Fri Sep 04 01:11:14 2020 : 'file' last modified on Mon Jun 24 21:41:20 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};


class CfgPatches
{
	class Root_Battle_Effect
	{
		addonRootClass = "Root_Effects";
		requiredAddons[] = {"A3_Modules_F_Curator","cba_main","Root_Effects","zen_custom_modules"};
		requiredVersion = 0.1;
		units[] = {"AAA_Module", "Missiles_Module", "Ground_Module", "Tracers_Module", "Search_Module"};
		weapons[] = {};
	};
};


class CfgSounds
{
	// Definition for each sound
	class expozie
	{
		name = "expozie"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\expozie.ogg", db+20, 1.0};
		titles[] = {0, ""};	
	};		
	class bariera_1
	{
		name = "bariera_1"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\bariera_1.ogg", db+15, 1.0};
		titles[] = {0, ""};	
	};	
	class bariera_2
	{
		name = "bariera_2"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\bariera_2.ogg", db+15, 1.0};
		titles[] = {0, ""};	
	};	
	class bariera_3
	{
		name = "bariera_3"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\bariera_3.ogg", db+15, 1.0};
		titles[] = {0, ""};	
	};	
	class bariera_4
	{
		name = "bariera_4"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\bariera_4.ogg", db+15, 1.0};
		titles[] = {0, ""};	
	};	
	class bariera_5
	{
		name = "bariera_5"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\bariera_5.ogg", db+15, 1.0};
		titles[] = {0, ""};	
	};	
	class ground_air
	{
		name = "ground_air"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\ground_air.ogg", db+15, 1.0};
		titles[] = {0, ""};	
	};
	class roc_1
	{
		name = "roc_1"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\roc_1.ogg", db+10, 1.0};
		titles[] = {0, ""};	
	};	
	class roc_2
	{
		name = "roc_2"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\roc_2.ogg", db+10, 1.0};
		titles[] = {0, ""};	
	};		
	class roc_3
	{
		name = "roc_3"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\roc_3.ogg", db+10, 1.0};
		titles[] = {0, ""};	
	};		
	class roc_4
	{
		name = "roc_4"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\roc_4.ogg", db+10, 1.0};
		titles[] = {0, ""};	
	};
	class alarma_aeriana_scurt
	{
		name = "alarma_aeriana_scurt"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Battlescripts\sound\alarma_aeriana_scurt.ogg", db+10, 1.0};
		titles[] = {0, ""};	
	};		
};


class CfgFunctions
{
	class Root
	{
		class RootBattleCategory
		{
			class AAA {file = "\Root_Effects\Root_Battlescripts\ALambientbattle\init_ambient_aaa.sqf";};
			class Ground {file = "\Root_Effects\Root_Battlescripts\ALambientbattle\init_ambient_ground.sqf";};
			class Missiles {file = "\Root_Effects\Root_Battlescripts\ALambientbattle\init_ambient_missiles.sqf";};
			class Search {file = "\Root_Effects\Root_Battlescripts\ALambientbattle\init_ambient_search.sqf";};
			class Tracers {file = "\Root_Effects\Root_Battlescripts\ALambientbattle\init_ambient_tracers.sqf";};
		};
	};
};


class CfgFactionClasses
{
	class NO_CATEGORY;
	class ROOT_EFFECTS : NO_CATEGORY {
		displayName = "Root's Effects";
	};
};


class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
		};
	};
	class AAA_Module: Module_F
	{
		author = "Root";
		_generalMacro = "AAA_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_AAA";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Fake AAA Barrage";
		class ModuleDescription: ModuleDescription
		{
			description = "Fake AAA Barrage";
			position = 1;
		};
	};
	class Ground_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Ground_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Ground";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Fake Ground Barrage";
		class ModuleDescription: ModuleDescription
		{
			description = "Fake Ground Barrage";
			position = 1;
		};
	};
	class Missiles_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Missiles_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Missiles";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Fake Missile Launches";
		class ModuleDescription: ModuleDescription
		{
			description = "Fake Missile Launches";
			position = 1;
		};
	};
	class Search_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Search_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Search";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Searchlights";
		class ModuleDescription: ModuleDescription
		{
			description = "Searchlights";
			position = 1;
		};
	};
	class Tracers_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Tracers_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Tracers";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Tracers";
		class ModuleDescription: ModuleDescription
		{
			description = "Tracers";
			position = 1;
		};
	};
};
