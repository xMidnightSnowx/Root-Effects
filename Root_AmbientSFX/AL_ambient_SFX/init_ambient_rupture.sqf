// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 


/*
[object_name] execvm "AL_ambient_SFX\rupture.sqf";
object_name - string, the name of the object you use as a source for the SFX
*/

private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) exitwith
{
    diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasinterface) exitwith {};

params ["_logic"];

_ruptureloc = getPosATL _logic;
deleteVehicle _logic;

["Ambient Rupture Setting",[
	["EDIT",["Rupture Object","Classname of the object to use as a source for the SFX."],["Land_HelipadEmpty_F"]],
	["SLIDER",["Rupture Altitude","Altitude in meters where you want the Spacetime Rupture."],[0,4000,500,0]]
	],{
		params ["_results", "_ruptureloc"];
		_results params ["_ruptureobj", "_rupturealt"];

		_rupture = _ruptureobj createVehicle _ruptureloc;

		["Rupture Active!"] call zen_common_fnc_showMessage;

		[_rupture, _rupturealt] execVM "\Root_Effects\Root_AmbientSFX\AL_ambient_SFX\rupture.sqf";
	},{
		["Aborted"] call zen_common_fnc_showMessage;
		playSound "FD_Start_F";
	}, _ruptureloc] call zen_dialog_fnc_create;


