// BlueprintGeneratedClass BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C
// Size: 0x34a (Inherited: 0x2b0)
struct ABP_ExplosiveBarrelDispenser_Platform_C : ARessuplyPod {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2b8(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x2c0(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x2c8(0x08)
	struct UWidgetComponent* Widget; // 0x2d0(0x08)
	struct UOutlineComponent* outline; // 0x2d8(0x08)
	struct UTerrainPlacementComponent* TerrainPlacement1; // 0x2e0(0x08)
	struct UChildActorComponent* RightDispenser; // 0x2e8(0x08)
	struct UChildActorComponent* BackDispenser; // 0x2f0(0x08)
	struct UChildActorComponent* LeftDispenser; // 0x2f8(0x08)
	struct UChildActorComponent* ForwardDispenser; // 0x300(0x08)
	struct UPointLightComponent* PointLight; // 0x308(0x08)
	struct UCapsuleComponent* Capsule; // 0x310(0x08)
	struct USkeletalMeshComponent* Drill; // 0x318(0x08)
	struct UAutoCarverComponent* AutoCarver; // 0x320(0x08)
	struct USkeletalMeshComponent* Base; // 0x328(0x08)
	struct AGameEvent* OwningEvent; // 0x330(0x08)
	float OutlineTime; // 0x338(0x04)
	char UnknownData_33C[0x4]; // 0x33c(0x04)
	struct FTimerHandle ResizeCarverTimer; // 0x340(0x08)
	bool ChildrenActive; // 0x348(0x01)
	bool ActivateOnLanding; // 0x349(0x01)

	bool AddEventProgress(float Progress); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.AddEventProgress
	bool AdvanceOneObjective(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.AdvanceOneObjective
	bool SetupEvent(struct AGameEvent* GameEvent); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.SetupEvent
	void OnRep_ChildrenActive(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.OnRep_ChildrenActive
	void SetChildrenReady(bool IsReady); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.SetChildrenReady
	void OnEventOpened(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.OnEventOpened
	void OnEventProgress(float Progress); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.OnEventProgress
	void OnEventTriggered(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.OnEventTriggered
	void OnDropStarted(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.OnDropStarted
	void OnDroppodImpact(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.OnDroppodImpact
	void DeployAnimations(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.DeployAnimations
	void OnEventFinished(bool eventSuccess); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.OnEventFinished
	void ManageOutLines(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.ManageOutLines
	void OnDroppodCloseToImpact(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.OnDroppodCloseToImpact
	void ReceiveBeginPlay(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.ReceiveBeginPlay
	void ResizeCarver(); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.ResizeCarver
	void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature
	void ExecuteUbergraph_BP_ExplosiveBarrelDispenser_Platform(int32_t EntryPoint); // Function BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C.ExecuteUbergraph_BP_ExplosiveBarrelDispenser_Platform
};

