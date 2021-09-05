// BlueprintGeneratedClass BP_CaveVine.BP_CaveVine_C
// Size: 0x2f8 (Inherited: 0x288)
struct ABP_CaveVine_C : ACaveVine {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	USphereComponent* Sphere; // 0x290(0x08)
	UInstantUsable* InstantUsable; // 0x298(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2a0(0x08)
	UBoxComponent* Box; // 0x2a8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x2b0(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x2b8(0x08)
	UMotionAudioController* MotionAudioController; // 0x2c0(0x08)
	UAudioComponent* CaveVine_Tracking; // 0x2c8(0x08)
	UAudioComponent* CaveVine_Idle; // 0x2d0(0x08)
	UOutlineComponent* outline; // 0x2d8(0x08)
	UStaticMeshComponent* HeadMesh; // 0x2e0(0x08)
	UStaticMeshComponent* BaseMesh; // 0x2e8(0x08)
	USphereComponent* SphereCollider; // 0x2f0(0x08)

	void UserConstructionScript();
	void BP_OnInitialized();
	void BP_OnTargetChanged(UHealthComponent* NewTarget);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_BP_CaveVine(int32_t EntryPoint);
};

