#pragma once

enum class PlayerState
{
	NORMAL, SELECTING, DELETING
};

enum PlantCode
{
	SUNFLOWER_CODE = 1,
	PEA_CODE = 2,
	ICEPEA_CODE = 3,
	NUT_CODE = 4
};

enum ManagerIndex
{
	GAMEBOARD_INDEX,
	PLANT_MANAGER_INDEX,
	SUNLIGHT_MANAGER_INDEX,
	BULLET_MANAGER_INDEX,
	ZOMBIE_MANAGER_INDEX,
	COLLISION_MANAGER_INDEX,
	STORE_INDEX,
	PLAYER_INDEX,
	LAWNMOWER_MANAGER_INDEX
};

enum StorePlantIndex
{
	SUNFLOWER_INDEX,
	PEA_INDEX,
	ICEPEA_INDEX,
	NUT_INDEX
};

enum class ZombieState
{
	NORMAL, FROZEN
	//, MAX
};

//타일
#define TILE_WIDTH 64
#define TILE_HEIGHT 64
#define TILE_SIZE Size(TILE_WIDTH, TILE_HEIGHT)

#define TILE_GROUND_BRIGHTER_IMAGEPATH L"../Bmp_Resources_ver2/UI/Ground_Brighter.bmp"
#define TILE_GROUND_DARKER_IMAGEPATH L"../Bmp_Resources_ver2/UI/Ground_Darker.bmp"

//잔디깎기
#define LAWNMOWER_WIDTH 60
#define LAWNMOWER_HEIGHT 50
#define LAWNMOWER_SIZE Size(LAWNMOWER_WIDTH, LAWNMOWER_HEIGHT)
#define LAWNMOWER_IMAGEPATH L"../Bmp_Resources_ver2/UI/LawnMower.bmp"

#define LAWNMOWER_MOVESPEED 8

//삽
#define SHOVEL_WIDTH 48
#define SHOVEL_HEIGHT 48
#define SHOVEL_SIZE Size(SHOVEL_WIDTH, SHOVEL_HEIGHT)
#define SHOVEL_IMAGEPATH L"../Bmp_Resources_ver2/UI/Shovel.bmp"

//식물
#define PLANT_WIDTH 64
#define PLANT_HEIGHT 64
#define PLANT_SIZE Size(PLANT_WIDTH, PLANT_HEIGHT)

//식물 - 해바라기 (Sunflower)
#define SUNFLOWER_IMAGEPATH L"../Bmp_Resources_ver2/Plant/Sunflower/Sunflower.bmp"
#define SUNFLOWER_GRAYSCALE_IMAGEPATH L"../Bmp_Resources_ver2/Plant/Sunflower/Sunflower_Grayscale.bmp"
#define SUNFLOWER_COST 50

#define SUNFLOWER_HEALTHPOINT 100

#define INTERVAL_SPAWN_SUNLIGHT_BY_SUNFLOWER 3

//식물 - 완두콩 (Pea)
#define PEA_IMAGEPATH L"../Bmp_Resources_ver2/Plant/Pea/Pea.bmp"
#define PEA_GRAYSCALE_IMAGEPATH L"../Bmp_Resources_ver2/Plant/Pea/Pea_Grayscale.bmp"
#define PEA_COST 100

#define PEA_ATTACKPOWER 25
#define PEA_ATTACKSPEED 2
#define PEA_HEALTHPOINT 100

//식물 - 얼음콩 (IcePea)
#define ICEPEA_IMAGEPATH L"../Bmp_Resources_ver2/Plant/IcePea/IcePea.bmp"
#define ICEPEA_GRAYSCALE_IMAGEPATH L"../Bmp_Resources_ver2/Plant/IcePea/IcePea_Grayscale.bmp"
#define ICEPEA_COST 150

#define ICEPEA_HEALTHPOINT 100
#define ICEPEA_ATTACKPOWER 25
#define ICEPEA_ATTACKSPEED 3

//식물 - 땅콩 (Nut)
#define NUT_IMAGEPATH L"../Bmp_Resources_ver2/Plant/Nut/Nut.bmp"
#define NUT_GRAYSCALE_IMAGEPATH L"../Bmp_Resources_ver2/Plant/Nut/Nut_Grayscale.bmp"
#define NUT_DAMAGED_IMAGEPATH L"../Bmp_Resources_ver2/Plant/Nut/Nut_Damaged.bmp"
#define NUT_EMERGENCY_IMAGEPATH L"../Bmp_Resources_ver2/Plant/Nut/Nut_Emergency.bmp"
#define NUT_COST 75

