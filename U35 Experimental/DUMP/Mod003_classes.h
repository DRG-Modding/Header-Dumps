// BlueprintGeneratedClass Mod003.Mod003_C
// Size: 0x2c0 (Inherited: 0x2b0)
struct AMod003_C : AModBaseV2_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle Timer; 

	UFUNCTION(BlueprintCallable) void HandleOnInitialise(APlayerController* LocalPlayer);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void CustomEvent_1();
	UFUNCTION(BlueprintCallable) void HandleOnStart();
	UFUNCTION(BlueprintCallable) void HandleOnStop();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Mod003(int32_t EntryPoint);
};

