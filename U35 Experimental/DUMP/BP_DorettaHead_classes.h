// BlueprintGeneratedClass BP_DorettaHead.BP_DorettaHead_C
// Size: 0x2e8 (Inherited: 0x258)
struct ABP_DorettaHead_C : ADorrettaHead {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UNiagaraComponent* NiagaraNoBlinking; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* SphereTrigger; 
	UPROPERTY(BlueprintReadWrite) UNiagaraComponent* Niagara; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Doretta; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DorettaHeadRoot; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* SoundSpawnPoint; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere1; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* SphereUsable; 
	UPROPERTY(BlueprintReadWrite) FVector JIggle_Jiggle_4D1EF936403F1B634C819C8AC37A7DE1; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection JIggle__Direction_4D1EF936403F1B634C819C8AC37A7DE1; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Jiggle; 
	UPROPERTY(BlueprintReadWrite) FVector ThrowForce; 
	UPROPERTY(BlueprintReadWrite) bool IsPickedUp; 
	UPROPERTY(BlueprintReadWrite) float LastSoundPlayTime; 
	UPROPERTY(BlueprintReadWrite) float MinTimeBetweenSounds; 
	UPROPERTY(BlueprintReadWrite) USoundCue* ImpactSound; 

	UFUNCTION(BlueprintCallable) void JIggle__FinishedFunc();
	UFUNCTION(BlueprintCallable) void JIggle__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Throw(FVector force);
	UFUNCTION(BlueprintCallable) void BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void PlayDorettaSound(USoundBase* Sound);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void PlaySound();
	UFUNCTION(BlueprintCallable) void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_DorettaHead(int32_t EntryPoint);
};

