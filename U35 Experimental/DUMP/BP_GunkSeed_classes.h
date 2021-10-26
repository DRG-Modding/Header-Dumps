// BlueprintGeneratedClass BP_GunkSeed.BP_GunkSeed_C
// Size: 0x2cd (Inherited: 0x260)
struct ABP_GunkSeed_C : AGem {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* TerrainScannerMesh; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GunkSeedReleased; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UCarriableComponent* Carriable; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* UseSphere; 
	UPROPERTY(BlueprintReadWrite) FVector ThrowForce; 
	UPROPERTY(BlueprintReadWrite) USoundBase* ImpactSound; 
	UPROPERTY(BlueprintReadWrite) float MaxLength; 
	UPROPERTY(BlueprintReadWrite) bool Dropped; 

	UFUNCTION(BlueprintCallable) void OnRep_Dropped();
	UFUNCTION(BlueprintCallable) void ReleaseFromHanger();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void Throw(FVector force);
	UFUNCTION(BlueprintCallable) void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	UFUNCTION(BlueprintCallable) void Drop();
	UFUNCTION(BlueprintCallable) void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_GunkSeed(int32_t EntryPoint);
};

