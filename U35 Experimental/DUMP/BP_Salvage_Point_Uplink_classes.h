// BlueprintGeneratedClass BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C
// Size: 0x2d8 (Inherited: 0x260)
struct ABP_Salvage_Point_Uplink_C : ABP_Salvage_Point_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainScannerStaticMesh* TerrainScannerStaticMesh; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UDropToTerrainComponent* DropToTerrain; 
	UPROPERTY(BlueprintReadWrite) UOxygenSourceComponent* OxygenSource; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* UplinkCollision; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* UplinkTriangulation_Cue; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 

	UFUNCTION(BlueprintCallable) void HandlePhotosensitivity();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDefenseStart();
	UFUNCTION(BlueprintCallable) void OnDefenseComplete();
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
	UFUNCTION(BlueprintCallable) void OnDefenseFail();
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void UpdateTerrainScannerMesh();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Salvage_Point_Uplink(int32_t EntryPoint);
};

