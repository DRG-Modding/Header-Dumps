// BlueprintGeneratedClass BP_New_HeavyRain_Crystal.BP_New_HeavyRain_Crystal_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_New_HeavyRain_Crystal_C : ABP_WeatherEffect_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float Fadeout_OneToZero_A3017D9546A53807B6D05BB6AE0CDCAB; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Fadeout__Direction_A3017D9546A53807B6D05BB6AE0CDCAB; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* FadeOut; 
	UPROPERTY(BlueprintReadWrite) float Fadein_ZeroToOne_292B154C4E05A9ACA12E6F98823124C0; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Fadein__Direction_292B154C4E05A9ACA12E6F98823124C0; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* FadeIn; 

	UFUNCTION(BlueprintCallable) void Fadein__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fadein__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Fadeout__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fadeout__UpdateFunc();
	UFUNCTION(BlueprintCallable) void StartEffect();
	UFUNCTION(BlueprintCallable) void EndEffect();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_New_HeavyRain_Crystal(int32_t EntryPoint);
};

