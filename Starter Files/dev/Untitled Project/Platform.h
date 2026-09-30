#pragma once

//Holds options for different video game platforms

enum class Platform
{
	PC, 
	PlayStation, 
	Xbox, 
	Nintendo,
	Sega,
	Other
};

enum class PlatformVersion
{
	None, 

	PS1, 
	PS2,
	PS3, 
	PS4, 
	PS5,
	PSVita, 
	PSP,

	Xbox, 
	Xbox360, 
	XboxOne, 
	XboxSeries, 

	NES, 
	SNES, 
	N64, 
	GameCube, 
	Wii, 
	WiiU, 
	Switch, 
	Switch2,
	GameBoy, 
	GameBoyColor,
	GameBoyAdvance, 
	DS, 
	ThreeDS,

	Genesis,
	Dreamcast,
	GameGear,

	Other
};

class PlatformInfo
{
private:
	Platform family;
	PlatformVersion version;

public:
	PlatformInfo(Platform family, PlatformVersion version)
		: family(family), version(version)
	{
	};

	Platform getFamily() const
	{
		return family;
	}

	PlatformVersion getVersion() const
	{
		return version;
	}

};