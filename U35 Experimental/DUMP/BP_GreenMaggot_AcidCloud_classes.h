// BlueprintGeneratedClass BP_GreenMaggot_AcidCloud.BP_GreenMaggot_AcidCloud_C
// Size: 0x274 (Inherited: 0x264)
struct ABP_GreenMaggot_AcidCloud_C : ABP_Damage_Cloud_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float InitialDamageDelay; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_GreenMaggot_AcidCloud(int32_t EntryPoint);
};

