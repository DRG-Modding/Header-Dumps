// BlueprintGeneratedClass BP_SeaUrchin.BP_SeaUrchin_C
// Size: 0x2ac (Inherited: 0x220)
struct ABP_SeaUrchin_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x228(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x230(0x08)
	UStatusEffectTriggerComponent* StatusEffectTrigger1; // 0x238(0x08)
	USphereComponent* BlockingSphere; // 0x240(0x08)
	USphereComponent* Sphere; // 0x248(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x250(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x258(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x260(0x08)
	UStaticMeshComponent* StaticMesh; // 0x268(0x08)
	float Timeline_0_NewTrack_3_92B13E094B2DF1BDD1B63E8B51041D1A; // 0x270(0x04)
	float Timeline_0_Displacement_Offset_92B13E094B2DF1BDD1B63E8B51041D1A; // 0x274(0x04)
	enum class ETimelineDirection Timeline_0__Direction_92B13E094B2DF1BDD1B63E8B51041D1A; // 0x278(0x01)
	UTimelineComponent* Timeline_1; // 0x280(0x08)
	float Reduce_Offset_NewTrack_3_C5AFCD9F419B0285FA202B94564C9676; // 0x288(0x04)
	float Reduce_Offset_Displacement_Offset_C5AFCD9F419B0285FA202B94564C9676; // 0x28c(0x04)
	enum class ETimelineDirection Reduce_Offset__Direction_C5AFCD9F419B0285FA202B94564C9676; // 0x290(0x01)
	UTimelineComponent* Reduce Offset; // 0x298(0x08)
	UMaterialInstanceDynamic* Dynamic Material; // 0x2a0(0x08)
	float InitialDisplacementOffset; // 0x2a8(0x04)

	void UserConstructionScript();
	void Reduce Offset__FinishedFunc();
	void Reduce Offset__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_SeaUrchin(int32_t EntryPoint);
};

