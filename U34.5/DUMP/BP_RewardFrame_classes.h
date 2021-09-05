// BlueprintGeneratedClass BP_RewardFrame.BP_RewardFrame_C
// Size: 0x34c (Inherited: 0x250)
struct ABP_RewardFrame_C : AEventRewardFrame {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x258(0x08)
	USphereComponent* Sphere; // 0x260(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x268(0x08)
	UBoxComponent* Box; // 0x270(0x08)
	UBoxComponent* UseCollider; // 0x278(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x280(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x288(0x08)
	USceneComponent* AttentionLightRoot; // 0x290(0x08)
	UPointLightComponent* PointLight2; // 0x298(0x08)
	USpotLightComponent* SpotLight; // 0x2a0(0x08)
	UPointLightComponent* PointLight; // 0x2a8(0x08)
	UPointLightComponent* PointLight1; // 0x2b0(0x08)
	UStaticMeshComponent* LightCone; // 0x2b8(0x08)
	UOutlineComponent* outline; // 0x2c0(0x08)
	UChildActorComponent* Dispenser4; // 0x2c8(0x08)
	UChildActorComponent* Dispenser3; // 0x2d0(0x08)
	UChildActorComponent* Dispenser2; // 0x2d8(0x08)
	UChildActorComponent* Dispenser1; // 0x2e0(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x2e8(0x08)
	USceneComponent* DefaultSceneRoot; // 0x2f0(0x08)
	float AttentionLightTimeLine_Progress01_7D9ABF3443AD60E5960D44ADCB060072; // 0x2f8(0x04)
	enum class ETimelineDirection AttentionLightTimeLine__Direction_7D9ABF3443AD60E5960D44ADCB060072; // 0x2fc(0x01)
	UTimelineComponent* AttentionLightTimeLine; // 0x300(0x08)
	AGameEvent* OwningEvent; // 0x308(0x08)
	bool EventFinished; // 0x310(0x01)
	TArray<AEventRewardDispenser*> DispenserActors; // 0x318(0x10)
	bool AttentionLightOn; // 0x328(0x01)
	APlayerCharacter* KeyOwner; // 0x330(0x08)
	ABP_ReturningPromotionKey_C* Key; // 0x338(0x08)
	float HeightAboveGround; // 0x340(0x04)
	float Incrementing; // 0x344(0x04)
	FMusicHandle MusicHandle; // 0x348(0x04)

	bool AddEventProgress(float Progress);
	bool AdvanceOneObjective();
	bool SetupEvent(AGameEvent* GameEvent);
	void GetLocalPlayerDispenser(AEventRewardDispenser* OutDispenser);
	void AllDispensersFinished(bool IsFinished);
	void SetupDispenser(AEventRewardDispenser* Dispenser);
	void GetRandomPlayer(APlayerCharacter* Output);
	void UpdateLights();
	void AlignDispensers();
	void StartEventUI();
	void UserConstructionScript();
	void AttentionLightTimeLine__FinishedFunc();
	void AttentionLightTimeLine__UpdateFunc();
	void OnEventOpened();
	void OnEventProgress(float Progress);
	void ReceiveBeginPlay();
	void BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnEventFinished(bool eventSuccess);
	void OnEventTriggered();
	void BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool canUse);
	void Toggle Attention Light(bool InVisible);
	void Recall Key();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void EnableGravity();
	void Cheat_FinishEvent();
	void ExecuteUbergraph_BP_RewardFrame(int32_t EntryPoint);
};

