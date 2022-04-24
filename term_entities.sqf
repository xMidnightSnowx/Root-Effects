// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 
/*
seekeron = false; publicvariable "seekeron";
end_cross = false; publicvariable "end_cross";
ufoencounter = false; publicvariable "ufoencounter";
glow_blood = false; publicvariable "glow_blood";
alias_meteors = true; publicVariable "alias_meteors";
alias_fallingstar=true; publicVariable "alias_fallingstar";
volcano=false; publicVariable "volcano";
al_aaa = false; publicVariable "al_aaa";
al_art = false; publicVariable "al_art";
al_missile = false; publicVariable "al_missile";
al_tracer = false; publicVariable "al_tracer";
al_search_light = false; publicVariable "al_search_light";
*/


private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");
if !(_hasZen) exitwith
{
    diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasinterface) exitwith {};

params ["_logic"];
deleteVehicle _logic;

["Terminate Effects",[
	["TOOLBOX:YESNO",["Terminate All UFO Encounters","If true, all UFO Encounters will be terminated."],false],
	["TOOLBOX:YESNO",["Terminate All UFO Seekers","If true, all UFO Seekers will be terminated."],false],
	["TOOLBOX:YESNO",["Terminate All UFO Cropcircles","If true, all UFO Cropcircles will be terminated."],false],
	["TOOLBOX:YESNO",["Terminate All Meteors","If true, all Meteors will be terminated."],false],
	["TOOLBOX:YESNO",["Terminate All Comets","If true, all Comets will be terminated."],false],
	["TOOLBOX:YESNO",["Terminate All Volcano Eruption","If true, all Volcano Eruptions will be terminated."],false],
	["TOOLBOX:YESNO",["Terminate All AAA Barrage","If true, all AAA Barrage will be terminated."],false],
	["TOOLBOX:YESNO",["Terminate All Artillery Barrage","If true, all Artillery Barrage will be terminated."],false],
	["TOOLBOX:YESNO",["Terminate All Missile Launches","If true, all Missile Launhes will be terminated."],false],
	["TOOLBOX:YESNO",["Terminate All Tracers","If true, all Tracers will be terminated."],false],
	["TOOLBOX:YESNO",["Terminate All Search Lights","If true, all Search Lights will be terminated."],false]
	],{
		params ["_results"];
		_results params ["_isencounter", "_isseeker", "_iscropcircles", "_ismeteor", "_iscomet", "_isvolcano", "_isaaa", "_isartillery", "_ismissile", "_istracer", "_issearchlight"];

		if (_isencounter == true) then { ufoencounter = false; publicVariable "ufoencounter"; };
		if (_isseeker == true) then { seekeron = false; publicVariable "seekeron"; };
		if (_iscropcircles == true) then { end_cross = false; publicVariable "end_cross"; };
		if (_ismeteor == true) then { alias_meteors = false; publicVariable "alias_meteors"; };
		if (_iscomet == true) then { alias_fallingstar = false; publicVariable "alias_fallingstar"; };
		if (_isvolcano == true) then { volcano = false; publicVariable "volcano"; };
		if (_isaaa == true) then { al_aaa = false; publicVariable "al_aaa"; };
		if (_isartillery == true) then { al_art = false; publicVariable "al_art"; };
		if (_ismissile == true) then { al_missile = false; publicVariable "al_missile"; };
		if (_istracer == true) then { al_tracer = false; publicVariable "al_tracer"; };
		if (_issearchlight == true) then { al_search_light = false; publicVariable "al_search_light"; };
		
		// ["Effects Terminated!"] call zen_common_fnc_showMessage;
		["Terminated", "Effects Terminated!", 10] call BIS_fnc_curatorHint;
	},{
		// ["Termination Aborted!"] call zen_common_fnc_showMessage;
		["Aborted", "Effects Termination aborted!", 10] call BIS_fnc_curatorHint;
		playSound "FD_Start_F";
	}] call zen_dialog_fnc_create;

