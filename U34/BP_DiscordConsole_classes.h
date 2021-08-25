// BlueprintGeneratedClass BP_DiscordConsole.BP_DiscordConsole_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_DiscordConsole_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Cube1; // 0x228(0x08)
	struct UBP_DiscordInstantUsable_C* BP_DiscordInstantUsable; // 0x230(0x08)
	struct UBoxComponent* ProxmityTrigger; // 0x238(0x08)
	struct UWidgetComponent* PSA; // 0x240(0x08)
	struct UBoxComponent* Box; // 0x248(0x08)
	struct UWidgetComponent* Widget; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float LastUpdate; // 0x260(0x04)
	bool IsUserIn; // 0x264(0x01)
	char UnknownData_265[0x3]; // 0x265(0x03)
	int32_t OverlapCount; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct UConsole_DiscordScreen_C* DiscordConsole; // 0x270(0x08)
	struct ABP_PlayerController_SpaceRig_C* Player; // 0x278(0x08)

	void ValidGetPlayer(struct ABP_PlayerController_SpaceRig_C* Player); // Function BP_DiscordConsole.BP_DiscordConsole_C.ValidGetPlayer
	void SetUsable(bool Usable); // Function BP_DiscordConsole.BP_DiscordConsole_C.SetUsable
	void Answer(bool Yes); // Function BP_DiscordConsole.BP_DiscordConsole_C.Answer
	void ReceiveBeginPlay(); // Function BP_DiscordConsole.BP_DiscordConsole_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function BP_DiscordConsole.BP_DiscordConsole_C.ReceiveTick
	void UserIn(bool isInServer); // Function BP_DiscordConsole.BP_DiscordConsole_C.UserIn
	void BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	void RefreshUsable(); // Function BP_DiscordConsole.BP_DiscordConsole_C.RefreshUsable
	void OnUsedClient(struct ABP_PlayerControllerBase_C* User); // Function BP_DiscordConsole.BP_DiscordConsole_C.OnUsedClient
	void callRefreshUsable(); // Function BP_DiscordConsole.BP_DiscordConsole_C.callRefreshUsable
	void BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature
	void ExecuteUbergraph_BP_DiscordConsole(int32_t EntryPoint); // Function BP_DiscordConsole.BP_DiscordConsole_C.ExecuteUbergraph_BP_DiscordConsole
};

