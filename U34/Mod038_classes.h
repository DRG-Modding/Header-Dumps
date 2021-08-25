// BlueprintGeneratedClass Mod038.Mod038_C
// Size: 0x2fc (Inherited: 0x2b0)
struct AMod038_C : AModBaseV2_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USeasonalSpaceRigUI_C* Seasonal Space Rig UI; // 0x2b8(0x08)
	struct FString Save Location; // 0x2c0(0x10)
	struct UUpgradedDorettaSaveGame_C* Upgraded Doretta Save Game; // 0x2d0(0x08)
	struct USeasonalSpaceRigSaveGame_C* Seasonal Space Rig Save Game; // 0x2d8(0x08)
	bool Is Artifact Valid; // 0x2e0(0x01)
	char UnknownData_2E1[0x3]; // 0x2e1(0x03)
	struct FVector Pumpkins; // 0x2e4(0x0c)
	struct FVector Eyeballs; // 0x2f0(0x0c)

	void Spawn Vines & Sucks(); // Function Mod038.Mod038_C.Spawn Vines & Sucks
	void Spawn Eyeballs(); // Function Mod038.Mod038_C.Spawn Eyeballs
	void Spawn Pumpkins(); // Function Mod038.Mod038_C.Spawn Pumpkins
	void Move Cube(struct AActor* Cube); // Function Mod038.Mod038_C.Move Cube
	void Despawn Snow(); // Function Mod038.Mod038_C.Despawn Snow
	void Spawn Snow(); // Function Mod038.Mod038_C.Spawn Snow
	void Save Config(); // Function Mod038.Mod038_C.Save Config
	void Load Config(); // Function Mod038.Mod038_C.Load Config
	void InpActEvt_F6_K2Node_InputKeyEvent_1(struct FKey Key); // Function Mod038.Mod038_C.InpActEvt_F6_K2Node_InputKeyEvent_1
	void ReceiveBeginPlay(); // Function Mod038.Mod038_C.ReceiveBeginPlay
	void Mod Initialized(struct APlayerController* LocalPlayer); // Function Mod038.Mod038_C.Mod Initialized
	void Mod Started(); // Function Mod038.Mod038_C.Mod Started
	void Mod Stopped(); // Function Mod038.Mod038_C.Mod Stopped
	void Mod UI Opened(); // Function Mod038.Mod038_C.Mod UI Opened
	void Mod UI Closed(); // Function Mod038.Mod038_C.Mod UI Closed
	void Settings Changed(); // Function Mod038.Mod038_C.Settings Changed
	void On Initialize Handled(struct APlayerController* LocalPlayer); // Function Mod038.Mod038_C.On Initialize Handled
	void On Start Handled(); // Function Mod038.Mod038_C.On Start Handled
	void On Stop Handled(); // Function Mod038.Mod038_C.On Stop Handled
	void On UIOpened Handled(); // Function Mod038.Mod038_C.On UIOpened Handled
	void On UIClosed Handled(); // Function Mod038.Mod038_C.On UIClosed Handled
	void Save UI Changes Requested(); // Function Mod038.Mod038_C.Save UI Changes Requested
	void Christmas Event(); // Function Mod038.Mod038_C.Christmas Event
	void Halloween Event(); // Function Mod038.Mod038_C.Halloween Event
	void Turret 3 Event(); // Function Mod038.Mod038_C.Turret 3 Event
	void Turret 4 Event(); // Function Mod038.Mod038_C.Turret 4 Event
	void Move Artifact(); // Function Mod038.Mod038_C.Move Artifact
	void ExecuteUbergraph_Mod038(int32_t EntryPoint); // Function Mod038.Mod038_C.ExecuteUbergraph_Mod038
};

