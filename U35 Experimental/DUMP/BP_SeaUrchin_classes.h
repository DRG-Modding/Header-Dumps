// BlueprintGeneratedClass BP_SeaUrchin.BP_SeaUrchin_C
// Size: 0x2ac (Inherited: 0x220)
struct ABP_SeaUrchin_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UStatusEffectTriggerComponent* StatusEffectTrigger1; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* BlockingSphere; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_3_92B13E094B2DF1BDD1B63E8B51041D1A; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_Displacement_Offset_92B13E094B2DF1BDD1B63E8B51041D1A; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_92B13E094B2DF1BDD1B63E8B51041D1A; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) float Reduce_Offset_NewTrack_3_C5AFCD9F419B0285FA202B94564C9676; 
	UPROPERTY(BlueprintReadWrite) float Reduce_Offset_Displacement_Offset_C5AFCD9F419B0285FA202B94564C9676; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Reduce_Offset__Direction_C5AFCD9F419B0285FA202B94564C9676; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Reduce Offset; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic Material; 
	UPROPERTY(BlueprintReadWrite) float InitialDisplacementOffset; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Reduce Offset__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Reduce Offset__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_SeaUrchin(int32_t EntryPoint);
};

