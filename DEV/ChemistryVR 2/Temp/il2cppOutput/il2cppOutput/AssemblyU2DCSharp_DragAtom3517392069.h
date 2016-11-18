#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragAtom
struct  DragAtom_t3517392069  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 DragAtom::startingPosition
	Vector3_t4282066566  ___startingPosition_2;
	// System.Boolean DragAtom::tracker
	bool ___tracker_3;
	// System.Boolean DragAtom::moving
	bool ___moving_4;
	// UnityEngine.Vector3 DragAtom::movement_start
	Vector3_t4282066566  ___movement_start_5;
	// UnityEngine.Vector3 DragAtom::movement_end
	Vector3_t4282066566  ___movement_end_6;
	// System.Single DragAtom::speed
	float ___speed_7;
	// System.Single DragAtom::distanceToObject
	float ___distanceToObject_8;
	// UnityEngine.Vector3 DragAtom::originalAngle
	Vector3_t4282066566  ___originalAngle_9;

public:
	inline static int32_t get_offset_of_startingPosition_2() { return static_cast<int32_t>(offsetof(DragAtom_t3517392069, ___startingPosition_2)); }
	inline Vector3_t4282066566  get_startingPosition_2() const { return ___startingPosition_2; }
	inline Vector3_t4282066566 * get_address_of_startingPosition_2() { return &___startingPosition_2; }
	inline void set_startingPosition_2(Vector3_t4282066566  value)
	{
		___startingPosition_2 = value;
	}

	inline static int32_t get_offset_of_tracker_3() { return static_cast<int32_t>(offsetof(DragAtom_t3517392069, ___tracker_3)); }
	inline bool get_tracker_3() const { return ___tracker_3; }
	inline bool* get_address_of_tracker_3() { return &___tracker_3; }
	inline void set_tracker_3(bool value)
	{
		___tracker_3 = value;
	}

	inline static int32_t get_offset_of_moving_4() { return static_cast<int32_t>(offsetof(DragAtom_t3517392069, ___moving_4)); }
	inline bool get_moving_4() const { return ___moving_4; }
	inline bool* get_address_of_moving_4() { return &___moving_4; }
	inline void set_moving_4(bool value)
	{
		___moving_4 = value;
	}

	inline static int32_t get_offset_of_movement_start_5() { return static_cast<int32_t>(offsetof(DragAtom_t3517392069, ___movement_start_5)); }
	inline Vector3_t4282066566  get_movement_start_5() const { return ___movement_start_5; }
	inline Vector3_t4282066566 * get_address_of_movement_start_5() { return &___movement_start_5; }
	inline void set_movement_start_5(Vector3_t4282066566  value)
	{
		___movement_start_5 = value;
	}

	inline static int32_t get_offset_of_movement_end_6() { return static_cast<int32_t>(offsetof(DragAtom_t3517392069, ___movement_end_6)); }
	inline Vector3_t4282066566  get_movement_end_6() const { return ___movement_end_6; }
	inline Vector3_t4282066566 * get_address_of_movement_end_6() { return &___movement_end_6; }
	inline void set_movement_end_6(Vector3_t4282066566  value)
	{
		___movement_end_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(DragAtom_t3517392069, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_distanceToObject_8() { return static_cast<int32_t>(offsetof(DragAtom_t3517392069, ___distanceToObject_8)); }
	inline float get_distanceToObject_8() const { return ___distanceToObject_8; }
	inline float* get_address_of_distanceToObject_8() { return &___distanceToObject_8; }
	inline void set_distanceToObject_8(float value)
	{
		___distanceToObject_8 = value;
	}

	inline static int32_t get_offset_of_originalAngle_9() { return static_cast<int32_t>(offsetof(DragAtom_t3517392069, ___originalAngle_9)); }
	inline Vector3_t4282066566  get_originalAngle_9() const { return ___originalAngle_9; }
	inline Vector3_t4282066566 * get_address_of_originalAngle_9() { return &___originalAngle_9; }
	inline void set_originalAngle_9(Vector3_t4282066566  value)
	{
		___originalAngle_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
