#include "stdafx.h"
#include "invincibilitySystem.h"

/// AUTOGENERATED METHODS ///



int invincibilitySystem::AddRef() {
	return Simulator::cStrategy::AddRef();
}
int invincibilitySystem::Release() {
	return Simulator::cStrategy::Release();
}

const char* invincibilitySystem::GetName() const {
	return "InvCheatProject::invincibilitySystem";
}

bool invincibilitySystem::Write(Simulator::ISerializerStream* stream)
{
	return Simulator::ClassSerializer(this, ATTRIBUTES).Write(stream);
}
bool invincibilitySystem::Read(Simulator::ISerializerStream* stream)
{
	return Simulator::ClassSerializer(this, ATTRIBUTES).Read(stream);
}

bool invincibilitySystem::WriteToXML(Simulator::XmlSerializer* writexml)
{
	return false;
}

/// END OF AUTOGENERATED METHODS ///
////////////////////////////////////

Simulator::Attribute invincibilitySystem::ATTRIBUTES[] = {
	// Add more attributes here
	// This one must always be at the end
	Simulator::Attribute()
};

void invincibilitySystem::Initialize() {
	sInstance = this;
	bool running = false;
	
}

void invincibilitySystem::Dispose() {
	
}

void invincibilitySystem::Update(int deltaTime, int deltaGameTime) {
	
	if (running) {
	
		if (Simulator::GetGameModeID() == GameModeIDs::kGameSpace) {
		
			SimulatorPlayerUFO.GetUFO()->SetHealthPoints(SimulatorPlayerUFO.GetUFO()->GetMaxHitPoints());
		
		}
	
	
	}


}

void invincibilitySystem::Invincibility(bool inp)
{
	running = inp;


}

invincibilitySystem* invincibilitySystem::Get()
{
	return sInstance;
}


invincibilitySystem* invincibilitySystem::sInstance;