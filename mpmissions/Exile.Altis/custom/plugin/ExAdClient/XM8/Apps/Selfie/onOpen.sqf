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