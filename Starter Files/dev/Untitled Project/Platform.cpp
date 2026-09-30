#include "Platform.h"

//Implent Validation to protect against Platform and PlatformVersion mismatch

bool isValidPlatform(Platform family, PlatformVersion version)
{
	switch (family)
	{
	case Platform::PC:
		return version == PlatformVersion::None;

	case Platform::PlayStation:
		return version == PlatformVersion::PS1 ||
			version == PlatformVersion::PS2 ||
			version == PlatformVersion::PS3 ||
			version == PlatformVersion::PS4 ||
			version == PlatformVersion::PS5 ||
			version == PlatformVersion::PSVita ||
			version == PlatformVersion::PSP;

	case Platform::Xbox:
		return version == PlatformVersion::Xbox ||
			version == PlatformVersion::Xbox360 ||
			version == PlatformVersion::XboxOne ||
			version == PlatformVersion::XboxSeries;

	case Platform::Nintendo:
		return version == PlatformVersion::NES ||
			version == PlatformVersion::SNES ||
			version == PlatformVersion::N64 ||
			version == PlatformVersion::GameCube ||
			version == PlatformVersion::Wii ||
			version == PlatformVersion::WiiU ||
			version == PlatformVersion::Switch ||
			version == PlatformVersion::Switch2 ||
			version == PlatformVersion::GameBoy ||
			version == PlatformVersion::GameBoyColor ||
			version == PlatformVersion::GameBoyAdvance ||
			version == PlatformVersion::DS ||
			version == PlatformVersion::ThreeDS;

	case Platform::Sega:
		return version == PlatformVersion::Genesis ||
			version == PlatformVersion::Dreamcast ||
			version == PlatformVersion::GameGear; 

	case Platform::Other:
		return version == PlatformVersion::Other;
	}

	return false;
}
