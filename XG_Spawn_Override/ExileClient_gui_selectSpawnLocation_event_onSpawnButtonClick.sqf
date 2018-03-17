if(ExileClientSelectedSpawnLocationMarkerName in XG_BaseMarkers) then
{
 if(isNil "XG_LastSpawnLocation") then
 {
  XG_LastSpawnLocation = [];
 };
 XG_LastSpawnLocation pushBack ExileClientSelectedSpawnLocationMarkerName;
 _currentSpawn = ExileClientSelectedSpawnLocationMarkerName;
 [
  60, // Default is 15 minutes.
  {
   XG_LastSpawnLocation deleteAt 0;
  },
  [],
  false
 ] call ExileClient_system_thread_addTask;
};

ExileClientSpawnLocationSelectionDone = true;
closeDialog 1;

true 