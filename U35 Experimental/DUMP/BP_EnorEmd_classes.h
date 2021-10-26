// BlueprintGeneratedClass BP_EnorEmd.BP_EnorEmd_C
// Size: 0x370 (Inherited: 0x321)
struct ABP_EnorEmd_C : ABP_Gem_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UGemTracker* GemTracker; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight6; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight5; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight4; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 

	UFUNCTION(BlueprintCallable) void All_PlayDugFree();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_EnorEmd(int32_t EntryPoint);
};

