// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 

/*
[object_name] execvm "AL_ambient_SFX\sparky.sqf";
object_name - string, the name of the object you use as a source for the SFX
*/

private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) exitwith
{
    diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasinterface) exitwith {};

params ["_logic"];

_sparksloc = getPosATL _logic;
deleteVehicle _logic;

["Ambient Sparks Setting",[
	["EDIT",["Sparks Object","Classname of the object to use as a source for the SFX."],["Land_HelipadEmpty_F"]],
	["SLIDER",["Sparks Altitude","Altitude in meters where you want the Sparks Rupture. (Minimum Altitude is 1m)"],[0,100,0,0]]
	],{
		params ["_results", "_sparksloc"];
		_results params ["_sparksobj", "_sparksalt"];
		
		_sparks = _sparksobj createVehicle _sparksloc;

		["Sparks Active!"] call zen_common_fnc_showMessage;

		[_sparks, _sparksalt] execVM "\Root_Effects\Root_AmbientSFX\AL_ambient_SFX\sparky.sqf";
	},{
		["Aborted"] call zen_common_fnc_showMessage;
		playSound "FD_Start_F";
	}, _sparksloc] call zen_dialog_fnc_create;


