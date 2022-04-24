// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 

private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) exitwith
{
    diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasinterface) exitwith {};

params ["_logic"];

_missile_loc = getPosATL _logic;
deleteVehicle _logic;

["Missile Launcher Settings",[
	["EDIT",["Missile Launcher Object","Classname of the object used as the launch generator for Missile launches."],["Land_HelipadEmpty_F"]]
	],{
		params ["_results", "_missile_loc"];
		_results params ["_missile_object"];
		
		_missile_start = _missile_object createVehicle _missile_loc;

		["Missile Launcher Initiated!"] call zen_common_fnc_showMessage;

		[_missile_start] execVM "\Root_Effects\Root_Battlescripts\ALambientbattle\battle_missiles.sqf";
	},{
		["Aborted"] call zen_common_fnc_showMessage;
		playSound "FD_Start_F";
	}, _missile_loc] call zen_dialog_fnc_create;


