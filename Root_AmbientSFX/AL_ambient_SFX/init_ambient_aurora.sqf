// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 


/*
object_name - string, the name of the object you use as a source for the SFX
[aurora_1] execvm "AL_ambient_SFX\aurora.sqf";
*/

private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) exitwith
{
    diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasinterface) exitwith {};

params ["_logic"];

_auroraloc = getPosATL _logic;
deleteVehicle _logic;

["Ambient Aurora Setting",[
	["EDIT",["Aurora Object","Classname of the object to use as a source for the SFX."],["Land_HelipadEmpty_F"]],
	["SLIDER",["Aurora Altitude","Altitude in meters where you want the Aurora."],[0,4000,500,0]]
	],{
		params ["_results", "_auroraloc"];
		_results params ["_auroraobj", "_auroraalt"];
	
		_aurora = _auroraobj createVehicle _auroraloc;

		["Aurora Active!"] call zen_common_fnc_showMessage;

		[_aurora, _auroraalt] execVM "\Root_Effects\Root_AmbientSFX\AL_ambient_SFX\aurora.sqf";
	},{
		["Aborted"] call zen_common_fnc_showMessage;
		playSound "FD_Start_F";
	}, _auroraloc] call zen_dialog_fnc_create;


