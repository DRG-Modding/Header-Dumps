// BlueprintGeneratedClass BP_Compressed_Gold.BP_Compressed_Gold_C
// Size: 0x368 (Inherited: 0x321)
struct ABP_Compressed_Gold_C : ABP_Gem_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight6; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight5; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight4; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 

	UFUNCTION(BlueprintCallable) void All_PlayDugFree();
	UFUNCTION(BlueprintCallable) void Receive_OnDeposited(APlayerCharacter* fromPlayer);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Compressed_Gold(int32_t EntryPoint);
};

