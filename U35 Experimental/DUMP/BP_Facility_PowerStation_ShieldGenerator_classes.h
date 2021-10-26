// BlueprintGeneratedClass BP_Facility_PowerStation_ShieldGenerator.BP_Facility_PowerStation_ShieldGenerator_C
// Size: 0x3b0 (Inherited: 0x341)
struct ABP_Facility_PowerStation_ShieldGenerator_C : ABP_Facility_PowerStation_GeneratorBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	UNiagaraComponent* ActiveParticles1; // 0x350(0x08)
	UPathfinderCollisionComponent* PathfinderCollision1; // 0x358(0x08)
	UStaticMeshComponent* SM_Facility_Tower_Base_Dummy_01; // 0x360(0x08)
	UParticleSystemComponent* P_Shield_Generator_DeathSmoke; // 0x368(0x08)
	UNiagaraComponent* Shield Generator effect; // 0x370(0x08)
	UBoxComponent* Box; // 0x378(0x08)
	UBoxComponent* BlockPlayer; // 0x380(0x08)
	UAudioComponent* FacilityPowerStationLoop; // 0x388(0x08)
	UPointLightComponent* Light_Phaser01; // 0x390(0x08)
	UPointLightComponent* Light_Phaser04; // 0x398(0x08)
	UPointLightComponent* Light_Phaser03; // 0x3a0(0x08)
	UPointLightComponent* Light_RightShield; // 0x3a8(0x08)

	void Rep_IsCharged(bool isCharged);
	void ReceiveBeginPlay();
	void LaunchPlates();
	void OnHackingComplete();
	void ExecuteUbergraph_BP_Facility_PowerStation_ShieldGenerator(int32_t EntryPoint);
};

