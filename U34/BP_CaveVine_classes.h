// BlueprintGeneratedClass BP_CaveVine.BP_CaveVine_C
// Size: 0x2f8 (Inherited: 0x288)
struct ABP_CaveVine_C : ACaveVine {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USphereComponent* Sphere; // 0x290(0x08)
	struct UInstantUsable* InstantUsable; // 0x298(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2a0(0x08)
	struct UBoxComponent* Box; // 0x2a8(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x2b0(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x2b8(0x08)
	struct UMotionAudioController* MotionAudioController; // 0x2c0(0x08)
	struct UAudioComponent* CaveVine_Tracking; // 0x2c8(0x08)
	struct UAudioComponent* CaveVine_Idle; // 0x2d0(0x08)
	struct UOutlineComponent* outline; // 0x2d8(0x08)
	struct UStaticMeshComponent* HeadMesh; // 0x2e0(0x08)
	struct UStaticMeshComponent* BaseMesh; // 0x2e8(0x08)
	struct USphereComponent* SphereCollider; // 0x2f0(0x08)

	void UserConstructionScript(); // Function BP_CaveVine.BP_CaveVine_C.UserConstructionScript
	void BP_OnInitialized(); // Function BP_CaveVine.BP_CaveVine_C.BP_OnInitialized
	void BP_OnTargetChanged(struct UHealthComponent* NewTarget); // Function BP_CaveVine.BP_CaveVine_C.BP_OnTargetChanged
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_CaveVine.BP_CaveVine_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature
	void ExecuteUbergraph_BP_CaveVine(int32_t EntryPoint); // Function BP_CaveVine.BP_CaveVine_C.ExecuteUbergraph_BP_CaveVine
};

