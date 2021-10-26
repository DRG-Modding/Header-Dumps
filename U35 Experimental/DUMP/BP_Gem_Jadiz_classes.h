// BlueprintGeneratedClass BP_Gem_Jadiz.BP_Gem_Jadiz_C
// Size: 0x378 (Inherited: 0x321)
struct ABP_Gem_Jadiz_C : ABP_Gem_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GemJadizIdle_Cue; 
	UPROPERTY(BlueprintReadWrite) UGemTracker* GemTracker; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight6; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight5; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight4; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 

	UFUNCTION(BlueprintCallable) void All_PlayDugFree();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Gem_Jadiz(int32_t EntryPoint);
};

