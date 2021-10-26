// BlueprintGeneratedClass BP_New_HeavyRain_Lush.BP_New_HeavyRain_Lush_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_New_HeavyRain_Lush_C : ABP_WeatherEffect_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float Fadeout_OneToZero_6AF7D3FF4ECB419F4995D9B03104B55F; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Fadeout__Direction_6AF7D3FF4ECB419F4995D9B03104B55F; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* FadeOut; 
	UPROPERTY(BlueprintReadWrite) float Fadein_ZeroToOne_FE890FCF46CAF26A7BBFED9BDF736F8A; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Fadein__Direction_FE890FCF46CAF26A7BBFED9BDF736F8A; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* FadeIn; 

	UFUNCTION(BlueprintCallable) void Fadein__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fadein__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Fadeout__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fadeout__UpdateFunc();
	UFUNCTION(BlueprintCallable) void StartEffect();
	UFUNCTION(BlueprintCallable) void EndEffect();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_New_HeavyRain_Lush(int32_t EntryPoint);
};

