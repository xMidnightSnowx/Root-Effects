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
	class Root_Fallstar_Effect
	{
		addonRootClass = "Root_Effects";
		requiredAddons[] = {"A3_Modules_F_Curator","cba_main","Root_Effects", "zen_custom_modules"};
		requiredVersion = 0.1;
		units[] = {"Fallstar_Module"};
		weapons[] = {};
	};
};


class CfgFunctions
{
	class Root
	{
		class RootFallstarCategory
		{
			class Fallstar {file = "\Root_Effects\Root_Fallstar\ALfallstar\init_fallstar.sqf";};
		};
	};
};

class CfgSounds
{
	// Definition for each sound
	class expozie
	{
		name = "expozie"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Fallstar\sound\expozie.ogg", db+30, 1.0};
		titles[] = {0, ""};	
	};		
	class bariera_1
	{
		name = "bariera_1"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Fallstar\sound\bariera_1.ogg", db+35, 1.0};
		titles[] = {0, ""};	
	};	
	class bariera_2
	{
		name = "bariera_2"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Fallstar\sound\bariera_2.ogg", db+35, 1.0};
		titles[] = {0, ""};	
	};	
	class bariera_3
	{
		name = "bariera_3"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Fallstar\sound\bariera_3.ogg", db+35, 1.0};
		titles[] = {0, ""};	
	};	
	class bariera_4
	{
		name = "bariera_4"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Fallstar\sound\bariera_4.ogg", db+35, 1.0};
		titles[] = {0, ""};	
	};	
	class bariera_5
	{
		name = "bariera_5"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Fallstar\sound\bariera_5.ogg", db+45, 1.0};
		titles[] = {0, ""};	
	};	
	class meteor_1
	{
		name = "meteor_1"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Fallstar\sound\meteor_1.ogg", db+20, 1.0};
		titles[] = {0, ""};	
	};	
	class earthquakes
	{
		name = "earthquakes"; // Name for mission editor
		sound[] = {"\Root_Effects\Root_Fallstar\sound\earthquakes.ogg", 0.2, 1.0};
		titles[] = {0, ""};
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
	class Fallstar_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Fallstar_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Fallstar";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Meteors/Comets Effect";
		class ModuleDescription: ModuleDescription
		{
			description = "Spawn Meteors/Comets Effect";
			position = 1;
		};
	};
};
