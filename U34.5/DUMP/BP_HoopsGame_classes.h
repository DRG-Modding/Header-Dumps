// BlueprintGeneratedClass BP_HoopsGame.BP_HoopsGame_C
// Size: 0x3bc (Inherited: 0x220)
struct ABP_HoopsGame_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UBoxComponent* R; // 0x228(0x08)
	UBoxComponent* E; // 0x230(0x08)
	UBoxComponent* Box1; // 0x238(0x08)
	UWidgetComponent* Widget Previous Scores; // 0x240(0x08)
	UStaticMeshComponent* Mesh_ScoreBoardPrevious; // 0x248(0x08)
	UWidgetComponent* Widget Score; // 0x250(0x08)
	UStaticMeshComponent* Mesh_Scoreboard; // 0x258(0x08)
	USkeletalMeshComponent* Mesh_SlideAnim; // 0x260(0x08)
	UPointLightComponent* PointLight; // 0x268(0x08)
	UParticleSystemComponent* P_Hoops_Edge; // 0x270(0x08)
	UStaticMeshComponent* Mesh_Forcefield; // 0x278(0x08)
	UBoxComponent* FailCollision; // 0x280(0x08)
	UStaticMeshComponent* RestartButton_Mesh; // 0x288(0x08)
	UBoxComponent* RestartButton_Collider; // 0x290(0x08)
	UBillboardComponent* RestartButton; // 0x298(0x08)
	UBillboardComponent* DestinationRight; // 0x2a0(0x08)
	UBoxComponent* Box; // 0x2a8(0x08)
	UCapsuleComponent* Collision; // 0x2b0(0x08)
	UCapsuleComponent* Capsule5; // 0x2b8(0x08)
	UCapsuleComponent* Capsule4; // 0x2c0(0x08)
	UCapsuleComponent* Capsule3; // 0x2c8(0x08)
	UCapsuleComponent* Capsule2; // 0x2d0(0x08)
	UCapsuleComponent* Capsule1; // 0x2d8(0x08)
	UCapsuleComponent* Capsule; // 0x2e0(0x08)
	UStaticMeshComponent* HoopMesh; // 0x2e8(0x08)
	USceneComponent* Hoop; // 0x2f0(0x08)
	UInstantUsable* InstantUsable; // 0x2f8(0x08)
	UBillboardComponent* DestinationLeft; // 0x300(0x08)
	USceneComponent* DefaultSceneRoot; // 0x308(0x08)
	int32_t CurrentScore; // 0x310(0x04)
	int32_t Cycle; // 0x314(0x04)
	int32_t CycleLastScore; // 0x318(0x04)
	int32_t ComboMultiplier; // 0x31c(0x04)
	int32_t ComboMax; // 0x320(0x04)
	int32_t RedBarrelScore; // 0x324(0x04)
	int32_t BlueBarrelScore; // 0x328(0x04)
	int32_t BarrelComboCountAchievement; // 0x32c(0x04)
	int32_t ComboInitial; // 0x330(0x04)
	FLinearColor Color Combo 1; // 0x334(0x10)
	FLinearColor Color Combo 2; // 0x344(0x10)
	FLinearColor Color Combo 3; // 0x354(0x10)
	ABP_BarrelSpawner_C* BarrelSpawner; // 0x368(0x08)
	TArray<int32_t> Scores; // 0x370(0x10)
	UFSDAchievement* BarrelScoreAchievement; // 0x380(0x08)
	UFSDAchievement* DarwinAwardAchievement; // 0x388(0x08)
	UFSDAchievement* BarrelKickerAchievement; // 0x390(0x08)
	APlayerCharacter* LastActivePlayer; // 0x398(0x08)
	float NextFlipTimeServer; // 0x3a0(0x04)
	bool IsMovingRightServer; // 0x3a4(0x01)
	float NextFlipTimeLocal; // 0x3a8(0x04)
	bool IsMovingRightLocal; // 0x3ac(0x01)
	FRandomStream RandomSeed; // 0x3b0(0x08)
	float MoveTime; // 0x3b8(0x04)

	void OnRep_IsMovingRightServer();
	void OnRep_Scores();
	void GetBarrelScoreData(ABP_Phys_Barrel01_C* Barrel, USoundCue* Audio, ABP_Phys_Barrel01_C* OutBarrel, int32_t Points);
	void OnRep_ComboMultiplier();
	void OnRep_CurrentScore();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Restart();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void StoreScore(int32_t NewScore);
	void BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Cheat_ToggleHoopGameMovement();
	void Set Latest Barrel kicker(APlayerCharacter* Kicked by);
	void On Barrel In Hoop(ABP_Phys_Barrel01_C* Barrel);
	void On Barglass In Hoop(ABar_Glass_Physics_C* Glass);
	void On Player In Hoop(ABP_PlayerCharacter_C* Player);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_HoopsGame(int32_t EntryPoint);
};

