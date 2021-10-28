/*
 * PlayerMovement.cpp
 *
 *  Created on: 28 oct. 2021
 *      Author: ariel
 */

#include "PlayerMovement.h"

namespace godot
{

	PlayerMovement::PlayerMovement()
	{
		// TODO Auto-generated constructor stub
        PlayerMovementInput = Vector3::ZERO;
        PlayerMouseInput = Vector2::ZERO;
        xRot = 0;

	    //variable para tener en el editor referencia
        anim = nullptr;

		isJumping = false;
		isWalking = false;
		isMoving = false;
		isDying = false;
		isInDeathZone = false;

		//variable para ver en el editor colisicon
		FloorMask = 0;

	   //para ver en el editor
	   FeetTransform = Transform::IDENTITY;

	   //para ver en el editor
	   PlayerCamera = Transform::IDENTITY;

	   //para ver en el editor
	   //Rigidbody PlayerBody; NO ES NECESARIO REFERENCIA A EL MISMO ACA NO HAY COMPONENTES SINO NODOS

	   //variable para ver en el editor
	   Speed = 0;

	   //variable para ver en el editor
       Sensitivity = 0;

       //variable para ver en el editor
       Jumpforce = 0;

       //variable para ver en el editor
       feetSteps = nullptr;
	   //variable para ver en el editor
       shoot = nullptr;

	   //variable para ver en el editor
	   deathZone = nullptr;
	}

	PlayerMovement::~PlayerMovement()
	{
		// TODO Auto-generated destructor stub
	}

	void PlayerMovement::_register_methods()
	{
		//registro los métodos
		register_method("_ready", &PlayerMovement::_ready);
		register_method("_physics_process", &PlayerMovement::_physics_process);
		register_method("_input", &PlayerMovement::_input);
		register_method("MovePlayer", &PlayerMovement::MovePlayer);
		register_method("MovePlayerCamera", &PlayerMovement::MovePlayerCamera);
		register_method("CheckJumping", &PlayerMovement::CheckJumping);
		register_method("CheckMoving", &PlayerMovement::CheckMoving);
		register_method("CheckDeathTime", &PlayerMovement::CheckDeathTime);

		//Variables para ver en el editor
		register_property<PlayerMovement,float>("PlayerMovement", &PlayerMovement::Speed,1 );
		register_property<PlayerMovement,float>("Sensitivity", &PlayerMovement::Sensitivity,1 );
		register_property<PlayerMovement,float>("Jumpforce", &PlayerMovement::Jumpforce,1 );

	}

	void PlayerMovement::_init()
	{
	}

	void PlayerMovement::_ready()
	{
	}

	void PlayerMovement::_physics_process(const real_t delta)
	{
	}

	void PlayerMovement::_input(const Ref<InputEvent> event)
	{
	}

	void PlayerMovement::MovePlayer()
	{
	}

	void PlayerMovement::MovePlayerCamera()
	{
	}

	void PlayerMovement::CheckJumping()
	{
	}

	void PlayerMovement::CheckMoving()
	{
	}

	void PlayerMovement::CheckDeathTime()
	{
	}

} /* namespace godot */
