// BlueprintGeneratedClass BP_Azure_VoidBasket.BP_Azure_VoidBasket_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_Azure_VoidBasket_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* HollowBall Idle Sound; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Flower_HollowBall_lightdust; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_LightCone; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_HollowBall; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Azure_VoidBasket(int32_t EntryPoint);
};

