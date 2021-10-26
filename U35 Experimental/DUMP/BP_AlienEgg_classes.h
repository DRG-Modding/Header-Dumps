// BlueprintGeneratedClass BP_AlienEgg.BP_AlienEgg_C
// Size: 0x39d (Inherited: 0x321)
struct ABP_AlienEgg_C : ABP_Gem_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SurroundingTerrainCarver; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight6; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight5; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight4; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* light_center; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_824C546F43F8F98270303087668A3695; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_824C546F43F8F98270303087668A3695; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) float LightIntensity; 
	UPROPERTY(BlueprintReadWrite) FLinearColor LightColor; 
	UPROPERTY(BlueprintReadWrite) bool IsSpecialEgg; 

	UFUNCTION(BlueprintCallable) void ModulateLights(float NewIntensity);
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void All_PlayDugFree();
	UFUNCTION(BlueprintCallable) void SetSpecialEgg();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_AlienEgg(int32_t EntryPoint);
};

