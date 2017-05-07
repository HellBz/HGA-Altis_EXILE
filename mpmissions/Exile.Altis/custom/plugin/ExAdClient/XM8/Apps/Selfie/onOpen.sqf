private ["_camera"];
closeDialog 1;
(player nearObjects  ["Exile_Construction_Abstract_Static", 50]);
//playMusic ["letmetakeaselfie", 9];
player enablesimulation false;
showCinemaBorder true;
_camera = "camera" camCreate (position player);
_camera cameraEffect ["internal","back"];
_camera camSetTarget vehicle player;
_camera camSetRelPos [0,5,2];
_camera camCommit 10;
waitUntil {camCommitted _camera};
player enablesimulation true;
_camera cameraEffect ["terminate","back"];
camDestroy _camera; 

/*
GG_fnc_selfie = {
	try
	{
		if  ((nearestObject [player,'Exile_Construction_Abstract_Static']) distance player < 75) exitWith {
		  throw "Selfie Failed, You are near a base.";
	};

		if (ExileClientPlayerIsInCombat) exitWith {
		 throw "Selfie Failed, You are in combat.";
	};

	[] spawn {
		player enablesimulation false; 
		showCinemaBorder true;
		_camera = "camera" camCreate (player modelToWorld [1,1,2]);
		_camera cameraEffect ["Internal","TOP"];  
		_camera camSetTarget vehicle player;  
		_camera camSetRelPos [0,2,2];  
		_camera camCommit 5;  

		waitUntil {camCommitted _camera};
		cutText ['','WHITE IN'];
		
		//playSound "cam";

		_filepath = "GG\Selfie\GG"+ str(round(random 10000)) +".png";
		_filepathFull = "Documents\Arma 3 - Other Profiles\"+ name player +"\Screenshots\"+_filepath;
		screenshot _filepath;

		uiSleep 2;
		player enablesimulation true;
		_camera cameraEffect ["terminate","back"];
		camDestroy _camera;

		2 cutText [format["Selfie Saved at %1", _filepathFull], "PLAIN DOWN", 1];
	};

	["extraApps", 1] call ExileClient_gui_xm8_slide;
	closeDialog 0;
	}
	catch
	{
		[_exception] spawn {
			UISleep 0.5; 
			["ErrorTitleAndText", ["Selfie", _this select 0]] call ExileClient_gui_toaster_addTemplateToast;
			["extraApps", 1] call ExileClient_gui_xm8_slide;
		};
	};
};

////////////////////////////////////////////////

class CfgSounds
{
    sounds[] = {cam};
    class cam
    {
        name = "cam";
        sound[] = {"\GG\sounds\cam.ogg", 1, 1};
        titles[] = {};
    };	
};

*/
