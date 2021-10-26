// BlueprintGeneratedClass BP_NewSandstorm.BP_NewSandStorm_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_NewSandStorm_C : ABP_WeatherEffect_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float Fadeout_OneToZero_1C9D7E9C43D38F352386738892203941; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Fadeout__Direction_1C9D7E9C43D38F352386738892203941; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* FadeOut; 
	UPROPERTY(BlueprintReadWrite) float Fadin_ZeroToOne_D260EBF6476C34297BC10A928022C9AF; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Fadin__Direction_D260EBF6476C34297BC10A928022C9AF; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Fadin; 

	UFUNCTION(BlueprintCallable) void Fadin__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fadin__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Fadeout__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fadeout__UpdateFunc();
	UFUNCTION(BlueprintCallable) void StartEffect();
	UFUNCTION(BlueprintCallable) void EndEffect();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_NewSandStorm(int32_t EntryPoint);
};

