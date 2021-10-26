// BlueprintGeneratedClass GM_Facility.GM_Facility_C
// Size: 0x5b8 (Inherited: 0x538)
struct AGM_Facility_C : ABP_NetworkPlayGameMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	TArray<ABP_SmallGenerator_C*> generators; // 0x540(0x10)
	UOBJ_1st_Facility_C* Objective; // 0x550(0x08)
	ABP_MainFacility_DataVault_C* mainFacility; // 0x558(0x08)
	AActor* ActivatorClass; // 0x560(0x08)
	AActor* FacilityClass; // 0x568(0x08)
	ARessuplyPod* FacilityGeneratorClass; // 0x570(0x08)
	UEWC_Base_C* WaveMusic; // 0x578(0x08)
	TArray<int32_t> RoomsToSpawnIn; // 0x580(0x10)
	int32_t activations; // 0x590(0x04)
	int32_t current; // 0x594(0x04)
	ABP_Facility_PowerStation_GeneratorBase_C* LastGenerator; // 0x598(0x08)
	TArray<UEWC_OverloadShieldGenerator_Facility_C*> ActiveWaves; // 0x5a0(0x10)
	FMusicHandle MusicHandle; // 0x5b0(0x04)
	int32_t GeneratorsCalled; // 0x5b4(0x04)

	void StopOverChargerWave(ABP_Facility_PowerStation_GeneratorBase_C* WaveOrigin);
	void StartOverChargerWave(ABP_Facility_PowerStation_GeneratorBase_C* ShieldGenerator, UTetherComponent* tetherlineStart);
	void GetGeneratorRooms(TArray<int32_t> Array);
	void GetTargetRooms();
	void SetObjective(UOBJ_1st_Facility_C* Objective);
	void FacilityActivated();
	void OnFacilityDestroyed();
	void Damaged();
	void SpawnMissionCriticalItems();
	void ReceiveBeginPlay();
	void GeneratorCharged(ABP_Facility_PowerStation_GeneratorBase_C* Generator);
	void OnOverChargerCalled(FVector Location, int32_t roomIndex);
	void SubscribeToShieldEvents(ABP_Facility_PowerStation_GeneratorBase_C* Generator);
	void Recieve_Charged(ABP_Facility_PowerStation_GeneratorBase_C* Generator);
	void Recieve_ChargerCalled(FVector Location, int32_t roomIndex);
	void Recieve_FirstConnected(ABP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherlineStart);
	void OnObjectivesInitialized();
	void DonkeyButtonPressed();
	void ExecuteUbergraph_GM_Facility(int32_t EntryPoint);
};

