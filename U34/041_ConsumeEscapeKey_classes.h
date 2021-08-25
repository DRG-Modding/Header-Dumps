// BlueprintGeneratedClass 041_ConsumeEscapeKey.041_ConsumeEscapeKey_C
// Size: 0x258 (Inherited: 0x220)
struct A041_ConsumeEscapeKey_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct APlayerController* Local Controller; // 0x230(0x08)
	struct FMulticastInlineDelegate Close Menu Key Pressed; // 0x238(0x10)
	struct FMulticastInlineDelegate Close Menu Key Released; // 0x248(0x10)

	void InpActEvt_CloseMenu_K2Node_InputActionEvent_2(struct FKey Key); // Function 041_ConsumeEscapeKey.041_ConsumeEscapeKey_C.InpActEvt_CloseMenu_K2Node_InputActionEvent_2
	void InpActEvt_CloseMenu_K2Node_InputActionEvent_1(struct FKey Key); // Function 041_ConsumeEscapeKey.041_ConsumeEscapeKey_C.InpActEvt_CloseMenu_K2Node_InputActionEvent_1
	void ReceiveBeginPlay(); // Function 041_ConsumeEscapeKey.041_ConsumeEscapeKey_C.ReceiveBeginPlay
	void ExecuteUbergraph_041_ConsumeEscapeKey(int32_t EntryPoint); // Function 041_ConsumeEscapeKey.041_ConsumeEscapeKey_C.ExecuteUbergraph_041_ConsumeEscapeKey
	void Close Menu Key Released__DelegateSignature(); // Function 041_ConsumeEscapeKey.041_ConsumeEscapeKey_C.Close Menu Key Released__DelegateSignature
	void Close Menu Key Pressed__DelegateSignature(); // Function 041_ConsumeEscapeKey.041_ConsumeEscapeKey_C.Close Menu Key Pressed__DelegateSignature
};

