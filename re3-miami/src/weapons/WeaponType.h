#pragma once

enum eWeaponType
{
	WEAPONTYPE_UNARMED,
	WEAPONTYPE_BRASSKNUCKLE,
	WEAPONTYPE_SCREWDRIVER,
	WEAPONTYPE_GOLFCLUB,
	WEAPONTYPE_NIGHTSTICK,
	WEAPONTYPE_KNIFE,
	WEAPONTYPE_BASEBALLBAT,
	WEAPONTYPE_HAMMER,
	WEAPONTYPE_CLEAVER,
	WEAPONTYPE_MACHETE,
	WEAPONTYPE_KATANA,
	WEAPONTYPE_CHAINSAW,
	WEAPONTYPE_GRENADE,
	WEAPONTYPE_DETONATOR_GRENADE,
	WEAPONTYPE_TEARGAS,
	WEAPONTYPE_MOLOTOV,
	WEAPONTYPE_ROCKET,
	WEAPONTYPE_COLT45,
	WEAPONTYPE_PYTHON,
	WEAPONTYPE_SHOTGUN,
	WEAPONTYPE_SPAS12_SHOTGUN,
	WEAPONTYPE_STUBBY_SHOTGUN,
	WEAPONTYPE_TEC9,
	WEAPONTYPE_UZI,
	WEAPONTYPE_SILENCED_INGRAM,
	WEAPONTYPE_MP5,
	WEAPONTYPE_M4,
	WEAPONTYPE_RUGER,
	WEAPONTYPE_SNIPERRIFLE,
	WEAPONTYPE_LASERSCOPE,
	WEAPONTYPE_ROCKETLAUNCHER,
	WEAPONTYPE_FLAMETHROWER,
	WEAPONTYPE_M60,
	WEAPONTYPE_MINIGUN,
	WEAPONTYPE_DETONATOR,
	WEAPONTYPE_HELICANNON,
	WEAPONTYPE_CAMERA,
	WEAPONTYPE_TOTALWEAPONS = 37,
	WEAPONTYPE_HEALTH = 37,
	WEAPONTYPE_ARMOUR,
	WEAPONTYPE_RAMMEDBYCAR,
	WEAPONTYPE_RUNOVERBYCAR,
	WEAPONTYPE_EXPLOSION,
	WEAPONTYPE_UZI_DRIVEBY,
	WEAPONTYPE_DROWNING,
	WEAPONTYPE_FALL,
	WEAPONTYPE_UNIDENTIFIED,
	WEAPONTYPE_ANYMELEE,
	WEAPONTYPE_ANYWEAPON
};

enum {
	WEAPONSLOT_UNARMED = 0,
	WEAPONSLOT_MELEE,
	WEAPONSLOT_PROJECTILE,
	WEAPONSLOT_HANDGUN,
	WEAPONSLOT_SHOTGUN,
	WEAPONSLOT_SUBMACHINEGUN,
	WEAPONSLOT_RIFLE,
	WEAPONSLOT_HEAVY,
	WEAPONSLOT_SNIPER,
	WEAPONSLOT_OTHER,
	TOTAL_WEAPON_SLOTS
};

enum eWeaponFire {
	WEAPON_FIRE_MELEE,
	WEAPON_FIRE_INSTANT_HIT,
	WEAPON_FIRE_PROJECTILE,
	WEAPON_FIRE_AREA_EFFECT,
	WEAPON_FIRE_CAMERA
};

// Taken from MTA SA, seems it's unchanged
enum eWeaponState
{
	WEAPONSTATE_READY,
	WEAPONSTATE_FIRING,
	WEAPONSTATE_RELOADING,
	WEAPONSTATE_OUT_OF_AMMO,
	WEAPONSTATE_MELEE_MADECONTACT
};