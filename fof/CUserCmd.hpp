#define M_PI		3.14159265358979323846	
#define M_PI_F		((float)(M_PI))	

#ifndef RAD2DEG
#define RAD2DEG( x  )  ( (float)(x) * (float)(180.f / M_PI_F) )
#endif

#ifndef DEG2RAD
#define DEG2RAD( x  )  ( (float)(x) * (float)(M_PI_F / 180.f) )
#endif

#define MOVETYPE_NOCLIP 8
#define MOVETYPE_LADDER 9

#define FL_ONGROUND (1 << 0)
#define	FL_WATERJUMP (1 << 2)
#define	FL_INWATER (1 << 9)
#define	FL_SWIM	(1<<11)

#define IN_ATTACK		(1 << 0)
#define IN_JUMP			(1 << 1)
#define IN_DUCK			(1 << 2)
#define IN_FORWARD		(1 << 3)
#define IN_BACK			(1 << 4)
#define IN_USE			(1 << 5)

class QAngle
{
public:
	float x, y, z;
};
class Vector
{
public:
	float x, y, z;
};

typedef unsigned char byte;

class CUserCmd
{//size = 84
public:
	virtual ~CUserCmd() {};	// 0
	int command_number;			// 4
	int tick_count;				// 8
	QAngle viewangles;			// 12 - 20
	float forwardmove;			// 24
	float sidemove;				// 28
	float upmove;				// 32
	int buttons;				// 36
	byte impulse;				// 40
	char pad0[10];				// 41 - 51
	int random_seed;			// 52
	short mousedx;				// 56
	short mousedy;				// 58
	bool hasbeenpredicted;		// 60
	int pad1[5];				// 64 - 84
};