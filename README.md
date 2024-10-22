# <center>Mine Detector Fixes</center>
<p align="center">
    <a href="https://github.com/DartsArmaMods/MineDetectorFixes/releases/latest">
        <img src="https://img.shields.io/badge/Version-1.3.0-blue.svg?style=flat-square" alt="MDF Version">
    </a>
    <a href="https://github.com/DartsArmaMods/MineDetectorFixes/issues">
        <img src="https://img.shields.io/github/issues-raw/DartsArmaMods/MineDetectorFixes.svg?style=flat-square&label=Issues" alt="MDF Issues">
    </a>
    <a href="https://steamcommunity.com/sharedfiles/filedetails/?id=3086321202">
        <img src="https://img.shields.io/steam/downloads/3086321202.svg?style=flat-square&label=Downloads" alt="MDF Downloads">
    </a>
    <a href="https://github.com/DartsArmaMods/MineDetectorFixes/blob/main/LICENSE">
        <img src="https://img.shields.io/badge/License-APL-red.svg?style=flat-square" alt="MDF License">
    </a>
    <br>
    <img src="https://img.shields.io/github/actions/workflow/status/DartsArmaMods/MineDetectorFixes/hemtt.yml?style=flat-square&label=HEMTT" alt="HEMTT">
    <img src="https://img.shields.io/github/actions/workflow/status/DartsArmaMods/MineDetectorFixes/arma.yml?style=flat-square&label=Validate" alt="Validate">
</p>

**MineDetectorFixes** (MDF) aims to serve as an "all-in-one" mod to fix various mods breaking vanilla mine detectors, which can be very frustrating for players.

The project is entirely **open-source** and any contributions to fix other mods are welcome.

While containing fixes for several mods, only patches for mods that players have enabled when launching arma will be loaded using the `skipWhenMissingDependencies` flag. This ensures that only relevant compatability patches are loaded.

## Available Patches

- [Just Like The Simulations - The Great War](https://steamcommunity.com/sharedfiles/filedetails/?id=1940589429)
- [Just Like The Simulations - Contraband](https://steamcommunity.com/sharedfiles/filedetails/?id=1875369298)
- [cTab](https://steamcommunity.com/sharedfiles/filedetails/?id=871504836)
  - **Only the original cTab is broken. You should be using [cTab NSWDG Edition](https://steamcommunity.com/sharedfiles/filedetails/?id=2511318948) anyway.**
- [ACE 3 Extension (Placeables)](https://steamcommunity.com/sharedfiles/filedetails/?id=866772689)
- [Lightsabers and Force](https://steamcommunity.com/sharedfiles/filedetails/?id=2323185592)
- [WebKnight Flashlights and Headlamps](https://steamcommunity.com/sharedfiles/filedetails/?id=2572487482)
- [Zombies and Demons](https://steamcommunity.com/sharedfiles/filedetails/?id=501966277)
- [Faces of War](https://steamcommunity.com/sharedfiles/filedetails/?id=891433622)

## Contributing

Users are welcome to create a compatability patch for a mod by using the [example patch](./extras/compat) as a base.

### Submitting issues and requesting patches

If you find a bug in the mod or want to request a compatability patch for another mod, you can do so on the [Issue Tracker](https://github.com/DartsArmaMods/MineDetectorFixes/issues). Be sure to apply the appropiate label for what you are reporting.

### Testing & building

MDF is built using [HEMTT](https://github.com/BrettMayson/HEMTT). There are bat files included in [tools/](https://github.com/DartsArmaMods/MineDetectorFixes/tree/main/tools) to automatically update the mod version when building and releasing.

For local testing, `hemtt launch` can be used.