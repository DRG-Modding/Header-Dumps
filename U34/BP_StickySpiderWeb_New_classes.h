// BlueprintGeneratedClass BP_StickySpiderWeb_New.BP_StickySpiderWeb_New_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_StickySpiderWeb_New_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x240(0x08)
	struct UStaticMeshComponent* SM_SpiderwebPlane01; // 0x248(0x08)
	struct UBoxComponent* BoxTrigger; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float Timeline_0_NewTrack_0_A1817B7349EE1CBF83D087BC6F7AC2B7; // 0x260(0x04)
	char Timeline_0__Direction_A1817B7349EE1CBF83D087BC6F7AC2B7; // 0x264(0x01)
	char UnknownData_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* Timeline_1; // 0x268(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x270(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_StickySpiderWeb_New.BP_StickySpiderWeb_New_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_StickySpiderWeb_New.BP_StickySpiderWeb_New_C.Timeline_0__UpdateFunc
	void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_StickySpiderWeb_New.BP_StickySpiderWeb_New_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_StickySpiderWeb_New.BP_StickySpiderWeb_New_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_StickySpiderWeb_New.BP_StickySpiderWeb_New_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void TriggerWeb(); // Function BP_StickySpiderWeb_New.BP_StickySpiderWeb_New_C.TriggerWeb
	void ExecuteUbergraph_BP_StickySpiderWeb_New(int32_t EntryPoint); // Function BP_StickySpiderWeb_New.BP_StickySpiderWeb_New_C.ExecuteUbergraph_BP_StickySpiderWeb_New
};

