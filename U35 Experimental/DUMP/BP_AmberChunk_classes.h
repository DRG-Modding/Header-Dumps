// BlueprintGeneratedClass BP_AmberChunk.BP_AmberChunk_C
// Size: 0x398 (Inherited: 0x321)
struct ABP_AmberChunk_C : ABP_Gem_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle TimerHandle; 
	UPROPERTY(BlueprintReadWrite) float LifeTime; 
	UPROPERTY(BlueprintReadWrite) bool Destroyed; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic Material; 
	UPROPERTY(BlueprintReadWrite) FLinearColor Initial Colour; 
	UPROPERTY(BlueprintReadWrite) FLinearColor Final Colour; 
	UPROPERTY(BlueprintReadWrite) float ProgressFrequency; 
	UPROPERTY(BlueprintReadWrite) float TimeElapsed; 
	UPROPERTY(BlueprintReadWrite) FLinearColor Initial Color Tint1; 
	UPROPERTY(BlueprintReadWrite) FLinearColor Final Color Tint1; 

	UFUNCTION(BlueprintCallable) void OnRep_Destroyed();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void DestroySelf();
	UFUNCTION(BlueprintCallable) void Time();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_AmberChunk(int32_t EntryPoint);
};

