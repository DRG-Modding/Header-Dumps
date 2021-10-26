// BlueprintGeneratedClass BP_Azure_CombaCharm.BP_Azure_CombaCharm_C
// Size: 0x29d (Inherited: 0x220)
struct ABP_Azure_CombaCharm_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) URotatingMovementComponent* RotatingMovement; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Biome_AzureWeald_Flower_BigEgg_01; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* CombaCharmIdle; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Biome_AzureWeald_Flower_BigEgg; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float Glowtimeline_Glow_3F65C7DD4A6637F8B110998EAD89619E; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Glowtimeline__Direction_3F65C7DD4A6637F8B110998EAD89619E; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Glowtimeline; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* GlowMat; 
	UPROPERTY(BlueprintReadWrite) float BaseGlow; 
	UPROPERTY(BlueprintReadWrite) bool Glow; 

	UFUNCTION(BlueprintCallable) void OnRep_Glow();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Glowtimeline__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Glowtimeline__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void DoGlow();
	UFUNCTION(BlueprintCallable) void StopGlow();
	UFUNCTION(BlueprintCallable) void PlayerClose(APlayerCharacter* Player, bool enteredTrigger);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Azure_CombaCharm(int32_t EntryPoint);
};

