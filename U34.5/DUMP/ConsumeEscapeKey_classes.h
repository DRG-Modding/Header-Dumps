// BlueprintGeneratedClass ConsumeEscapeKey.ConsumeEscapeKey_C
// Size: 0x258 (Inherited: 0x220)
struct AConsumeEscapeKey_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	APlayerController* Local Controller; // 0x230(0x08)
	FMulticastInlineDelegate Close Menu Key Pressed; // 0x238(0x10)
	FMulticastInlineDelegate Close Menu Key Released; // 0x248(0x10)

	void InpActEvt_CloseMenu_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_CloseMenu_K2Node_InputActionEvent_1(FKey Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ConsumeEscapeKey(int32_t EntryPoint);
	void Close Menu Key Released__DelegateSignature();
	void Close Menu Key Pressed__DelegateSignature();
};

