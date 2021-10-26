// BlueprintGeneratedClass 041_ConsumeUseInput.041_ConsumeUseInput_C
// Size: 0x258 (Inherited: 0x220)
struct A041_ConsumeUseInput_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Use Key Pressed; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Use Key Released; 
	UPROPERTY(BlueprintReadWrite) APlayerController* Local Controller; 

	UFUNCTION(BlueprintCallable) void InpActEvt_Use_K2Node_InputActionEvent_2(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_Use_K2Node_InputActionEvent_1(FKey Key);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_041_ConsumeUseInput(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void Use Key Released__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Use Key Pressed__DelegateSignature();
};

