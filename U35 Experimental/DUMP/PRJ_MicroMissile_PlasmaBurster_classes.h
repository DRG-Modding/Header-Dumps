// BlueprintGeneratedClass PRJ_MicroMissile_PlasmaBurster.PRJ_MicroMissile_PlasmaBurster_C
// Size: 0x400 (Inherited: 0x3d4)
struct APRJ_MicroMissile_PlasmaBurster_C : APRJ_MicroMissile_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	UStaticMeshComponent* SM_HandGrenade_I; // 0x3e0(0x08)
	UDamageComponent* PenetrationDamage; // 0x3e8(0x08)
	int32_t MaxPawnImpacts; // 0x3f0(0x04)
	USceneComponent* Homing Target; // 0x3f8(0x08)

	void OnInitialized();
	void PenetrationEvent(FHitResult ImpactResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PRJ_MicroMissile_PlasmaBurster(int32_t EntryPoint);
};

