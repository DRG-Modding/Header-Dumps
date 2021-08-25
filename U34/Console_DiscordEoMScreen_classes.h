// WidgetBlueprintGeneratedClass Console_DiscordEoMScreen.Console_DiscordEoMScreen_C
// Size: 0x2f0 (Inherited: 0x230)
struct UConsole_DiscordEoMScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* avatar; // 0x238(0x08)
	struct UCanvasPanel* AvatarPanel; // 0x240(0x08)
	struct UTextBlock* FlavorTextBlock; // 0x248(0x08)
	struct UImage* Image_2; // 0x250(0x08)
	struct UImage* Image_3; // 0x258(0x08)
	struct UImage* Image_4; // 0x260(0x08)
	struct UTextBlock* NameTextBlock; // 0x268(0x08)
	struct UTextBlock* Online; // 0x270(0x08)
	struct UTextBlock* Total; // 0x278(0x08)
	struct ABP_PlayerController_SpaceRig_C* Player; // 0x280(0x08)
	float TimeSinceLastUpdate; // 0x288(0x04)
	int32_t CurrentPresence; // 0x28c(0x04)
	int32_t CurrentMember; // 0x290(0x04)
	int32_t PreviousPresence; // 0x294(0x04)
	int32_t PreviousMember; // 0x298(0x04)
	char UnknownData_29C[0x4]; // 0x29c(0x04)
	struct FText PlayerNameText; // 0x2a0(0x18)
	struct FText FlavorText; // 0x2b8(0x18)
	struct FMulticastInlineDelegate ScreenChanged; // 0x2d0(0x10)
	struct TArray<struct FText> FlavorTextOptions; // 0x2e0(0x10)

	void ClearText(); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ClearText
	void OnFail_D5557812434CB42B270037821C78EAB5(struct UTexture2DDynamic* Texture); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnFail_D5557812434CB42B270037821C78EAB5
	void OnSuccess_D5557812434CB42B270037821C78EAB5(struct UTexture2DDynamic* Texture); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnSuccess_D5557812434CB42B270037821C78EAB5
	void Construct(); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Tick
	void UpdateUI(struct FDiscordServerData discordServerCount); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.UpdateUI
	void Do Running Text(struct FText Text, int32_t Index, struct UTextBlock* Target); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Do Running Text
	void PreConstruct(bool IsDesignTime); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.PreConstruct
	void On EoM Data Received(bool HasEoM); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.On EoM Data Received
	void OpenDescriptions(); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OpenDescriptions
	void Player Name Running Effect(); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Name Running Effect
	void Player Flavor Text Running Effect(); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Flavor Text Running Effect
	void ExecuteUbergraph_Console_DiscordEoMScreen(int32_t EntryPoint); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ExecuteUbergraph_Console_DiscordEoMScreen
	void ScreenChanged__DelegateSignature(); // Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ScreenChanged__DelegateSignature
};

