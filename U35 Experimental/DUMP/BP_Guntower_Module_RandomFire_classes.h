// BlueprintGeneratedClass BP_Guntower_Module_RandomFire.BP_Guntower_Module_RandomFire_C
// Size: 0x5a0 (Inherited: 0x568)
struct ABP_Guntower_Module_RandomFire_C : ARandomFiringGuntowerModule {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Weakpoint1; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Weakpoint; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnTearArmor();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Guntower_Module_RandomFire(int32_t EntryPoint);
};

