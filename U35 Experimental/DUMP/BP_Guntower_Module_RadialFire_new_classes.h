// BlueprintGeneratedClass BP_Guntower_Module_RadialFire_new.BP_Guntower_Module_RadialFire_new_C
// Size: 0x460 (Inherited: 0x430)
struct ABP_Guntower_Module_RadialFire_new_C : ARadialFireModule {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Weakpoint2; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Weakpoint1; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* Weakpoint; 

	UFUNCTION(BlueprintCallable) void OnFire();
	UFUNCTION(BlueprintCallable) void OnTearArmor();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Guntower_Module_RadialFire_new(int32_t EntryPoint);
};

