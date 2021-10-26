// BlueprintGeneratedClass BP_CaveVine.BP_CaveVine_C
// Size: 0x2f8 (Inherited: 0x288)
struct ABP_CaveVine_C : ACaveVine {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UInstantUsable* InstantUsable; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UMotionAudioController* MotionAudioController; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* CaveVine_Tracking; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* CaveVine_Idle; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* HeadMesh; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* BaseMesh; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* SphereCollider; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void BP_OnInitialized();
	UFUNCTION(BlueprintCallable) void BP_OnTargetChanged(UHealthComponent* NewTarget);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_CaveVine(int32_t EntryPoint);
};

