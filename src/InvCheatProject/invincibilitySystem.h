#pragma once

#include <Spore\BasicIncludes.h>

#define invincibilitySystemPtr intrusive_ptr<invincibilitySystem>
#define invincibiltySystemA (invincibilitySystem::Get())[0]

///
/// In your dllmain Initialize method, add the system like this:
/// ModAPI::AddSimulatorStrategy(new invincibilitySystem(), invincibilitySystem::NOUN_ID);
///

class invincibilitySystem
	: public Simulator::cStrategy
{
public:
	static const uint32_t TYPE = id("InvCheatProject::invincibilitySystem");
	static const uint32_t NOUN_ID = TYPE;

	int AddRef() override;
	int Release() override;
	void Initialize() override;
	void Dispose() override;
	const char* GetName() const override;
	bool Write(Simulator::ISerializerStream* stream) override;
	bool Read(Simulator::ISerializerStream* stream) override;
	bool WriteToXML(Simulator::XmlSerializer* writexml) override;
	void Update(int deltaTime, int deltaGameTime) override;



	void Invincibility(bool inp);


	static invincibilitySystem* Get();
	//
	// You can add more methods here
	//

	static Simulator::Attribute ATTRIBUTES[];

private:

	static invincibilitySystem* sInstance;

	bool running;
	//
	// You can add members here
	//
};