// BlueprintGeneratedClass BP_Guntower_Module_Homing.BP_Guntower_Module_Homing_C
// Size: 0x470 (Inherited: 0x440)
struct ABP_Guntower_Module_Homing_C : AHomingFireModule {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* WeakPointActor; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* WeakPointActor2; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* WeakPointActor1; 

	UFUNCTION(BlueprintCallable) void OnTearArmor();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Guntower_Module_Homing(int32_t EntryPoint);
};

