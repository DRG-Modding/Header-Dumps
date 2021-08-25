// BlueprintGeneratedClass BP_CreepyEyes.BP_CreepyEyes_C
// Size: 0x2e0 (Inherited: 0x220)
struct ABP_CreepyEyes_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USphereComponent* Sphere1; // 0x228(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	struct UStaticMeshComponent* Sphere; // 0x238(0x08)
	struct USceneComponent* EyeParent; // 0x240(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x250(0x08)
	struct USkeletalMeshComponent* EyeLids; // 0x258(0x08)
	struct UBoxComponent* Box; // 0x260(0x08)
	struct USceneComponent* Eyelids And Trigger; // 0x268(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float Scale_1_NewTrack_3_BCD68ACC423F5ECA6576CB9BC05971B4; // 0x280(0x04)
	float Scale_1_Displacement_Offset_BCD68ACC423F5ECA6576CB9BC05971B4; // 0x284(0x04)
	char Scale_1__Direction_BCD68ACC423F5ECA6576CB9BC05971B4; // 0x288(0x01)
	char UnknownData_289[0x7]; // 0x289(0x07)
	struct UTimelineComponent* Scale 1; // 0x290(0x08)
	bool IsMoving; // 0x298(0x01)
	bool IsTracking; // 0x299(0x01)
	char UnknownData_29A[0x6]; // 0x29a(0x06)
	struct TArray<struct APlayerCharacter*> PlayersInSight; // 0x2a0(0x10)
	struct APlayerCharacter* RandomPlayer; // 0x2b0(0x08)
	bool IsBeingHurt; // 0x2b8(0x01)
	char UnknownData_2B9[0x7]; // 0x2b9(0x07)
	struct FMulticastInlineDelegate OnBeingHurt; // 0x2c0(0x10)
	struct FTimerHandle EyeTimer; // 0x2d0(0x08)
	struct FTimerHandle BlinkTime; // 0x2d8(0x08)

	void GetRandomPlayer(struct APlayerCharacter* RandomPlayer); // Function BP_CreepyEyes.BP_CreepyEyes_C.GetRandomPlayer
	void Scale 1__FinishedFunc(); // Function BP_CreepyEyes.BP_CreepyEyes_C.Scale 1__FinishedFunc
	void Scale 1__UpdateFunc(); // Function BP_CreepyEyes.BP_CreepyEyes_C.Scale 1__UpdateFunc
	void OnNotifyEnd_94DC49124A78E8FE15AA45AD56169758(struct FName NotifyName); // Function BP_CreepyEyes.BP_CreepyEyes_C.OnNotifyEnd_94DC49124A78E8FE15AA45AD56169758
	void OnNotifyBegin_94DC49124A78E8FE15AA45AD56169758(struct FName NotifyName); // Function BP_CreepyEyes.BP_CreepyEyes_C.OnNotifyBegin_94DC49124A78E8FE15AA45AD56169758
	void OnInterrupted_94DC49124A78E8FE15AA45AD56169758(struct FName NotifyName); // Function BP_CreepyEyes.BP_CreepyEyes_C.OnInterrupted_94DC49124A78E8FE15AA45AD56169758
	void OnBlendOut_94DC49124A78E8FE15AA45AD56169758(struct FName NotifyName); // Function BP_CreepyEyes.BP_CreepyEyes_C.OnBlendOut_94DC49124A78E8FE15AA45AD56169758
	void OnCompleted_94DC49124A78E8FE15AA45AD56169758(struct FName NotifyName); // Function BP_CreepyEyes.BP_CreepyEyes_C.OnCompleted_94DC49124A78E8FE15AA45AD56169758
	void LookAtRandom(); // Function BP_CreepyEyes.BP_CreepyEyes_C.LookAtRandom
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount); // Function BP_CreepyEyes.BP_CreepyEyes_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_CreepyEyes.BP_CreepyEyes_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void Blink(); // Function BP_CreepyEyes.BP_CreepyEyes_C.Blink
	void ReceiveBeginPlay(); // Function BP_CreepyEyes.BP_CreepyEyes_C.ReceiveBeginPlay
	void CloseEyes(); // Function BP_CreepyEyes.BP_CreepyEyes_C.CloseEyes
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_CreepyEyes.BP_CreepyEyes_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_CreepyEyes.BP_CreepyEyes_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_CreepyEyes.BP_CreepyEyes_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void OnPlayerClose(struct APlayerCharacter* Player, bool enteredTrigger); // Function BP_CreepyEyes.BP_CreepyEyes_C.OnPlayerClose
	void BlinkTimer(struct APlayerCharacter* Player, bool enteredTrigger); // Function BP_CreepyEyes.BP_CreepyEyes_C.BlinkTimer
	void LookAt(); // Function BP_CreepyEyes.BP_CreepyEyes_C.LookAt
	void StartLookAt(); // Function BP_CreepyEyes.BP_CreepyEyes_C.StartLookAt
	void StopLookat(); // Function BP_CreepyEyes.BP_CreepyEyes_C.StopLookat
	void OnTerrainPointRemoved(); // Function BP_CreepyEyes.BP_CreepyEyes_C.OnTerrainPointRemoved
	void ExecuteUbergraph_BP_CreepyEyes(int32_t EntryPoint); // Function BP_CreepyEyes.BP_CreepyEyes_C.ExecuteUbergraph_BP_CreepyEyes
	void OnBeingHurt__DelegateSignature(bool IsClosed); // Function BP_CreepyEyes.BP_CreepyEyes_C.OnBeingHurt__DelegateSignature
};

