// BlueprintGeneratedClass Mod025.Mod025_C
// Size: 0x398 (Inherited: 0x2b0)
struct AMod025_C : AModBaseV2_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	bool Active; // 0x2b8(0x01)
	bool Is Down; // 0x2b9(0x01)
	char UnknownData_2BA[0x2]; // 0x2ba(0x02)
	int32_t Target Player Index; // 0x2bc(0x04)
	struct A025_SpectatorCam_C* Current Cam; // 0x2c0(0x08)
	struct TMap<struct AActor*, struct A025_SpectatorCam_C*> Cams; // 0x2c8(0x50)
	float Mouse Zoom Control; // 0x318(0x04)
	bool Transitioning; // 0x31c(0x01)
	char UnknownData_31D[0x3]; // 0x31d(0x03)
	struct FString Save File Path; // 0x320(0x10)
	struct U025_SaveData_C* Save Data; // 0x330(0x08)
	struct TMap<struct AActor*, float> All Actors To Track; // 0x338(0x50)
	struct FTimerHandle Death Check Timer; // 0x388(0x08)
	struct APlayerController* Local Controller; // 0x390(0x08)

	void Get Cam Offset Transform(float Offset, struct FTransform Transform); // Function Mod025.Mod025_C.Get Cam Offset Transform
	void Get Friendly BETCs(struct TArray<struct AActor*> Actors); // Function Mod025.Mod025_C.Get Friendly BETCs
	void Get Actors to Track(struct TMap<struct AActor*, float> Actors); // Function Mod025.Mod025_C.Get Actors to Track
	void Load Save Data(); // Function Mod025.Mod025_C.Load Save Data
	void Is Player Down(bool Is Down); // Function Mod025.Mod025_C.Is Player Down
	void Switch Player Spectator Cam(int32_t New Target Player Index, bool Override Transition Time, float Transition Time Override, struct A025_SpectatorCam_C* Cam); // Function Mod025.Mod025_C.Switch Player Spectator Cam
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_12(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_12
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_11(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_11
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_10(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_10
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_9(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_9
	void InpActEvt_Down_K2Node_InputKeyEvent_8(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_Down_K2Node_InputKeyEvent_8
	void InpActEvt_Down_K2Node_InputKeyEvent_7(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_Down_K2Node_InputKeyEvent_7
	void InpActEvt_Up_K2Node_InputKeyEvent_6(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_Up_K2Node_InputKeyEvent_6
	void InpActEvt_Up_K2Node_InputKeyEvent_5(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_Up_K2Node_InputKeyEvent_5
	void InpActEvt_One_K2Node_InputKeyEvent_4(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_One_K2Node_InputKeyEvent_4
	void InpActEvt_One_K2Node_InputKeyEvent_3(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_One_K2Node_InputKeyEvent_3
	void InpActEvt_Two_K2Node_InputKeyEvent_2(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_Two_K2Node_InputKeyEvent_2
	void InpActEvt_Two_K2Node_InputKeyEvent_1(struct FKey Key); // Function Mod025.Mod025_C.InpActEvt_Two_K2Node_InputKeyEvent_1
	void ReceiveBeginPlay(); // Function Mod025.Mod025_C.ReceiveBeginPlay
	void Initialise(struct APlayerController* LocalPlayer); // Function Mod025.Mod025_C.Initialise
	void Main Loop(); // Function Mod025.Mod025_C.Main Loop
	void Check If Player Is Down(); // Function Mod025.Mod025_C.Check If Player Is Down
	void ReceiveTick(float DeltaSeconds); // Function Mod025.Mod025_C.ReceiveTick
	void Transition Done(); // Function Mod025.Mod025_C.Transition Done
	void Save(); // Function Mod025.Mod025_C.Save
	void ReceiveEndPlay(char EndPlayReason); // Function Mod025.Mod025_C.ReceiveEndPlay
	void ReceiveDestroyed(); // Function Mod025.Mod025_C.ReceiveDestroyed
	void Start(); // Function Mod025.Mod025_C.Start
	void Stop(); // Function Mod025.Mod025_C.Stop
	void Enable Input After Death(); // Function Mod025.Mod025_C.Enable Input After Death
	void ResetCams(); // Function Mod025.Mod025_C.ResetCams
	void ExecuteUbergraph_Mod025(int32_t EntryPoint); // Function Mod025.Mod025_C.ExecuteUbergraph_Mod025
};

