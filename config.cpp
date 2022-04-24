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
	class Root_Effects
	{
		name = "Root's Effects";
		author = "Root";
		requiredAddons[] = {"A3_Modules_F_Curator","cba_main","zen_custom_modules"};
		requiredVersion = 0.1;
		units[] = {"Floating_Module", "Fallstar_Module", "UFO_Module", "Seeker_Module", "Cropcircle_Module", "Termination_Module", "Volcano_Module", "AAA_Module", "Missiles_Module", "Ground_Module", "Tracers_Module", "Search_Module"};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class Root
	{
		class RootTerminationCategory
		{
			class Termination {file = "\Root_Effects\term_entities.sqf";};
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
	class Termination_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Termination_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Termination";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "Terminate Effects";
		class ModuleDescription: ModuleDescription
		{
			description = "Terminate Effects";
			position = 1;
		};
	};
};

