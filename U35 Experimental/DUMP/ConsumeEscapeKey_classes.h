// BlueprintGeneratedClass ConsumeEscapeKey.ConsumeEscapeKey_C
// Size: 0x258 (Inherited: 0x220)
struct AConsumeEscapeKey_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) APlayerController* Local Controller; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Close Menu Key Pressed; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate Close Menu Key Released; 

	UFUNCTION(BlueprintCallable) void InpActEvt_CloseMenu_K2Node_InputActionEvent_2(FKey Key);
	UFUNCTION(BlueprintCallable) void InpActEvt_CloseMenu_K2Node_InputActionEvent_1(FKey Key);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ConsumeEscapeKey(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void Close Menu Key Released__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Close Menu Key Pressed__DelegateSignature();
};

