// BlueprintGeneratedClass BP_New_SnowStorm.BP_New_SnowStorm_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_New_SnowStorm_C : ABP_WeatherEffect_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float Fadeout_OneToZero_321EE05E466F9B8147EEF89FEA0B8335; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Fadeout__Direction_321EE05E466F9B8147EEF89FEA0B8335; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* FadeOut; 
	UPROPERTY(BlueprintReadWrite) float Fadein_ZeroToOne_A0FCF2DB48CDF89D5DB4DC99F95711E6; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Fadein__Direction_A0FCF2DB48CDF89D5DB4DC99F95711E6; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* FadeIn; 

	UFUNCTION(BlueprintCallable) void Fadein__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fadein__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Fadeout__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fadeout__UpdateFunc();
	UFUNCTION(BlueprintCallable) void StartEffect();
	UFUNCTION(BlueprintCallable) void EndEffect();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_New_SnowStorm(int32_t EntryPoint);
};

