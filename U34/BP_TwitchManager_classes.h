// BlueprintGeneratedClass BP_TwitchManager.BP_TwitchManager_C
// Size: 0x290 (Inherited: 0x220)
struct ABP_TwitchManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FMulticastInlineDelegate On Viewer Redeem; // 0x230(0x10)
	struct FString Save Location; // 0x240(0x10)
	struct USaveGame* Queue Save Game; // 0x250(0x08)
	struct FTimerHandle Queue Timer; // 0x258(0x08)
	bool Is Queue Paused; // 0x260(0x01)
	bool Allow Queue In Spacerig; // 0x261(0x01)
	char UnknownData_262[0x6]; // 0x262(0x06)
	struct TArray<struct FString> Banned Viewers; // 0x268(0x10)
	int32_t Players Downed Auto Pause Count; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct FTimerHandle Nameplate Render Timer; // 0x280(0x08)
	struct APawn* Nameplate View Target; // 0x288(0x08)

	void Destroy All Nameplates(); // Function BP_TwitchManager.BP_TwitchManager_C.Destroy All Nameplates
	bool Can Process Queue(); // Function BP_TwitchManager.BP_TwitchManager_C.Can Process Queue
	bool Is Auto Pause Queue Active(); // Function BP_TwitchManager.BP_TwitchManager_C.Is Auto Pause Queue Active
	void Stop Queue(); // Function BP_TwitchManager.BP_TwitchManager_C.Stop Queue
	void Start Queue(float Interval, float Start Delay); // Function BP_TwitchManager.BP_TwitchManager_C.Start Queue
	bool Is Viewer Banned(struct FString SourceString); // Function BP_TwitchManager.BP_TwitchManager_C.Is Viewer Banned
	void Setup Configuration(bool Allow Queue In Spacerig, struct TArray<struct FString> Banned Viewers, int32_t Players Downed Auto Pause Count); // Function BP_TwitchManager.BP_TwitchManager_C.Setup Configuration
	void ReceiveBeginPlay(); // Function BP_TwitchManager.BP_TwitchManager_C.ReceiveBeginPlay
	void Event Start Queue(float Interval, float Start Delay); // Function BP_TwitchManager.BP_TwitchManager_C.Event Start Queue
	void Queue Tick Event(); // Function BP_TwitchManager.BP_TwitchManager_C.Queue Tick Event
	void ReceiveEndPlay(char EndPlayReason); // Function BP_TwitchManager.BP_TwitchManager_C.ReceiveEndPlay
	void Nameplate Render Tick Event(); // Function BP_TwitchManager.BP_TwitchManager_C.Nameplate Render Tick Event
	void Event Start Nameplate Render(); // Function BP_TwitchManager.BP_TwitchManager_C.Event Start Nameplate Render
	void ExecuteUbergraph_BP_TwitchManager(int32_t EntryPoint); // Function BP_TwitchManager.BP_TwitchManager_C.ExecuteUbergraph_BP_TwitchManager
	void On Viewer Redeem__DelegateSignature(struct FString Profile Name, struct FString Viewer Name, struct FString Viewer Message); // Function BP_TwitchManager.BP_TwitchManager_C.On Viewer Redeem__DelegateSignature
};

