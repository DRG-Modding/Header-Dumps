// BlueprintGeneratedClass EWC_OverloadShieldGenerator_Facility.EWC_OverloadShieldGenerator_Facility_C
// Size: 0x90 (Inherited: 0x4c)
struct UEWC_OverloadShieldGenerator_Facility_C : UEWC_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	ABP_Facility_PowerStation_GeneratorBase_C* FromGenerator; // 0x58(0x08)
	float NextWaveValue; // 0x60(0x04)
	float OldProgress; // 0x64(0x04)
	int32_t WaveCount; // 0x68(0x04)
	int32_t WavesSent; // 0x6c(0x04)
	FVector WaveOrigin; // 0x70(0x0c)
	UTetherComponent* origintether; // 0x80(0x08)
	UEnemyGroupDescriptor* DroneWave; // 0x88(0x08)

	void SetWaveOrigin(ABP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherstart);
	void GetRandomPlayer(APlayerCharacter* NewParam, bool PlayerFound);
	FVector Get Refinery Location();
	UEnemyWaveManager* GetWaveManager();
	void OnGeneratorSet(ABP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherstart);
	void StartWave();
	void OnWaveCompleted();
	void OnThirdReached(float hackProgress);
	void ExecuteUbergraph_EWC_OverloadShieldGenerator_Facility(int32_t EntryPoint);
};

