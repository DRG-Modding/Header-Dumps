// BlueprintGeneratedClass BP_MuleLeg.BP_MuleLeg_C
// Size: 0x3a0 (Inherited: 0x321)
struct ABP_MuleLeg_C : ABP_Gem_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* MiniMuleLegPickUp; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* MiniMuleLegDrop; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AudioPingWhenPickedUp; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Distress_Sphere; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) float Beacon_Alpha_5F66972149AD0193977EA08FF82B6FB4; 
	UPROPERTY(BlueprintReadWrite) float Beacon_Scale_5F66972149AD0193977EA08FF82B6FB4; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Beacon__Direction_5F66972149AD0193977EA08FF82B6FB4; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Beacon; 
	UPROPERTY(BlueprintReadWrite) bool IsVisibleOnScanner; 
	UPROPERTY(BlueprintReadWrite) TArray<ABP_MiniMule_Salvage_C*> PingingMules; 
	UPROPERTY(BlueprintReadWrite) TArray<ABP_MiniMule_Salvage_C*> AllMules; 

	UFUNCTION(BlueprintCallable) void GetDistToNearestMULE(float OutDist);
	UFUNCTION(BlueprintCallable) void UpdateBeacon();
	UFUNCTION(BlueprintCallable) void InitVisibleOnScanner();
	UFUNCTION(BlueprintCallable) void SetPingedByMule(ABP_MiniMule_Salvage_C* InMiniMule, bool InPinged);
	UFUNCTION(BlueprintCallable) void OnRep_IsVisibleOnScanner();
	UFUNCTION(BlueprintCallable) void Beacon__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Beacon__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void DisableDistressSphere();
	UFUNCTION(BlueprintCallable) void SetVisibleOnScanner();
	UFUNCTION(BlueprintCallable) void OnDropped_Event_1();
	UFUNCTION(BlueprintCallable) void OnPickedUp_Event();
	UFUNCTION(BlueprintCallable) void Ping Beacon();
	UFUNCTION(BlueprintCallable) void OnDisableLegSpheres_Event();
	UFUNCTION(BlueprintCallable) void Ping While Carried();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_MuleLeg(int32_t EntryPoint);
};

