// BlueprintGeneratedClass Mod034.Mod034_C
// Size: 0x2e0 (Inherited: 0x2b0)
struct AMod034_C : AModBaseV2_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct APlayerController* Local Controller; // 0x2b8(0x08)
	int32_t Charges Remaining; // 0x2c0(0x04)
	char UnknownData_2C4[0x4]; // 0x2c4(0x04)
	struct ABP_SpotpipeSpawner_C* Spotpipe; // 0x2c8(0x08)
	struct FString NewVar_1; // 0x2d0(0x10)

	void CheckForStartPod(); // Function Mod034.Mod034_C.CheckForStartPod
	void InpActEvt_Six_K2Node_InputKeyEvent_5(struct FKey Key); // Function Mod034.Mod034_C.InpActEvt_Six_K2Node_InputKeyEvent_5
	void InpActEvt_Seven_K2Node_InputKeyEvent_4(struct FKey Key); // Function Mod034.Mod034_C.InpActEvt_Seven_K2Node_InputKeyEvent_4
	void InpActEvt_Zero_K2Node_InputKeyEvent_3(struct FKey Key); // Function Mod034.Mod034_C.InpActEvt_Zero_K2Node_InputKeyEvent_3
	void InpActEvt_F1_K2Node_InputKeyEvent_2(struct FKey Key); // Function Mod034.Mod034_C.InpActEvt_F1_K2Node_InputKeyEvent_2
	void InpActEvt_F3_K2Node_InputKeyEvent_1(struct FKey Key); // Function Mod034.Mod034_C.InpActEvt_F3_K2Node_InputKeyEvent_1
	void ReceiveBeginPlay(); // Function Mod034.Mod034_C.ReceiveBeginPlay
	void Initialize(struct APlayerController* LocalPlayer); // Function Mod034.Mod034_C.Initialize
	void Charge Time(); // Function Mod034.Mod034_C.Charge Time
	void ExecuteUbergraph_Mod034(int32_t EntryPoint); // Function Mod034.Mod034_C.ExecuteUbergraph_Mod034
};

