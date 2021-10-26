// BlueprintGeneratedClass Mod074.Mod074_C
// Size: 0x2b8 (Inherited: 0x2b0)
struct AMod074_C : AModBaseV2_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Initialize(APlayerController* LocalPlayer);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Mod074(int32_t EntryPoint);
};

