// BlueprintGeneratedClass BP_NetFungus.BP_NetFungus_C
// Size: 0x278 (Inherited: 0x270)
struct ABP_NetFungus_C : ABP_PassiveFoliage_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_NetFungus(int32_t EntryPoint);
};

