// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 

private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) exitwith
{
    diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasinterface) exitwith {};

params ["_logic"];

_ground_loc = getPosATL _logic;
_radiuspos = getPosATL _logic;
deleteVehicle _logic;

["Ground Barrage Settings",[
	["EDIT",["Ground Barrage Object","Classname of the object used as the Artillery Generator for Ground Barrage."],["Land_HelipadEmpty_F"]],
	["SLIDER:RADIUS",["Activation Distance","Radius is meters for players to be away to generate Explosions."],[0,1000,150,0,_radiuspos,[7,120,32,1]]],
	["SLIDER:RADIUS",["Ground Barrage Radius","Radius in meters for the Ground Barrage Area of Effect."],[100,5000,500,0,_ground_loc,[7,120,32,1]]]
	],{
		params ["_results", "_ground_loc"];
		_results params ["_ground_object", "_activation_distance", "_ground_radius"];
		
		_ground_start = _ground_object createVehicle _ground_loc;

		["Ground Barrage Initiated!"] call zen_common_fnc_showMessage;

		[_ground_start, _ground_radius, _activation_distance] execVM "\Root_Effects\Root_Battlescripts\ALambientbattle\battle_artillery.sqf";
	},{
		["Aborted"] call zen_common_fnc_showMessage;
		playSound "FD_Start_F";
	}, _ground_loc] call zen_dialog_fnc_create;


