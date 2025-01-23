#include "stdafx.h"
#include "inv.h"
#include "invincibilitySystem.h"

inv::inv()
{
} 


inv::~inv()
{
}


void inv::ParseLine(const ArgScript::Line& line)
{
	App::ConsolePrintF("IM UNSTOPPABRUH!!!!!!!");


	invincibiltySystemA.Invincibility(true);
	// This method is called when your cheat is invoked.
	// Put your cheat code here.
}

const char* inv::GetDescription(ArgScript::DescriptionMode mode) const
{
	if (mode == ArgScript::DescriptionMode::Basic) {
		return "This cheat makes you INVINCINVINICNIBMEL !!!!!!!!!.";
	}
	else {
		return "inv: Makes you invincible in the space stage.";
	}
}
