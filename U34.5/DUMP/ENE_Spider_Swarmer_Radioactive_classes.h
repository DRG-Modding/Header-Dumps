// BlueprintGeneratedClass ENE_Spider_Swarmer_Radioactive.ENE_Spider_Swarmer_Radioactive_C
// Size: 0x4b8 (Inherited: 0x480)
struct AENE_Spider_Swarmer_Radioactive_C : AENE_Spider_Swarmer_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	UPointLightComponent* PointLight; // 0x488(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x490(0x08)
	float Timeline_0_NewTrack_0_74EBECE940422CB700C18C8C76913A5B; // 0x498(0x04)
	enum class ETimelineDirection Timeline_0__Direction_74EBECE940422CB700C18C8C76913A5B; // 0x49c(0x01)
	UTimelineComponent* Timeline_1; // 0x4a0(0x08)
	float RadiationDistance; // 0x4a8(0x04)
	float RadiationCheckDelay; // 0x4ac(0x04)
	bool IsRadioactive; // 0x4b0(0x01)
	bool AnyPlayerInRange; // 0x4b1(0x01)
	float RadioactiveLightIntensity; // 0x4b4(0x04)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void OnDeathBase();
	void RadiationLoop();
	void ExecuteUbergraph_ENE_Spider_Swarmer_Radioactive(int32_t EntryPoint);
};

