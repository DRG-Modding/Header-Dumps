// BlueprintGeneratedClass BP_Spider_RadiationCloud.BP_Spider_RadiationCloud_C
// Size: 0x29c (Inherited: 0x264)
struct ABP_Spider_RadiationCloud_C : ABP_Damage_Cloud_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* RadiationSound; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_Brightness_A937636C4B7B6C568E7B0AB343335B4D; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_A937636C4B7B6C568E7B0AB343335B4D; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) float BaseIntensity; 

	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Spider_RadiationCloud(int32_t EntryPoint);
};

