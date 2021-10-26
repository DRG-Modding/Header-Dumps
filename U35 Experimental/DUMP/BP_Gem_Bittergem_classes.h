// BlueprintGeneratedClass BP_Gem_Bittergem.BP_Gem_Bittergem_C
// Size: 0x378 (Inherited: 0x321)
struct ABP_Gem_Bittergem_C : ABP_Gem_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GemBitterIdle_Cue; 
	UPROPERTY(BlueprintReadWrite) UGemTracker* GemTracker; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight6; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight5; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight4; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 

	UFUNCTION(BlueprintCallable) void All_PlayDugFree();
	UFUNCTION(BlueprintCallable) void Receive_OnDeposited(APlayerCharacter* fromPlayer);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Gem_Bittergem(int32_t EntryPoint);
};

