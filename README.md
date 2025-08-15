# Upgrade to Prusa i3 MK2.5 with Slice Engineering Mosquito Hotend

This repository is to help anyone who wants to view how to implement the code needed for the Mosquito hotend.

Be warned as I also have personal changes to certain items listed due to my printer having issues:
#define DEFAULT_MAX_FEEDRATE          {130, 200, 12, 120}      // (mm/sec)   max feedrate (M203) Changed from 200 to 130
#define DEFAULT_MAX_FEEDRATE_SILENT         {120, 172, 12, 120}      // (mm/sec)   max feedrate (M203), silent mode Changed from 172 to 120
#define DEFAULT_MAX_ACCELERATION      {800, 1000, 200, 5000}  // (mm/sec^2) max acceleration (M201) Changed from 1000 to 800

# Original Prusa i3 MK2.5 upgrade


Original Prusa i3 MK2.5 upgrade is a 3D printer project maintained by PRUSA RESEARCH. Originates in RepRap project.

This repository contains SCAD files and STLs of the printed parts related to MK2.5 upgrade. 
This branch contains only parts that are needed for upgrade and are different from MK3 version.

Parts might change until final version of upgrade is released.


**List of printed parts needed for MK2.5 upgrade with versions :**

**MK2.5**
* X-carriage-back.stl
* X-carriage.stl
* Cable-holder.stl
* Rambo-base.stl
* Rambo-doors.stl
* Rambo-hinges.stl
* Extruder-cable-clip.stl
* Heatbed-cable-clip.stl
* Heatbed-cable-cover.stl

**MK3 repository**
* Extruder-body.stl
* Extruder-cover.stl
* nozzle-fan-45deg-support.stl
* nozzle-fan-45deg.stl*
* Extruder-idler.stl
* Filament-sensor-cover.stl
* Idler-plug.stl
 

( *nozzle-fan-45deg is included in the official upgrade package )

