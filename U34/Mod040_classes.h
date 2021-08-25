// BlueprintGeneratedClass Mod040.Mod040_C
// Size: 0x2e8 (Inherited: 0x2b0)
struct AMod040_C : AModBaseV2_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct APlayerController* Local Controller; // 0x2b8(0x08)
	struct ULetThereBeLightUI_C* LetThereBeLightUI; // 0x2c0(0x08)
	bool Is Light On; // 0x2c8(0x01)
	char UnknownData_2C9[0x7]; // 0x2c9(0x07)
	struct FMulticastInlineDelegate On Input Changed; // 0x2d0(0x10)
	struct ULevelStreamingDynamic* Map; // 0x2e0(0x08)

	void Spawn Map(); // Function Mod040.Mod040_C.Spawn Map
	void InpActEvt_L_K2Node_InputKeyEvent_1(struct FKey Key); // Function Mod040.Mod040_C.InpActEvt_L_K2Node_InputKeyEvent_1
	void ReceiveBeginPlay(); // Function Mod040.Mod040_C.ReceiveBeginPlay
	void MissionLoads(struct APlayerController* LocalPlayer); // Function Mod040.Mod040_C.MissionLoads
	void On Checkbox Changed(bool Is Checked); // Function Mod040.Mod040_C.On Checkbox Changed
	void ExecuteUbergraph_Mod040(int32_t EntryPoint); // Function Mod040.Mod040_C.ExecuteUbergraph_Mod040
	void On Input Changed__DelegateSignature(bool Is Checked); // Function Mod040.Mod040_C.On Input Changed__DelegateSignature
};

