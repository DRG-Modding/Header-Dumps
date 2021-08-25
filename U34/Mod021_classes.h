// BlueprintGeneratedClass Mod021.Mod021_C
// Size: 0x2f0 (Inherited: 0x2b0)
struct AMod021_C : AModBaseV2_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct FString Settings Save Location; // 0x2b8(0x10)
	struct USpawnMenuSettingsSave_C* Settings Save Game; // 0x2c8(0x08)
	struct UUI_SpawnMenu_C* UI Spawn Menu; // 0x2d0(0x08)
	struct ABP_SpawnManager_C* Spawn Manager; // 0x2d8(0x08)
	struct UHUD_ViewerInteractivity_C* HUD Notification; // 0x2e0(0x08)
	struct ABP_TwitchManager_C* Twitch Manager; // 0x2e8(0x08)

	void CalculateSum(struct TArray<struct FSpawnProfile> Profiles, float Sum); // Function Mod021.Mod021_C.CalculateSum
	void Parse Nameplate Text(struct FString Nameplate Template, struct FString Nameplate Msg Template, struct FString Viewer Name, struct FString Viewer Message, struct FString Nameplate Text); // Function Mod021.Mod021_C.Parse Nameplate Text
	void Spawn Profiles by Name(struct FString Group Name, struct FString Viewer Name, struct FString Viewer Message, bool Show Notification); // Function Mod021.Mod021_C.Spawn Profiles by Name
	void Get Random Profile By Weight(struct TArray<struct FSpawnProfile> Profiles, struct FSpawnProfile Profile); // Function Mod021.Mod021_C.Get Random Profile By Weight
	void Get Profiles By Name(struct FString Group Name, struct TArray<struct FSpawnProfile> Profiles); // Function Mod021.Mod021_C.Get Profiles By Name
	void Deposit Nitra(int32_t amount); // Function Mod021.Mod021_C.Deposit Nitra
	void Destroy UI(); // Function Mod021.Mod021_C.Destroy UI
	void Setup UI(); // Function Mod021.Mod021_C.Setup UI
	void Parse Notification Text(struct FString Original, struct FString Group Name, struct FString Viewer Name, struct FString return value); // Function Mod021.Mod021_C.Parse Notification Text
	void Handle Secret Commands(struct FString Viewer Name, struct FString Viewer Message); // Function Mod021.Mod021_C.Handle Secret Commands
	void Save Settings(); // Function Mod021.Mod021_C.Save Settings
	void Load Settings(); // Function Mod021.Mod021_C.Load Settings
	void ReceiveBeginPlay(); // Function Mod021.Mod021_C.ReceiveBeginPlay
	void UI Settings Changed Event(); // Function Mod021.Mod021_C.UI Settings Changed Event
	void ModBase UI Opened Event(); // Function Mod021.Mod021_C.ModBase UI Opened Event
	void UI Despawn Button Clicked(struct AActor* Actor); // Function Mod021.Mod021_C.UI Despawn Button Clicked
	void UI Spawn Button Clicked(struct AActor* Actor); // Function Mod021.Mod021_C.UI Spawn Button Clicked
	void UI Prevent Natural Creatures Changed(bool Is Prevent Natural Creatures Enabled); // Function Mod021.Mod021_C.UI Prevent Natural Creatures Changed
	void UI Interactivity State Changed(bool Is Interactivity Enabled); // Function Mod021.Mod021_C.UI Interactivity State Changed
	void UI Interactivity Queue Interval Changed(float New Queue Interval); // Function Mod021.Mod021_C.UI Interactivity Queue Interval Changed
	void UI Profile Spawn(struct FString Group Name); // Function Mod021.Mod021_C.UI Profile Spawn
	void On Viewer Redeem Event(struct FString Profile Name, struct FString Viewer Name, struct FString Viewer Message); // Function Mod021.Mod021_C.On Viewer Redeem Event
	void ReceiveEndPlay(char EndPlayReason); // Function Mod021.Mod021_C.ReceiveEndPlay
	void ExecuteUbergraph_Mod021(int32_t EntryPoint); // Function Mod021.Mod021_C.ExecuteUbergraph_Mod021
};

