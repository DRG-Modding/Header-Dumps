// BlueprintGeneratedClass Mod035.Mod035_C
// Size: 0x348 (Inherited: 0x2b0)
struct AMod035_C : AModBaseV2_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UUpgradedDorettaUI_C* Upgraded Doretta UI; // 0x2b8(0x08)
	struct FString Save Location; // 0x2c0(0x10)
	struct UUpgradedDorettaSaveGame_C* Upgraded Doretta Save Game; // 0x2d0(0x08)
	bool Is Turret 1; // 0x2d8(0x01)
	bool Is Turret 2; // 0x2d9(0x01)
	char UnknownData_2DA[0x6]; // 0x2da(0x06)
	struct AActor* Turret 1; // 0x2e0(0x08)
	struct AActor* Turret 2; // 0x2e8(0x08)
	bool Is Turret 3; // 0x2f0(0x01)
	bool Is Turret 4; // 0x2f1(0x01)
	char UnknownData_2F2[0x6]; // 0x2f2(0x06)
	struct AActor* Turret 3; // 0x2f8(0x08)
	struct AActor* Turret 4; // 0x300(0x08)
	struct AActor* Deposit 1; // 0x308(0x08)
	bool Is Deposit 1; // 0x310(0x01)
	bool Is Deposit 2; // 0x311(0x01)
	bool Is Pipe 1; // 0x312(0x01)
	bool Is Pipe 2; // 0x313(0x01)
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct AActor* Deposit 2; // 0x318(0x08)
	struct AActor* Pipe 1; // 0x320(0x08)
	struct AActor* Pipe 2; // 0x328(0x08)
	struct AActor* Defense 1; // 0x330(0x08)
	struct AActor* Speed 1; // 0x338(0x08)
	struct AActor* Light 1; // 0x340(0x08)

	void Toggle Defense 1(struct AActor* Doretta); // Function Mod035.Mod035_C.Toggle Defense 1
	void Toggle Waste 1(struct AActor* Doretta); // Function Mod035.Mod035_C.Toggle Waste 1
	void Toggle Light 1(struct AActor* Doretta); // Function Mod035.Mod035_C.Toggle Light 1
	void Toggle Pipe 2(struct AActor* Right Track); // Function Mod035.Mod035_C.Toggle Pipe 2
	void Toggle Pipe 1(struct AActor* Left Track); // Function Mod035.Mod035_C.Toggle Pipe 1
	void Toggle Deposit 2(struct AActor* Doretta); // Function Mod035.Mod035_C.Toggle Deposit 2
	void Toggle Deposit 1(struct AActor* Doretta); // Function Mod035.Mod035_C.Toggle Deposit 1
	void Toggle Turret 4(struct AActor* Doretta); // Function Mod035.Mod035_C.Toggle Turret 4
	void Toggle Turret 3(struct AActor* Doretta); // Function Mod035.Mod035_C.Toggle Turret 3
	void Toggle Turret 2(struct AActor* Doretta); // Function Mod035.Mod035_C.Toggle Turret 2
	void Toggle Turret 1(struct AActor* Doretta); // Function Mod035.Mod035_C.Toggle Turret 1
	void Attach Actor To Parent(struct AActor* Class, struct FTransform Spawn Transform, struct AActor* Parent Actor, struct AActor* AttachedActor); // Function Mod035.Mod035_C.Attach Actor To Parent
	void Save Config(); // Function Mod035.Mod035_C.Save Config
	void Load Config(); // Function Mod035.Mod035_C.Load Config
	void ReceiveBeginPlay(); // Function Mod035.Mod035_C.ReceiveBeginPlay
	void Mod Initialized(struct APlayerController* LocalPlayer); // Function Mod035.Mod035_C.Mod Initialized
	void Mod Started(); // Function Mod035.Mod035_C.Mod Started
	void Mod Stopped(); // Function Mod035.Mod035_C.Mod Stopped
	void Mod UI Opened(); // Function Mod035.Mod035_C.Mod UI Opened
	void Mod UI Closed(); // Function Mod035.Mod035_C.Mod UI Closed
	void Settings Changed(); // Function Mod035.Mod035_C.Settings Changed
	void On Initialize Handled(struct APlayerController* LocalPlayer); // Function Mod035.Mod035_C.On Initialize Handled
	void On Start Handled(); // Function Mod035.Mod035_C.On Start Handled
	void On Stop Handled(); // Function Mod035.Mod035_C.On Stop Handled
	void On UIOpened Handled(); // Function Mod035.Mod035_C.On UIOpened Handled
	void On UIClosed Handled(); // Function Mod035.Mod035_C.On UIClosed Handled
	void Save UI Changes Requested(); // Function Mod035.Mod035_C.Save UI Changes Requested
	void Find Doretta(); // Function Mod035.Mod035_C.Find Doretta
	void Turret 1 Event(); // Function Mod035.Mod035_C.Turret 1 Event
	void Pipe 2 Event(); // Function Mod035.Mod035_C.Pipe 2 Event
	void Turret 2 Event(); // Function Mod035.Mod035_C.Turret 2 Event
	void Turret 3 Event(); // Function Mod035.Mod035_C.Turret 3 Event
	void Turret 4 Event(); // Function Mod035.Mod035_C.Turret 4 Event
	void Deposit 1 Event(); // Function Mod035.Mod035_C.Deposit 1 Event
	void Deposit 2 Event(); // Function Mod035.Mod035_C.Deposit 2 Event
	void Pipe 1 Event(); // Function Mod035.Mod035_C.Pipe 1 Event
	void Waste 1 Event(); // Function Mod035.Mod035_C.Waste 1 Event
	void Light 1 Event(); // Function Mod035.Mod035_C.Light 1 Event
	void Defense 1 Event(); // Function Mod035.Mod035_C.Defense 1 Event
	void Spawn Goo Waste(); // Function Mod035.Mod035_C.Spawn Goo Waste
	void ExecuteUbergraph_Mod035(int32_t EntryPoint); // Function Mod035.Mod035_C.ExecuteUbergraph_Mod035
};

