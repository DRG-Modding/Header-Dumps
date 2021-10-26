// BlueprintGeneratedClass Mod034.Mod034_C
// Size: 0x2e0 (Inherited: 0x2b0)
struct AMod034_C : AModBaseV2_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) APlayerController* Local Controller; 
	UPROPERTY(BlueprintReadWrite) int32_t Charges Remaining; 
	UPROPERTY(BlueprintReadWrite) ABP_SpotpipeSpawner_C* Spotpipe; 
	UPROPERTY(BlueprintReadWrite) FString NewVar_1; 

	UFUNCTION(BlueprintCallable) void CheckForStartPod();
	UFUNCTION(BlueprintCallable) void InpActEvt_Six_K2Node_InputKeyEvent_5(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_Seven_K2Node_InputKeyEvent_4(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_Zero_K2Node_InputKeyEvent_3(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_F1_K2Node_InputKeyEvent_2(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_F3_K2Node_InputKeyEvent_1(FKey Key);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Initialize(APlayerController* LocalPlayer);
	UFUNCTION(BlueprintCallable) void Charge Time();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Mod034(int32_t EntryPoint);
};

