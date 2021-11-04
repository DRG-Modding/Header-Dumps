// BlueprintGeneratedClass BP_DiscordEoMConsole.BP_DiscordEoMConsole_C
// Size: 0x261 (Inherited: 0x220)
struct ABP_DiscordEoMConsole_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Cube1; // 0x228(0x08)
	UWidgetComponent* PSA; // 0x230(0x08)
	UBoxComponent* Box; // 0x238(0x08)
	UWidgetComponent* Widget; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float LastUpdate; // 0x250(0x04)
	UConsole_DiscordEoMScreen_C* DiscordConsole; // 0x258(0x08)
	bool HEOM; // 0x260(0x01)

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RecieveEoMData(bool HasEoM);
	void ExecuteUbergraph_BP_DiscordEoMConsole(int32_t EntryPoint);
};

