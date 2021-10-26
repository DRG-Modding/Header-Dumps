// BlueprintGeneratedClass BP_Gem.BP_Gem_C
// Size: 0x321 (Inherited: 0x260)
struct ABP_Gem_C : AGem {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect5; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect4; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect3; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect2; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect1; 
	UPROPERTY(BlueprintReadWrite) UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* TerrainScannerMesh; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UCarriableComponent* Carriable; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) int32_t Detects; 
	UPROPERTY(BlueprintReadWrite) USoundCue* DugFreeCue; 
	UPROPERTY(BlueprintReadWrite) bool CanTriggerSound; 
	UPROPERTY(BlueprintReadWrite) USoundBase* ImpactSound; 
	UPROPERTY(BlueprintReadWrite) FName ImpactSoundParameter; 
	UPROPERTY(BlueprintReadWrite) USoundBase* PickupSound; 
	UPROPERTY(BlueprintReadWrite) FVector InWorldScale; 
	UPROPERTY(BlueprintReadWrite) FVector ThrowForce; 
	UPROPERTY(BlueprintReadWrite) bool VisibleToTerrainScanner; 
	UPROPERTY(BlueprintReadWrite) bool ExposeNeighbourhoodToTerrainScanner; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* CollectedAchievement; 
	UPROPERTY(BlueprintReadWrite) bool VisibleToScannerAfterDigOut; 

	UFUNCTION(BlueprintCallable) void ReleaseToWorld();
	UFUNCTION(BlueprintCallable) void SetPickedUp(APlayerCharacter* Character);
	UFUNCTION(BlueprintCallable) void PointCleared();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void All_PlayDugFree();
	UFUNCTION(BlueprintCallable) void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	UFUNCTION(BlueprintCallable) void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void Throw(FVector force);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Receive_OnDeposited(APlayerCharacter* fromPlayer);
	UFUNCTION(BlueprintCallable) void Cheat_ReleaseToWorld();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Gem(int32_t EntryPoint);
};

