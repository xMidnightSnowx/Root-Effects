// ORIGINALLY CREATED BY ALIAS
// MODIFIED BY ROOT 


if (!isServer) exitWith {};

_sky_obj = _this select 0;
_sky_alt = _this select 1;

if (!isNil {_sky_obj getVariable "is_auroraON"}) exitwith {}; 
_sky_obj setVariable ["is_auroraON",true,true];

[[_sky_obj, _sky_alt],"\Root_Effects\Root_AmbientSFX\AL_ambient_SFX\aurora_SFX.sqf"] remoteexec ["execvm",0,true];