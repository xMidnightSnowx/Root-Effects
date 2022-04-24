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
	class Root_Ambient_Effect
	{
		addonRootClass = "Root_Effects";
		requiredAddons[] = {"A3_Modules_F_Curator","cba_main","Root_Effects","zen_custom_modules"};
		requiredVersion = 0.1;
		units[] = {"Fireflies_Module", "Aurora_Module", "Rupture_Module", "Sparks_Module"};
		weapons[] = {};
	};
};


class CfgSounds
{
	class spark1
	{
		name = "spark1";
		sound[] = {"\Root_Effects\Root_AmbientSFX\sound\spark1.ogg", db+5, 1};
		titles[] = {};
	};
	class spark11
	{
		name = "spark11";
		sound[] = {"\Root_Effects\Root_AmbientSFX\sound\spark11.ogg", db+5, 1};
		titles[] = {};
	};
	class spark2
	{
		name = "spark2";
		sound[] = {"\Root_Effects\Root_AmbientSFX\sound\spark2.ogg", db+5, 1};
		titles[] = {};
	};		
	class spark22
	{
		name = "spark22";
		sound[] = {"\Root_Effects\Root_AmbientSFX\sound\spark22.ogg", db+5, 1};
		titles[] = {};
	};	
	class spark3	
	{
		name = "spark3";
		sound[] = {"\Root_Effects\Root_AmbientSFX\sound\spark3.ogg", db+5, 1};
		titles[] = {};
	};
	class spark4	
	{
		name = "spark4";
		sound[] = {"\Root_Effects\Root_AmbientSFX\sound\spark4.ogg", db+5, 1};
		titles[] = {};
	};
	class spark5	
	{
		name = "spark5";
		sound[] = {"\Root_Effects\Root_AmbientSFX\sound\spark5.ogg", db+5, 1};
		titles[] = {};
	};
	class broasca_3
	{
		name = "broasca_3";
		sound[] = {"\Root_Effects\Root_AmbientSFX\sound\broasca_3.ogg", 1, 1};
		titles[] = {1, ""};
	};
};


class CfgFunctions
{
	class Root
	{
		class RootAmbientCategory
		{
			class Fireflies {file = "\Root_Effects\Root_AmbientSFX\AL_ambient_SFX\init_ambient_fireflies.sqf";};
			class Aurora {file = "\Root_Effects\Root_AmbientSFX\AL_ambient_SFX\init_ambient_aurora.sqf";};
			class Rupture {file = "\Root_Effects\Root_AmbientSFX\AL_ambient_SFX\init_ambient_rupture.sqf";};
			class Sparks {file = "\Root_Effects\Root_AmbientSFX\AL_ambient_SFX\init_ambient_sparks.sqf";};
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
	class Fireflies_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Fireflies_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Fireflies";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Ambient Fireflies";
		class ModuleDescription: ModuleDescription
		{
			description = "Ambient Fireflies";
			position = 1;
		};
	};
	class Aurora_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Aurora_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Aurora";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Ambient Auroras";
		class ModuleDescription: ModuleDescription
		{
			description = "Ambient Auroras";
			position = 1;
		};
	};
	class Rupture_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Rupture_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Rupture";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Ambient Spacetime Rupture";
		class ModuleDescription: ModuleDescription
		{
			description = "Ambient Spacetime Rupture";
			position = 1;
		};
	};
	class Sparks_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Sparks_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Sparks";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Ambient Sparks";
		class ModuleDescription: ModuleDescription
		{
			description = "Ambient Sparks";
			position = 1;
		};
	};
};
