// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 


if (!isServer) exitWith {};

_main_air_object = _this select 0;
_main_air_radius = _this select 1;
_main_air_altitude = _this select 2;

if (!isNil {_main_air_object getVariable "is_ON"}) exitwith {};
_main_air_object setVariable ["is_ON",true,true];

al_aaa = true; publicVariable "al_aaa";

[[_main_air_object, _main_air_radius, _main_air_altitude],"\Root_Effects\Root_Battlescripts\ALambientbattle\battle_flaks_effect.sqf"] remoteExec ["execVM",0,true];
