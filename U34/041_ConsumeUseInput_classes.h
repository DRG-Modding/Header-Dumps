// BlueprintGeneratedClass 041_ConsumeUseInput.041_ConsumeUseInput_C
// Size: 0x258 (Inherited: 0x220)
struct A041_ConsumeUseInput_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FMulticastInlineDelegate Use Key Pressed; // 0x230(0x10)
	struct FMulticastInlineDelegate Use Key Released; // 0x240(0x10)
	struct APlayerController* Local Controller; // 0x250(0x08)

	void InpActEvt_Use_K2Node_InputActionEvent_2(struct FKey Key); // Function 041_ConsumeUseInput.041_ConsumeUseInput_C.InpActEvt_Use_K2Node_InputActionEvent_2
	void InpActEvt_Use_K2Node_InputActionEvent_1(struct FKey Key); // Function 041_ConsumeUseInput.041_ConsumeUseInput_C.InpActEvt_Use_K2Node_InputActionEvent_1
	void ReceiveBeginPlay(); // Function 041_ConsumeUseInput.041_ConsumeUseInput_C.ReceiveBeginPlay
	void ExecuteUbergraph_041_ConsumeUseInput(int32_t EntryPoint); // Function 041_ConsumeUseInput.041_ConsumeUseInput_C.ExecuteUbergraph_041_ConsumeUseInput
	void Use Key Released__DelegateSignature(); // Function 041_ConsumeUseInput.041_ConsumeUseInput_C.Use Key Released__DelegateSignature
	void Use Key Pressed__DelegateSignature(); // Function 041_ConsumeUseInput.041_ConsumeUseInput_C.Use Key Pressed__DelegateSignature
};

