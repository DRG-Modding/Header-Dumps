// BlueprintGeneratedClass BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C
// Size: 0x2e0 (Inherited: 0x290)
struct ABP_GuntowerActivationPlatfrom_C : AGuntowerActivationPlatform {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Cylinder; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GunTowerUICount_Cue; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* ProgressScreen; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) TArray<FColor> LightColors; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial; 

	UFUNCTION(BlueprintCallable) void SetLightColor(FColor LightColor);
	UFUNCTION(BlueprintCallable) void DisableLight();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDisabledChanged(bool IsDisabled);
	UFUNCTION(BlueprintCallable) void OnPlayersInsideChanged(int32_t PlayersInside);
	UFUNCTION(BlueprintCallable) void OnShutDown();
	UFUNCTION(BlueprintCallable) void OnFinished();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_GuntowerActivationPlatfrom(int32_t EntryPoint);
};

