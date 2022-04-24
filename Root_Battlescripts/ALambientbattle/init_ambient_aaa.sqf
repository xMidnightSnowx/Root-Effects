// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 


private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) exitwith
{
    diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasinterface) exitwith {};

params ["_logic"];

_aaa_loc = getPosATL _logic;
deleteVehicle _logic;

["AAA Barrage Settings",[
	["EDIT",["AAA Barrage Object","Classname of the object used as the flaks for AAA Barrage."],["Land_HelipadEmpty_F"]],
	["SLIDER:RADIUS",["AAA Barrage Radius","Radius in meters for the AAA Barrage Area of Effect."],[100,5000,500,0,_aaa_loc,[7,120,32,1]]],
	["SLIDER",["AAA Barrage Altitude","Altitude in meters above terrain for the AAA effect."],[0,1000,150,0]]
	],{
		params ["_results", "_aaa_loc"];
		_results params ["_aaa_object", "_aaa_radius", "_aaa_height"];

		_aaa_start = _aaa_object createVehicle _aaa_loc;

		["AAA Barrage Initiated!"] call zen_common_fnc_showMessage;

		[_aaa_start, _aaa_radius, _aaa_height] execVM "\Root_Effects\Root_Battlescripts\ALambientbattle\battle_flaks.sqf";
	},{
		["Aborted"] call zen_common_fnc_showMessage;
		playSound "FD_Start_F";
	}, _aaa_loc] call zen_dialog_fnc_create;


