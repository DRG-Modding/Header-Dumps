// BlueprintGeneratedClass ENE_Spider_Swarmer_Radioactive.ENE_Spider_Swarmer_Radioactive_C
// Size: 0x4b8 (Inherited: 0x480)
struct AENE_Spider_Swarmer_Radioactive_C : AENE_Spider_Swarmer_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UPointLightComponent* PointLight; // 0x488(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x490(0x08)
	float Timeline_0_NewTrack_0_74EBECE940422CB700C18C8C76913A5B; // 0x498(0x04)
	char Timeline_0__Direction_74EBECE940422CB700C18C8C76913A5B; // 0x49c(0x01)
	char UnknownData_49D[0x3]; // 0x49d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x4a0(0x08)
	float RadiationDistance; // 0x4a8(0x04)
	float RadiationCheckDelay; // 0x4ac(0x04)
	bool IsRadioactive; // 0x4b0(0x01)
	bool AnyPlayerInRange; // 0x4b1(0x01)
	char UnknownData_4B2[0x2]; // 0x4b2(0x02)
	float RadioactiveLightIntensity; // 0x4b4(0x04)

	void Timeline_0__FinishedFunc(); // Function ENE_Spider_Swarmer_Radioactive.ENE_Spider_Swarmer_Radioactive_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function ENE_Spider_Swarmer_Radioactive.ENE_Spider_Swarmer_Radioactive_C.Timeline_0__UpdateFunc
	void ReceiveBeginPlay(); // Function ENE_Spider_Swarmer_Radioactive.ENE_Spider_Swarmer_Radioactive_C.ReceiveBeginPlay
	void OnDeathBase(); // Function ENE_Spider_Swarmer_Radioactive.ENE_Spider_Swarmer_Radioactive_C.OnDeathBase
	void RadiationLoop(); // Function ENE_Spider_Swarmer_Radioactive.ENE_Spider_Swarmer_Radioactive_C.RadiationLoop
	void ExecuteUbergraph_ENE_Spider_Swarmer_Radioactive(int32_t EntryPoint); // Function ENE_Spider_Swarmer_Radioactive.ENE_Spider_Swarmer_Radioactive_C.ExecuteUbergraph_ENE_Spider_Swarmer_Radioactive
};

