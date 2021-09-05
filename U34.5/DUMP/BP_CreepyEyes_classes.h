// BlueprintGeneratedClass BP_CreepyEyes.BP_CreepyEyes_C
// Size: 0x2e0 (Inherited: 0x220)
struct ABP_CreepyEyes_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USphereComponent* Sphere1; // 0x228(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	UStaticMeshComponent* Sphere; // 0x238(0x08)
	USceneComponent* EyeParent; // 0x240(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x250(0x08)
	USkeletalMeshComponent* EyeLids; // 0x258(0x08)
	UBoxComponent* Box; // 0x260(0x08)
	USceneComponent* Eyelids And Trigger; // 0x268(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x270(0x08)
	USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float Scale_1_NewTrack_3_BCD68ACC423F5ECA6576CB9BC05971B4; // 0x280(0x04)
	float Scale_1_Displacement_Offset_BCD68ACC423F5ECA6576CB9BC05971B4; // 0x284(0x04)
	enum class ETimelineDirection Scale_1__Direction_BCD68ACC423F5ECA6576CB9BC05971B4; // 0x288(0x01)
	UTimelineComponent* Scale 1; // 0x290(0x08)
	bool IsMoving; // 0x298(0x01)
	bool IsTracking; // 0x299(0x01)
	TArray<APlayerCharacter*> PlayersInSight; // 0x2a0(0x10)
	APlayerCharacter* RandomPlayer; // 0x2b0(0x08)
	bool IsBeingHurt; // 0x2b8(0x01)
	FMulticastInlineDelegate OnBeingHurt; // 0x2c0(0x10)
	FTimerHandle EyeTimer; // 0x2d0(0x08)
	FTimerHandle BlinkTime; // 0x2d8(0x08)

	void GetRandomPlayer(APlayerCharacter* RandomPlayer);
	void Scale 1__FinishedFunc();
	void Scale 1__UpdateFunc();
	void OnNotifyEnd_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
	void OnNotifyBegin_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
	void OnInterrupted_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
	void OnBlendOut_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
	void OnCompleted_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
	void LookAtRandom();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void Blink();
	void ReceiveBeginPlay();
	void CloseEyes();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnPlayerClose(APlayerCharacter* Player, bool enteredTrigger);
	void BlinkTimer(APlayerCharacter* Player, bool enteredTrigger);
	void LookAt();
	void StartLookAt();
	void StopLookat();
	void OnTerrainPointRemoved();
	void ExecuteUbergraph_BP_CreepyEyes(int32_t EntryPoint);
	void OnBeingHurt__DelegateSignature(bool IsClosed);
};

