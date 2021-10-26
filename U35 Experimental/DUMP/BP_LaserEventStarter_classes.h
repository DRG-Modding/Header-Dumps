// BlueprintGeneratedClass BP_LaserEventStarter.BP_LaserEventStarter_C
// Size: 0x2cc (Inherited: 0x248)
struct ABP_LaserEventStarter_C : AEventStarterButton {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* LaserWarmUp; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* BatteryInserter; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* LaserSound; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh Laser Beam; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* LightMaterial; 
	UPROPERTY(BlueprintReadWrite) AGameEvent* OwningEvent; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* LaserParticles; 
	UPROPERTY(BlueprintReadWrite) FVector2D OriginalEmissivaValues; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* BatteryMaterial; 
	UPROPERTY(BlueprintReadWrite) float OriginalBatteryEmissive; 

	UFUNCTION(BlueprintCallable) bool AddEventProgress(float Progress);
	UFUNCTION(BlueprintCallable) bool AdvanceOneObjective();
	UFUNCTION(BlueprintCallable) bool SetupEvent(AGameEvent* GameEvent);
	UFUNCTION(BlueprintCallable) void UsedEffects();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void OnEventOpened();
	UFUNCTION(BlueprintCallable) void OnEventProgress(float Progress);
	UFUNCTION(BlueprintCallable) void OnEventTriggered();
	UFUNCTION(BlueprintCallable) void OnOpenedForUse(bool wasOpened);
	UFUNCTION(BlueprintCallable) void OnEventFinished(bool eventSuccess);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_LaserEventStarter(int32_t EntryPoint);
};

