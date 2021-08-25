// BlueprintGeneratedClass BP_SeaUrchin.BP_SeaUrchin_C
// Size: 0x2ac (Inherited: 0x220)
struct ABP_SeaUrchin_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x228(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x230(0x08)
	struct UStatusEffectTriggerComponent* StatusEffectTrigger1; // 0x238(0x08)
	struct USphereComponent* BlockingSphere; // 0x240(0x08)
	struct USphereComponent* Sphere; // 0x248(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x250(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x258(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x260(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x268(0x08)
	float Timeline_0_NewTrack_3_92B13E094B2DF1BDD1B63E8B51041D1A; // 0x270(0x04)
	float Timeline_0_Displacement_Offset_92B13E094B2DF1BDD1B63E8B51041D1A; // 0x274(0x04)
	char Timeline_0__Direction_92B13E094B2DF1BDD1B63E8B51041D1A; // 0x278(0x01)
	char UnknownData_279[0x7]; // 0x279(0x07)
	struct UTimelineComponent* Timeline_1; // 0x280(0x08)
	float Reduce_Offset_NewTrack_3_C5AFCD9F419B0285FA202B94564C9676; // 0x288(0x04)
	float Reduce_Offset_Displacement_Offset_C5AFCD9F419B0285FA202B94564C9676; // 0x28c(0x04)
	char Reduce_Offset__Direction_C5AFCD9F419B0285FA202B94564C9676; // 0x290(0x01)
	char UnknownData_291[0x7]; // 0x291(0x07)
	struct UTimelineComponent* Reduce Offset; // 0x298(0x08)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x2a0(0x08)
	float InitialDisplacementOffset; // 0x2a8(0x04)

	void UserConstructionScript(); // Function BP_SeaUrchin.BP_SeaUrchin_C.UserConstructionScript
	void Reduce Offset__FinishedFunc(); // Function BP_SeaUrchin.BP_SeaUrchin_C.Reduce Offset__FinishedFunc
	void Reduce Offset__UpdateFunc(); // Function BP_SeaUrchin.BP_SeaUrchin_C.Reduce Offset__UpdateFunc
	void Timeline_0__FinishedFunc(); // Function BP_SeaUrchin.BP_SeaUrchin_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_SeaUrchin.BP_SeaUrchin_C.Timeline_0__UpdateFunc
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_SeaUrchin.BP_SeaUrchin_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount); // Function BP_SeaUrchin.BP_SeaUrchin_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_SeaUrchin.BP_SeaUrchin_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_SeaUrchin.BP_SeaUrchin_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void ExecuteUbergraph_BP_SeaUrchin(int32_t EntryPoint); // Function BP_SeaUrchin.BP_SeaUrchin_C.ExecuteUbergraph_BP_SeaUrchin
};

