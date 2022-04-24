// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 


private ["_main_missiles_object"];

if (!isServer) exitWith {};

_main_missiles_object = _this select 0;

if (!isNil {_main_missiles_object getVariable "is_ON"}) exitwith {};
_main_missiles_object setVariable ["is_ON",true,true];

al_missile = true; publicVariable "al_missile";

[[_main_missiles_object],"\Root_Effects\Root_Battlescripts\ALambientbattle\battle_missiles_effect.sqf"] remoteExec ["execVM",0,true];