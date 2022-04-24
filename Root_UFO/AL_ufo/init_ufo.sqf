// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 

/*
[freq] execvm "\Root_Effects\Root_UFO\AL_ufo\ufo_encounter.sqf";

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

["UFO Encounter Settings",[
	["SLIDER",["UFO Encounter Frequency","Frequency in seconds of how often the phenomena takes place."],[10,600,30,0]]
	],{
		params ["_results"];
		_results params ["_seekerfreq"];
		
		["UFO Encounter Configured and Created!"] call zen_common_fnc_showMessage;

		[_seekerfreq] execVM "\Root_Effects\Root_UFO\AL_ufo\ufo_encounter.sqf";
	},{
		["Aborted"] call zen_common_fnc_showMessage;
		playSound "FD_Start_F";
	}] call zen_dialog_fnc_create;

