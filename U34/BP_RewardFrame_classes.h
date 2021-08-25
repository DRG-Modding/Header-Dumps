// BlueprintGeneratedClass BP_RewardFrame.BP_RewardFrame_C
// Size: 0x34c (Inherited: 0x250)
struct ABP_RewardFrame_C : AEventRewardFrame {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x258(0x08)
	struct USphereComponent* Sphere; // 0x260(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x268(0x08)
	struct UBoxComponent* Box; // 0x270(0x08)
	struct UBoxComponent* UseCollider; // 0x278(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x280(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x288(0x08)
	struct USceneComponent* AttentionLightRoot; // 0x290(0x08)
	struct UPointLightComponent* PointLight2; // 0x298(0x08)
	struct USpotLightComponent* SpotLight; // 0x2a0(0x08)
	struct UPointLightComponent* PointLight; // 0x2a8(0x08)
	struct UPointLightComponent* PointLight1; // 0x2b0(0x08)
	struct UStaticMeshComponent* LightCone; // 0x2b8(0x08)
	struct UOutlineComponent* outline; // 0x2c0(0x08)
	struct UChildActorComponent* Dispenser4; // 0x2c8(0x08)
	struct UChildActorComponent* Dispenser3; // 0x2d0(0x08)
	struct UChildActorComponent* Dispenser2; // 0x2d8(0x08)
	struct UChildActorComponent* Dispenser1; // 0x2e0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f0(0x08)
	float AttentionLightTimeLine_Progress01_7D9ABF3443AD60E5960D44ADCB060072; // 0x2f8(0x04)
	char AttentionLightTimeLine__Direction_7D9ABF3443AD60E5960D44ADCB060072; // 0x2fc(0x01)
	char UnknownData_2FD[0x3]; // 0x2fd(0x03)
	struct UTimelineComponent* AttentionLightTimeLine; // 0x300(0x08)
	struct AGameEvent* OwningEvent; // 0x308(0x08)
	bool EventFinished; // 0x310(0x01)
	char UnknownData_311[0x7]; // 0x311(0x07)
	struct TArray<struct AEventRewardDispenser*> DispenserActors; // 0x318(0x10)
	bool AttentionLightOn; // 0x328(0x01)
	char UnknownData_329[0x7]; // 0x329(0x07)
	struct APlayerCharacter* KeyOwner; // 0x330(0x08)
	struct ABP_ReturningPromotionKey_C* Key; // 0x338(0x08)
	float HeightAboveGround; // 0x340(0x04)
	float Incrementing; // 0x344(0x04)
	struct FMusicHandle MusicHandle; // 0x348(0x04)

	bool AddEventProgress(float Progress); // Function BP_RewardFrame.BP_RewardFrame_C.AddEventProgress
	bool AdvanceOneObjective(); // Function BP_RewardFrame.BP_RewardFrame_C.AdvanceOneObjective
	bool SetupEvent(struct AGameEvent* GameEvent); // Function BP_RewardFrame.BP_RewardFrame_C.SetupEvent
	void GetLocalPlayerDispenser(struct AEventRewardDispenser* OutDispenser); // Function BP_RewardFrame.BP_RewardFrame_C.GetLocalPlayerDispenser
	void AllDispensersFinished(bool IsFinished); // Function BP_RewardFrame.BP_RewardFrame_C.AllDispensersFinished
	void SetupDispenser(struct AEventRewardDispenser* Dispenser); // Function BP_RewardFrame.BP_RewardFrame_C.SetupDispenser
	void GetRandomPlayer(struct APlayerCharacter* Output); // Function BP_RewardFrame.BP_RewardFrame_C.GetRandomPlayer
	void UpdateLights(); // Function BP_RewardFrame.BP_RewardFrame_C.UpdateLights
	void AlignDispensers(); // Function BP_RewardFrame.BP_RewardFrame_C.AlignDispensers
	void StartEventUI(); // Function BP_RewardFrame.BP_RewardFrame_C.StartEventUI
	void UserConstructionScript(); // Function BP_RewardFrame.BP_RewardFrame_C.UserConstructionScript
	void AttentionLightTimeLine__FinishedFunc(); // Function BP_RewardFrame.BP_RewardFrame_C.AttentionLightTimeLine__FinishedFunc
	void AttentionLightTimeLine__UpdateFunc(); // Function BP_RewardFrame.BP_RewardFrame_C.AttentionLightTimeLine__UpdateFunc
	void OnEventOpened(); // Function BP_RewardFrame.BP_RewardFrame_C.OnEventOpened
	void OnEventProgress(float Progress); // Function BP_RewardFrame.BP_RewardFrame_C.OnEventProgress
	void ReceiveBeginPlay(); // Function BP_RewardFrame.BP_RewardFrame_C.ReceiveBeginPlay
	void BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void OnEventFinished(bool eventSuccess); // Function BP_RewardFrame.BP_RewardFrame_C.OnEventFinished
	void OnEventTriggered(); // Function BP_RewardFrame.BP_RewardFrame_C.OnEventTriggered
	void BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature
	void Toggle Attention Light(bool InVisible); // Function BP_RewardFrame.BP_RewardFrame_C.Toggle Attention Light
	void Recall Key(); // Function BP_RewardFrame.BP_RewardFrame_C.Recall Key
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void EnableGravity(); // Function BP_RewardFrame.BP_RewardFrame_C.EnableGravity
	void Cheat_FinishEvent(); // Function BP_RewardFrame.BP_RewardFrame_C.Cheat_FinishEvent
	void ExecuteUbergraph_BP_RewardFrame(int32_t EntryPoint); // Function BP_RewardFrame.BP_RewardFrame_C.ExecuteUbergraph_BP_RewardFrame
};

