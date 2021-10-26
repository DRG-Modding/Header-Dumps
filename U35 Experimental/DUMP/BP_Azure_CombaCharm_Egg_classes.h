// BlueprintGeneratedClass BP_Azure_CombaCharm_Egg.BP_Azure_CombaCharm_Egg_C
// Size: 0x2a8 (Inherited: 0x294)
struct ABP_Azure_CombaCharm_Egg_C : ABP_Phys_KickableObject_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Azure_CombaCharm_Egg(int32_t EntryPoint);
};

