// BlueprintGeneratedClass BP_HoopsGame.BP_HoopsGame_C
// Size: 0x3bc (Inherited: 0x220)
struct ABP_HoopsGame_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* R; // 0x228(0x08)
	struct UBoxComponent* E; // 0x230(0x08)
	struct UBoxComponent* Box1; // 0x238(0x08)
	struct UWidgetComponent* Widget Previous Scores; // 0x240(0x08)
	struct UStaticMeshComponent* Mesh_ScoreBoardPrevious; // 0x248(0x08)
	struct UWidgetComponent* Widget Score; // 0x250(0x08)
	struct UStaticMeshComponent* Mesh_Scoreboard; // 0x258(0x08)
	struct USkeletalMeshComponent* Mesh_SlideAnim; // 0x260(0x08)
	struct UPointLightComponent* PointLight; // 0x268(0x08)
	struct UParticleSystemComponent* P_Hoops_Edge; // 0x270(0x08)
	struct UStaticMeshComponent* Mesh_Forcefield; // 0x278(0x08)
	struct UBoxComponent* FailCollision; // 0x280(0x08)
	struct UStaticMeshComponent* RestartButton_Mesh; // 0x288(0x08)
	struct UBoxComponent* RestartButton_Collider; // 0x290(0x08)
	struct UBillboardComponent* RestartButton; // 0x298(0x08)
	struct UBillboardComponent* DestinationRight; // 0x2a0(0x08)
	struct UBoxComponent* Box; // 0x2a8(0x08)
	struct UCapsuleComponent* Collision; // 0x2b0(0x08)
	struct UCapsuleComponent* Capsule5; // 0x2b8(0x08)
	struct UCapsuleComponent* Capsule4; // 0x2c0(0x08)
	struct UCapsuleComponent* Capsule3; // 0x2c8(0x08)
	struct UCapsuleComponent* Capsule2; // 0x2d0(0x08)
	struct UCapsuleComponent* Capsule1; // 0x2d8(0x08)
	struct UCapsuleComponent* Capsule; // 0x2e0(0x08)
	struct UStaticMeshComponent* HoopMesh; // 0x2e8(0x08)
	struct USceneComponent* Hoop; // 0x2f0(0x08)
	struct UInstantUsable* InstantUsable; // 0x2f8(0x08)
	struct UBillboardComponent* DestinationLeft; // 0x300(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x308(0x08)
	int32_t CurrentScore; // 0x310(0x04)
	int32_t Cycle; // 0x314(0x04)
	int32_t CycleLastScore; // 0x318(0x04)
	int32_t ComboMultiplier; // 0x31c(0x04)
	int32_t ComboMax; // 0x320(0x04)
	int32_t RedBarrelScore; // 0x324(0x04)
	int32_t BlueBarrelScore; // 0x328(0x04)
	int32_t BarrelComboCountAchievement; // 0x32c(0x04)
	int32_t ComboInitial; // 0x330(0x04)
	struct FLinearColor Color Combo 1; // 0x334(0x10)
	struct FLinearColor Color Combo 2; // 0x344(0x10)
	struct FLinearColor Color Combo 3; // 0x354(0x10)
	char UnknownData_364[0x4]; // 0x364(0x04)
	struct ABP_BarrelSpawner_C* BarrelSpawner; // 0x368(0x08)
	struct TArray<int32_t> Scores; // 0x370(0x10)
	struct UFSDAchievement* BarrelScoreAchievement; // 0x380(0x08)
	struct UFSDAchievement* DarwinAwardAchievement; // 0x388(0x08)
	struct UFSDAchievement* BarrelKickerAchievement; // 0x390(0x08)
	struct APlayerCharacter* LastActivePlayer; // 0x398(0x08)
	float NextFlipTimeServer; // 0x3a0(0x04)
	bool IsMovingRightServer; // 0x3a4(0x01)
	char UnknownData_3A5[0x3]; // 0x3a5(0x03)
	float NextFlipTimeLocal; // 0x3a8(0x04)
	bool IsMovingRightLocal; // 0x3ac(0x01)
	char UnknownData_3AD[0x3]; // 0x3ad(0x03)
	struct FRandomStream RandomSeed; // 0x3b0(0x08)
	float MoveTime; // 0x3b8(0x04)

	void OnRep_IsMovingRightServer(); // Function BP_HoopsGame.BP_HoopsGame_C.OnRep_IsMovingRightServer
	void OnRep_Scores(); // Function BP_HoopsGame.BP_HoopsGame_C.OnRep_Scores
	void GetBarrelScoreData(struct ABP_Phys_Barrel01_C* Barrel, struct USoundCue* Audio, struct ABP_Phys_Barrel01_C* OutBarrel, int32_t Points); // Function BP_HoopsGame.BP_HoopsGame_C.GetBarrelScoreData
	void OnRep_ComboMultiplier(); // Function BP_HoopsGame.BP_HoopsGame_C.OnRep_ComboMultiplier
	void OnRep_CurrentScore(); // Function BP_HoopsGame.BP_HoopsGame_C.OnRep_CurrentScore
	void ReceiveBeginPlay(); // Function BP_HoopsGame.BP_HoopsGame_C.ReceiveBeginPlay
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void Restart(); // Function BP_HoopsGame.BP_HoopsGame_C.Restart
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature
	void StoreScore(int32_t NewScore); // Function BP_HoopsGame.BP_HoopsGame_C.StoreScore
	void BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void Cheat_ToggleHoopGameMovement(); // Function BP_HoopsGame.BP_HoopsGame_C.Cheat_ToggleHoopGameMovement
	void Set Latest Barrel kicker(struct APlayerCharacter* Kicked by); // Function BP_HoopsGame.BP_HoopsGame_C.Set Latest Barrel kicker
	void On Barrel In Hoop(struct ABP_Phys_Barrel01_C* Barrel); // Function BP_HoopsGame.BP_HoopsGame_C.On Barrel In Hoop
	void On Barglass In Hoop(struct ABar_Glass_Physics_C* Glass); // Function BP_HoopsGame.BP_HoopsGame_C.On Barglass In Hoop
	void On Player In Hoop(struct ABP_PlayerCharacter_C* Player); // Function BP_HoopsGame.BP_HoopsGame_C.On Player In Hoop
	void ReceiveTick(float DeltaSeconds); // Function BP_HoopsGame.BP_HoopsGame_C.ReceiveTick
	void ExecuteUbergraph_BP_HoopsGame(int32_t EntryPoint); // Function BP_HoopsGame.BP_HoopsGame_C.ExecuteUbergraph_BP_HoopsGame
};

