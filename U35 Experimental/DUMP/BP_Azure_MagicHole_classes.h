// BlueprintGeneratedClass BP_Azure_MagicHole.BP_Azure_MagicHole_C
// Size: 0x2a4 (Inherited: 0x220)
struct ABP_Azure_MagicHole_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStatusEffectTriggerComponent* StatusEffectTrigger; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AzureMagic_Hole_Cue; 
	UPROPERTY(BlueprintReadWrite) UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* BP_MagicHoleBottomDebris; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* Billboard; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Biome_Azure_MagicHole_Sparks; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver_Base; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver_Hole; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Carvers; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Carver_DropPodDrill002; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Carver_DropPodDrill001; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float UpwardPush; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnComponentBeginOverlap_Event_1(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void OnComponentEndOverlap_Event_1(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Azure_MagicHole(int32_t EntryPoint);
};