#define NUT_HEALTHPOINT 300

//햇빛 (자원)
#define SUNLIGHT_WIDTH 40
#define SUNLIGHT_HEIGHT 40
#define SUNLIGHT_SIZE Size(SUNLIGHT_WIDTH, SUNLIGHT_HEIGHT)
#define SUNLIGHT_IMAGEPATH L"../Bmp_Resources_ver2/Sunlight/Sunlight.bmp"
#define SUNLIGHT_MOVESPEED 2

//총알
#define BULLET_WIDTH 16
#define BULLET_HEIGHT 16
#define BULLET_SIZE Size(BULLET_WIDTH, BULLET_HEIGHT)

#define PEA_BULLET_IMAGEPATH L"../Bmp_Resources_ver2/Bullet/PeaBullet.bmp"
#define PEA_BULLET_MOVESPEED 5

#define ICEPEA_BULLET_IMAGEPATH L"../Bmp_Resources_ver2/Bullet/IcePeaBullet.bmp"
#define ICEPEA_BULLET_MOVESPEED 5


//좀비
#define ZOMBIE_WIDTH 47
#define ZOMBIE_HEIGHT 64
#define ZOMBIE_SIZE Size(ZOMBIE_WIDTH, ZOMBIE_HEIGHT)

//일반 좀비
#define ZOMBIE_IMAGEPATH L"../Bmp_Resources_ver2/Zombie/Zombie.bmp"
#define ZOMBIE_FROZEN_IMAGEPATH L"../Bmp_Resources_ver2/Zombie/Zombie_Frozen.bmp"

#define ZOMBIE_HEALTHPOINT 100
#define ZOMBIE_ATTACKPOWER 15
#define ZOMBIE_ATTACKSPEED 1
#define ZOMBIE_MOVESPEED 1

//고깔 좀비
#define FUNNEL_ZOMBIE_IMAGEPATH L"../Bmp_Resources_ver2/Zombie/FunnelZombie/FunnelZombie.bmp"
#define FUNNEL_ZOMBIE_FROZEN_IMAGEPATH L"../Bmp_Resources_ver2/Zombie/FunnelZombie/FunnelZombie_Frozen.bmp"

#define FUNNEL_ZOMBIE_HEALTHPOINT 150
#define FUNNEL_ZOMBIE_ATTACKPOWER 15
#define FUNNEL_ZOMBIE_ATTACKSPEED 1
#define FUNNEL_ZOMBIE_MOVESPEED 1

//장대 좀비
#define POLE_ZOMBIE_IMAGEPATH L"../Bmp_Resources_ver2/Zombie/PoleZombie/PoleZombie.bmp"
#define POLE_ZOMBIE_FROZEN_IMAGEPATH L"../Bmp_Resources_ver2/Zombie/PoleZombie/PoleZombie_Frozen.bmp"

#define POLE_ZOMBIE_HEALTHPOINT 125
#define POLE_ZOMBIE_ATTACKPOWER 15
#define POLE_ZOMBIE_ATTACKSPEED 1
#define POLE_ZOMBIE_MOVESPEED 3

#define POLE_WIDTH 45 * 3
#define POLE_HEIGHT 8
#define POLE_SIZE Size(POLE_WIDTH, POLE_HEIGHT)
#define POLE_IMAGEPATH L"../Bmp_Resources_ver2/Zombie/PoleZombie/Pole.bmp"


//게임보드
#define GAMEBOARD_START_X 64
#define GAMEBOARD_START_Y 90
#define GAMEBOARD_START_LOCATION Point(GAMEBOARD_START_X, GAMEBOARD_START_Y)

#define GAMEBOARD_WIDTH 10
#define GAMEBOARD_HEIGHT 5

//기타
#define TRANSPARENT_COLOR RGB(255,50,150) //크로마키용 핑크
#define DEFAULT_POSITION Point(0, 0)
#define INVISIBLE_POS Point(-512, -512)

//****주기 시간****
//햇빛 소환 주기
#define INTERVAL_SPAWN_SUNLIGHT_BY_NATURAL 4

//좀비 소환 주기
#define INTERVAL_SPAWN_ZOMBIE 5

//****상태이상****
#define DURATION_FROZEN_BY_ICEPEA 5