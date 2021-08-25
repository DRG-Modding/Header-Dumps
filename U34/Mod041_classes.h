// BlueprintGeneratedClass Mod041.Mod041_C
// Size: 0x608 (Inherited: 0x2b0)
struct AMod041_C : AModBaseV2_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct FName Custom Mats Path; // 0x2b8(0x08)
	struct TMap<struct FName, bool> Material Paths; // 0x2c0(0x50)
	struct TArray<struct FString> Ignore Mats Partial Match; // 0x310(0x10)
	struct U041_SaveData_C* Save Data; // 0x320(0x08)
	struct FString Save File Path; // 0x328(0x10)
	struct APlayerController* Local Controller; // 0x338(0x08)
	struct U041_ManagerUI_C* UI; // 0x340(0x08)
	struct TMap<struct FString, struct UMaterialInstanceDynamic*> Materials With IDs; // 0x348(0x50)
	struct TMap<struct FString, struct UStaticMesh*> Cached Meshes; // 0x398(0x50)
	struct ABP_XharCustomizationConsole_C* Wardrobe; // 0x3e8(0x08)
	struct ABP_Donkey_C* Garage Molly; // 0x3f0(0x08)
	struct ACameraActor* Garage Cam; // 0x3f8(0x08)
	struct AActor* Active Mat Ball; // 0x400(0x08)
	struct FName Mat Ball tag; // 0x408(0x08)
	struct U041_MatSelectionUI_C* Mat Selection UI; // 0x410(0x08)
	struct TArray<struct AActor*> Mat Preview Balls; // 0x418(0x10)
	struct TArray<struct FString> Ignore Mats Exact Match; // 0x428(0x10)
	struct TArray<struct FString> Material Name Prefixes; // 0x438(0x10)
	struct TArray<struct FString> Extended Mat Set IDs; // 0x448(0x10)
	struct FString Default Body Mat ID; // 0x458(0x10)
	struct FString Default Leg Mat ID; // 0x468(0x10)
	struct FString Default Chute Mat ID; // 0x478(0x10)
	struct TArray<struct AActor*> Selected Mat UIs; // 0x488(0x10)
	bool Garage Is Open; // 0x498(0x01)
	bool Main Body Layer; // 0x499(0x01)
	bool Top Layer; // 0x49a(0x01)
	bool Misc Layer; // 0x49b(0x01)
	char UnknownData_49C[0x4]; // 0x49c(0x04)
	struct FString Default Lights Mat ID; // 0x4a0(0x10)
	int32_t Body Mat Index; // 0x4b0(0x04)
	int32_t Leg Mat Index; // 0x4b4(0x04)
	int32_t Chute Mat Index; // 0x4b8(0x04)
	int32_t Lights Mat Index; // 0x4bc(0x04)
	struct A041_ConsumeUseInput_C* Use Key Consumer; // 0x4c0(0x08)
	struct FTimerHandle Paint Loop; // 0x4c8(0x08)
	struct FTransform 0; // 0x4d0(0x30)
	bool Lights Layer; // 0x500(0x01)
	char UnknownData_501[0x7]; // 0x501(0x07)
	struct A041_ConsumeEscapeKey_C* Esc Consume; // 0x508(0x08)
	struct FTransform Original Player Cam Tranform; // 0x510(0x30)
	struct FName Painted Tag; // 0x540(0x08)
	bool Mat Loaded; // 0x548(0x01)
	char UnknownData_549[0x7]; // 0x549(0x07)
	struct TArray<struct FAssetData> Assets; // 0x550(0x10)
	int32_t Current Asset Index; // 0x560(0x04)
	char UnknownData_564[0x4]; // 0x564(0x04)
	struct TSet<struct FAssetData> Assets Set; // 0x568(0x50)
	struct TMap<struct FString, struct FString> Mat IDs With Names; // 0x5b8(0x50)

	void Set Saved Light Mat(struct FString mat); // Function Mod041.Mod041_C.Set Saved Light Mat
	void Set Saved Chute Mat(struct FString mat); // Function Mod041.Mod041_C.Set Saved Chute Mat
	void Set Saved Leg Mat(struct FString mat); // Function Mod041.Mod041_C.Set Saved Leg Mat
	void Set Saved Body Mat(struct FString mat); // Function Mod041.Mod041_C.Set Saved Body Mat
	void Get Saved Lights Mat(struct FString mat); // Function Mod041.Mod041_C.Get Saved Lights Mat
	void Get Saved Chutes Mat(struct FString mat); // Function Mod041.Mod041_C.Get Saved Chutes Mat
	void Get Saved Legs Mat(struct FString mat); // Function Mod041.Mod041_C.Get Saved Legs Mat
	void Get Saved Body Mat(struct FString mat); // Function Mod041.Mod041_C.Get Saved Body Mat
	void Apply Paint To Mollys In Mission(bool Only Unpainted); // Function Mod041.Mod041_C.Apply Paint To Mollys In Mission
	void Set Button Mesh Layers(struct FString Body Mat Name, struct FString Leg Mat Name, struct FString Chute Mat Name, struct ABP_Donkey_C* Molly); // Function Mod041.Mod041_C.Set Button Mesh Layers
	void Enforce Player Cam Garage Position(); // Function Mod041.Mod041_C.Enforce Player Cam Garage Position
	void Randomise Layers for Mission If Needed(); // Function Mod041.Mod041_C.Randomise Layers for Mission If Needed
	bool Enabled Use Input Hijack(); // Function Mod041.Mod041_C.Enabled Use Input Hijack
	bool Player Can Open Wardrobe(); // Function Mod041.Mod041_C.Player Can Open Wardrobe
	void Toggle Mission Preview HUD(bool Visible); // Function Mod041.Mod041_C.Toggle Mission Preview HUD
	void Spawn Wardrobe(); // Function Mod041.Mod041_C.Spawn Wardrobe
	void Force Set All Layers(struct FString Body Mat ID, struct FString Leg Mat ID, struct FString Chute Mat ID, struct FString Light Mat ID, struct ABP_Donkey_C* Molly); // Function Mod041.Mod041_C.Force Set All Layers
	void Randomise And Save Active Layers(struct ABP_Donkey_C* Molly); // Function Mod041.Mod041_C.Randomise And Save Active Layers
	void Get Random Mat Name(struct FString Name); // Function Mod041.Mod041_C.Get Random Mat Name
	void Is Ignored Mat(struct FString Mat Name, bool Ignore); // Function Mod041.Mod041_C.Is Ignored Mat
	void Set And Save Active Layers(struct FString Mat Name, struct ABP_Donkey_C* Molly); // Function Mod041.Mod041_C.Set And Save Active Layers
	void Reset And Save Active Layers(struct ABP_Donkey_C* Molly); // Function Mod041.Mod041_C.Reset And Save Active Layers
	void Toggle Sky Light(bool New Enabled State); // Function Mod041.Mod041_C.Toggle Sky Light
	void Get Garage Floor Positions(int32_t Tiles Wide, int32_t Tiles Deep, float Tile Size, struct TArray<struct FVector> Positions); // Function Mod041.Mod041_C.Get Garage Floor Positions
	void Get Asset Mesh(struct FName Asset Path, struct FName Asset Name, struct UStaticMesh* Mesh); // Function Mod041.Mod041_C.Get Asset Mesh
	void Spawn Static Mesh(struct FName Mesh Path, struct FName Mesh Name, struct FVector Location, struct FRotator Rotation, struct FVector Scale, struct AActor* Static Mesh Actor); // Function Mod041.Mod041_C.Spawn Static Mesh
	void Set Current Mat Preview Page(int32_t New Page); // Function Mod041.Mod041_C.Set Current Mat Preview Page
	void Exit Garage(); // Function Mod041.Mod041_C.Exit Garage
	void Open Garage(); // Function Mod041.Mod041_C.Open Garage
	void Construct Garage(); // Function Mod041.Mod041_C.Construct Garage
	void Add Default Mats(); // Function Mod041.Mod041_C.Add Default Mats
	void Initialise Materials(); // Function Mod041.Mod041_C.Initialise Materials
	void Get Material ID(struct FName Material Asset Path, struct FString ID); // Function Mod041.Mod041_C.Get Material ID
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(struct FKey Key); // Function Mod041.Mod041_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey Key); // Function Mod041.Mod041_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
	void Enforce UI Mode(); // Function Mod041.Mod041_C.Enforce UI Mode
	void Start(); // Function Mod041.Mod041_C.Start
	void Stop(); // Function Mod041.Mod041_C.Stop
	void Set New Molly Mats(); // Function Mod041.Mod041_C.Set New Molly Mats
	void ReceiveEndPlay(char EndPlayReason); // Function Mod041.Mod041_C.ReceiveEndPlay
	void ReceiveDestroyed(); // Function Mod041.Mod041_C.ReceiveDestroyed
	void Save(); // Function Mod041.Mod041_C.Save
	void Handle Use Key(); // Function Mod041.Mod041_C.Handle Use Key
	void Setup Esc Hijack(); // Function Mod041.Mod041_C.Setup Esc Hijack
	void Handle Close Menu Key Press(); // Function Mod041.Mod041_C.Handle Close Menu Key Press
	void Manage Mission Preview UI(); // Function Mod041.Mod041_C.Manage Mission Preview UI
	void ReceiveTick(float DeltaSeconds); // Function Mod041.Mod041_C.ReceiveTick
	void Init(struct APlayerController* LocalPlayer); // Function Mod041.Mod041_C.Init
	void ReceiveBeginPlay(); // Function Mod041.Mod041_C.ReceiveBeginPlay
	void ExecuteUbergraph_Mod041(int32_t EntryPoint); // Function Mod041.Mod041_C.ExecuteUbergraph_Mod041
};

