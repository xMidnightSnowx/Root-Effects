// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 


if (!isServer) exitWith {};

private ["_xx","_yy","_zz","_dire"];
_main_art_object = _this select 0;
_main_art_radius = _this select 1;
_activation_distance = _this select 2;

if (!isNil {_main_art_object getVariable "is_ON"}) exitwith {};
_main_art_object setVariable ["is_ON",true,true];

al_art = true; publicVariable "al_art";

al_art_sunet_play = false;
publicVariable "al_art_sunet_play";	

[] spawn {while {al_art} do {	sleep 35 + random 2; al_art_sunet_play = false; publicVariable "al_art_sunet_play"}};

[[_main_art_object, _main_art_radius, _activation_distance],"\Root_Effects\Root_Battlescripts\ALambientbattle\battle_art_effect.sqf"] remoteExec ["execVM",0,true];