// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 


/*
[object_name] execvm "\Root_Effects\Root_AmbientSFX\AL_ambient_SFX\firefly.sqf";
object_name - string, the name of the object you use as a source for the SFX
*/

private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) exitwith
{
    diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasinterface) exitwith {};

params ["_logic"];

_firefliesloc = getPosATL _logic;
deleteVehicle _logic;

["Ambient Firefly Setting",[
	["EDIT",["Firefly Object","Classname of the object to use as a source for the SFX."],["Land_HelipadEmpty_F"]],
	["SLIDER",["Fireflies Altitude","Altitude in meters where you want the Fireflies."],[0,100,0,0]]
	],{
		params ["_results", "_firefliesloc"];
		_results params ["_firefliesobj", "_firefliesalt"];
		
		_fireflies = _firefliesobj createVehicle _firefliesloc;

		["Fireflies Active!"] call zen_common_fnc_showMessage;

		[_fireflies, _firefliesalt] execVM "\Root_Effects\Root_AmbientSFX\AL_ambient_SFX\firefly.sqf";
	},{
		["Aborted"] call zen_common_fnc_showMessage;
		playSound "FD_Start_F";
	}, _firefliesloc] call zen_dialog_fnc_create;


