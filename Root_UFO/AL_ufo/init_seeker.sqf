// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 
/*
=============>>> UFO encounters <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

[freq] execvm "\Root_Effects\Root_UFO\AL_ufo\ufo_seeker.sqf";

freq - frequency in seconds of how often the specific phenomena takes place
*/


private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) exitwith
{
    diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasinterface) exitwith {};

params ["_logic"];
deleteVehicle _logic;

["UFO Seeker Settings",[
	["SLIDER",["UFO Seeker Frequency","Frequency in seconds of how often the phenomena takes place."],[10,600,30,0]]
	],{
		params ["_results"];
		_results params ["_seekerfreq"];
		
		["UFO Seeker Configured and Created!"] call zen_common_fnc_showMessage;

		[_seekerfreq] execVM "\Root_Effects\Root_UFO\AL_ufo\ufo_seeker.sqf";
	},{
		["Aborted"] call zen_common_fnc_showMessage;
		playSound "FD_Start_F";
	}] call zen_dialog_fnc_create;

