// BlueprintGeneratedClass BP_DropPod_Landing_Escort.BP_DropPod_Landing_Escort_C
// Size: 0x888 (Inherited: 0x880)
struct ABP_DropPod_Landing_Escort_C : ABP_DropPod_Landing_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void OnFirstPlayerLeftPod();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_DropPod_Landing_Escort(int32_t EntryPoint);
};

