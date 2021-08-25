// BlueprintGeneratedClass BP_DiscordEoMConsole.BP_DiscordEoMConsole_C
// Size: 0x261 (Inherited: 0x220)
struct ABP_DiscordEoMConsole_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Cube1; // 0x228(0x08)
	struct UWidgetComponent* PSA; // 0x230(0x08)
	struct UBoxComponent* Box; // 0x238(0x08)
	struct UWidgetComponent* Widget; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float LastUpdate; // 0x250(0x04)
	char UnknownData_254[0x4]; // 0x254(0x04)
	struct UConsole_DiscordEoMScreen_C* DiscordConsole; // 0x258(0x08)
	bool HEOM; // 0x260(0x01)

	void ReceiveBeginPlay(); // Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveTick
	void RecieveEoMData(bool HasEoM); // Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.RecieveEoMData
	void ExecuteUbergraph_BP_DiscordEoMConsole(int32_t EntryPoint); // Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ExecuteUbergraph_BP_DiscordEoMConsole
};

