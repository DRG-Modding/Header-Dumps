// BlueprintGeneratedClass Bp_Azure_GurkenShuck.Bp_Azure_GurkenShuck_C
// Size: 0x2a8 (Inherited: 0x220)
struct ABp_Azure_GurkenShuck_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Flower_Gurken_Pollen; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* WalkinTrigger; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* HitBox; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Gurken; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AzureGurkenIdleSound; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Flower_HollowBall_lightdust; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Scene; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) float Fade_up_NewTrack_0_1973A28E419F187C363458893321988E; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Fade_up__Direction_1973A28E419F187C363458893321988E; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Fade up; 
	UPROPERTY(BlueprintReadWrite) int32_t LightIntensity; 
	UPROPERTY(BlueprintReadWrite) int32_t LightAttenuation; 

	UFUNCTION(BlueprintCallable) void Fade up__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fade up__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void Close Flower();
	UFUNCTION(BlueprintCallable) void OpenFlower();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Bp_Azure_GurkenShuck(int32_t EntryPoint);
};

