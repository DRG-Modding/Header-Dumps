// BlueprintGeneratedClass BP_StickySpiderWeb.BP_StickySpiderWeb_C
// Size: 0x288 (Inherited: 0x220)
struct ABP_StickySpiderWeb_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x240(0x08)
	struct UStaticMeshComponent* SM_SpiderwebPlane01; // 0x248(0x08)
	struct UBoxComponent* BoxTrigger; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float Timeline_0_NewTrack_0_7FBFE0904ABD35FA5B540ABBA6E572D9; // 0x260(0x04)
	char Timeline_0__Direction_7FBFE0904ABD35FA5B540ABBA6E572D9; // 0x264(0x01)
	char UnknownData_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* Timeline_1; // 0x268(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x270(0x08)
	struct TArray<struct UTexture*> WebTexture; // 0x278(0x10)

	void UserConstructionScript(); // Function BP_StickySpiderWeb.BP_StickySpiderWeb_C.UserConstructionScript
	void Timeline_0__FinishedFunc(); // Function BP_StickySpiderWeb.BP_StickySpiderWeb_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_StickySpiderWeb.BP_StickySpiderWeb_C.Timeline_0__UpdateFunc
	void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_StickySpiderWeb.BP_StickySpiderWeb_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_StickySpiderWeb.BP_StickySpiderWeb_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void TriggerWeb(); // Function BP_StickySpiderWeb.BP_StickySpiderWeb_C.TriggerWeb
	void ExecuteUbergraph_BP_StickySpiderWeb(int32_t EntryPoint); // Function BP_StickySpiderWeb.BP_StickySpiderWeb_C.ExecuteUbergraph_BP_StickySpiderWeb
};

