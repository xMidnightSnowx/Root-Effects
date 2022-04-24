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
	class Root_UFO_Effects
	{
		addonRootClass = "Root_Effects";
		requiredAddons[] = {"A3_Modules_F_Curator","cba_main","Root_Effects", "zen_custom_modules"};
		requiredVersion = 0.1;
		units[] = {"UFO_Module", "Seeker_Module", "Cropcircle_Module"};
		weapons[] = {};
	};
};



class CfgSounds
{
	class final_boom
	{
		name = "final_boom";
		sound[] = {"\Root_Effects\Root_UFO\sound\final_boom.ogg",1,1};
		titles[] = {1, ""};
	};
	class charge_complete
	{
		name = "charge_complete";
		sound[] = {"\Root_Effects\Root_UFO\sound\charge_complete.ogg",1,1};
		titles[] = {1, ""};
	};
	class static
	{
		name = "static";
		sound[] = {"\Root_Effects\Root_UFO\sound\static.ogg",0.05,1};
		titles[] = {1, ""};
	};
	class charge_1
	{
		name = "charge_1";
		sound[] = {"\Root_Effects\Root_UFO\sound\charge_1.ogg",1,1};
		titles[] = {1, ""};
	};
	class charge_2
	{
		name = "charge_2";
		sound[] = {"\Root_Effects\Root_UFO\sound\charge_2.ogg",1,1};
		titles[] = {1, ""};
	};
	class ufo_cross
	{
		name = "ufo_cross";
		sound[] = {"\Root_Effects\Root_UFO\sound\ufo_cross.ogg",1,1};
		titles[] = {1, ""};
	};
	class crop_me
	{
		name = "crop_me";
		sound[] = {"\Root_Effects\Root_UFO\sound\crop_me.ogg",1,1};
		titles[] = {1, ""};
	};
	class aterizat
	{
		name = "aterizat";
		sound[] = {"\Root_Effects\Root_UFO\sound\aterizat.ogg",1,1};
		titles[] = {1, ""};
	};
	class cutremur
	{
		name = "cutremur";
		sound[] = {"\Root_Effects\Root_UFO\sound\cutremur.ogg",1,1};
		titles[] = {1, ""};
	};

};



class CfgFunctions
{
	class Root
	{
		class RootUFOCategory
		{
			class UFO {file = "\Root_Effects\Root_UFO\AL_ufo\init_ufo.sqf";};
			class Seeker {file = "\Root_Effects\Root_UFO\AL_ufo\init_seeker.sqf";};
			class Cropcircle {file = "\Root_Effects\Root_UFO\AL_ufo\init_cropcircle.sqf";};
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
	class UFO_Module: Module_F
	{
		author = "Root";
		_generalMacro = "UFO_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_UFO";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "UFO";
		class ModuleDescription: ModuleDescription
		{
			description = "UFO";
			position = 1;
		};
	};
	class Seeker_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Seeker_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Seeker";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "UFO Seeker";
		class ModuleDescription: ModuleDescription
		{
			description = "UFO Seeker";
			position = 1;
		};
	};
	class Cropcircle_Module: Module_F
	{
		author = "Root";
		_generalMacro = "Cropcircle_Module";
		scope = 1;
		scopeCurator = 2;
		category = "ROOT_EFFECTS";
		function = "Root_fnc_Cropcircle";
		isGlobal = 1;
		isTriggerActivated = 1;
		displayName = "UFO Cropcircle";
		class ModuleDescription: ModuleDescription
		{
			description = "UFO Cropcircle";
			position = 1;
		};
	};
};
