// BlueprintGeneratedClass BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C
// Size: 0x34a (Inherited: 0x2b0)
struct ABP_ExplosiveBarrelDispenser_Platform_C : ARessuplyPod {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2b8(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x2c0(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x2c8(0x08)
	UWidgetComponent* Widget; // 0x2d0(0x08)
	UOutlineComponent* outline; // 0x2d8(0x08)
	UTerrainPlacementComponent* TerrainPlacement1; // 0x2e0(0x08)
	UChildActorComponent* RightDispenser; // 0x2e8(0x08)
	UChildActorComponent* BackDispenser; // 0x2f0(0x08)
	UChildActorComponent* LeftDispenser; // 0x2f8(0x08)
	UChildActorComponent* ForwardDispenser; // 0x300(0x08)
	UPointLightComponent* PointLight; // 0x308(0x08)
	UCapsuleComponent* Capsule; // 0x310(0x08)
	USkeletalMeshComponent* Drill; // 0x318(0x08)
	UAutoCarverComponent* AutoCarver; // 0x320(0x08)
	USkeletalMeshComponent* Base; // 0x328(0x08)
	AGameEvent* OwningEvent; // 0x330(0x08)
	float OutlineTime; // 0x338(0x04)
	FTimerHandle ResizeCarverTimer; // 0x340(0x08)
	bool ChildrenActive; // 0x348(0x01)
	bool ActivateOnLanding; // 0x349(0x01)

	bool AddEventProgress(float Progress);
	bool AdvanceOneObjective();
	bool SetupEvent(AGameEvent* GameEvent);
	void OnRep_ChildrenActive();
	void SetChildrenReady(bool IsReady);
	void OnEventOpened();
	void OnEventProgress(float Progress);
	void OnEventTriggered();
	void OnDropStarted();
	void OnDroppodImpact();
	void DeployAnimations();
	void OnEventFinished(bool eventSuccess);
	void ManageOutLines();
	void OnDroppodCloseToImpact();
	void ReceiveBeginPlay();
	void ResizeCarver();
	void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
	void ExecuteUbergraph_BP_ExplosiveBarrelDispenser_Platform(int32_t EntryPoint);
};

