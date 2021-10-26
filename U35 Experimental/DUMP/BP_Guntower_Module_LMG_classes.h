// BlueprintGeneratedClass BP_Guntower_Module_LMG.BP_Guntower_Module_LMG_C
// Size: 0x500 (Inherited: 0x4b0)
struct ABP_Guntower_Module_LMG_C : ALMGGuntoweModule {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* LightCone; 
	UPROPERTY(BlueprintReadWrite) USpotLightComponent* SpotLight; 
	UPROPERTY(BlueprintReadWrite) UAIPerceptionComponent* AIPerception; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ChildActor2; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ChildActor1; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ChildActor; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* LightMaterial; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnActivationChanged(bool IsActivated);
	UFUNCTION(BlueprintCallable) void OnTearArmor();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Guntower_Module_LMG(int32_t EntryPoint);
};

