// BlueprintGeneratedClass BP_UnknownArtifact.BP_UnknownArtifact_C
// Size: 0x394 (Inherited: 0x321)
struct ABP_UnknownArtifact_C : ABP_Gem_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight6; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight5; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight4; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* light_center; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_26F6B6C743C5284D0A49D79127722B1A; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_26F6B6C743C5284D0A49D79127722B1A; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) float LightIntensity; 
	UPROPERTY(BlueprintReadWrite) FLinearColor LightColor; 

	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void All_PlayDugFree();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_UnknownArtifact(int32_t EntryPoint);
};

