// BlueprintGeneratedClass BP_StickySpiderWeb_New.BP_StickySpiderWeb_New_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_StickySpiderWeb_New_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x230(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x240(0x08)
	UStaticMeshComponent* SM_SpiderwebPlane01; // 0x248(0x08)
	UBoxComponent* BoxTrigger; // 0x250(0x08)
	USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float Timeline_0_NewTrack_0_A1817B7349EE1CBF83D087BC6F7AC2B7; // 0x260(0x04)
	enum class ETimelineDirection Timeline_0__Direction_A1817B7349EE1CBF83D087BC6F7AC2B7; // 0x264(0x01)
	UTimelineComponent* Timeline_1; // 0x268(0x08)
	UMaterialInstanceDynamic* MaterialInstance; // 0x270(0x08)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void TriggerWeb();
	void ExecuteUbergraph_BP_StickySpiderWeb_New(int32_t EntryPoint);
};

