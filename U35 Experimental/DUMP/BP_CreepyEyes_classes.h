// BlueprintGeneratedClass BP_CreepyEyes.BP_CreepyEyes_C
// Size: 0x2e0 (Inherited: 0x220)
struct ABP_CreepyEyes_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere1; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* EyeParent; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* EyeLids; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Eyelids And Trigger; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float Scale_1_NewTrack_3_BCD68ACC423F5ECA6576CB9BC05971B4; 
	UPROPERTY(BlueprintReadWrite) float Scale_1_Displacement_Offset_BCD68ACC423F5ECA6576CB9BC05971B4; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Scale_1__Direction_BCD68ACC423F5ECA6576CB9BC05971B4; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Scale 1; 
	UPROPERTY(BlueprintReadWrite) bool IsMoving; 
	UPROPERTY(BlueprintReadWrite) bool IsTracking; 
	UPROPERTY(BlueprintReadWrite) TArray<APlayerCharacter*> PlayersInSight; 
	UPROPERTY(BlueprintReadWrite) APlayerCharacter* RandomPlayer; 
	UPROPERTY(BlueprintReadWrite) bool IsBeingHurt; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnBeingHurt; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle EyeTimer; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle BlinkTime; 

	UFUNCTION(BlueprintCallable) void GetRandomPlayer(APlayerCharacter* RandomPlayer);
	UFUNCTION(BlueprintCallable) void Scale 1__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Scale 1__UpdateFunc();
	UFUNCTION(BlueprintCallable) void OnNotifyEnd_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnNotifyBegin_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnInterrupted_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnBlendOut_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
	UFUNCTION(BlueprintCallable) void OnCompleted_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
	UFUNCTION(BlueprintCallable) void LookAtRandom();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void Blink();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void CloseEyes();
	UFUNCTION(BlueprintCallable) void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void OnPlayerClose(APlayerCharacter* Player, bool enteredTrigger);
	UFUNCTION(BlueprintCallable) void BlinkTimer(APlayerCharacter* Player, bool enteredTrigger);
	UFUNCTION(BlueprintCallable) void LookAt();
	UFUNCTION(BlueprintCallable) void StartLookAt();
	UFUNCTION(BlueprintCallable) void StopLookat();
	UFUNCTION(BlueprintCallable) void OnTerrainPointRemoved();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_CreepyEyes(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnBeingHurt__DelegateSignature(bool IsClosed);
};

