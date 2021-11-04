// WidgetBlueprintGeneratedClass Console_DiscordEoMScreen.Console_DiscordEoMScreen_C
// Size: 0x2f0 (Inherited: 0x230)
struct UConsole_DiscordEoMScreen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* avatar; // 0x238(0x08)
	UCanvasPanel* AvatarPanel; // 0x240(0x08)
	UTextBlock* FlavorTextBlock; // 0x248(0x08)
	UImage* Image_2; // 0x250(0x08)
	UImage* Image_3; // 0x258(0x08)
	UImage* Image_4; // 0x260(0x08)
	UTextBlock* NameTextBlock; // 0x268(0x08)
	UTextBlock* Online; // 0x270(0x08)
	UTextBlock* Total; // 0x278(0x08)
	ABP_PlayerController_SpaceRig_C* Player; // 0x280(0x08)
	float TimeSinceLastUpdate; // 0x288(0x04)
	int32_t CurrentPresence; // 0x28c(0x04)
	int32_t CurrentMember; // 0x290(0x04)
	int32_t PreviousPresence; // 0x294(0x04)
	int32_t PreviousMember; // 0x298(0x04)
	FText PlayerNameText; // 0x2a0(0x18)
	FText FlavorText; // 0x2b8(0x18)
	FMulticastInlineDelegate ScreenChanged; // 0x2d0(0x10)
	TArray<FText> FlavorTextOptions; // 0x2e0(0x10)

	void ClearText();
	void OnFail_D5557812434CB42B270037821C78EAB5(UTexture2DDynamic* Texture);
	void OnSuccess_D5557812434CB42B270037821C78EAB5(UTexture2DDynamic* Texture);
	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void UpdateUI(FDiscordServerData discordServerCount);
	void Do Running Text(FText Text, int32_t Index, UTextBlock* Target);
	void PreConstruct(bool IsDesignTime);
	void On EoM Data Received(bool HasEoM);
	void OpenDescriptions();
	void Player Name Running Effect();
	void Player Flavor Text Running Effect();
	void ExecuteUbergraph_Console_DiscordEoMScreen(int32_t EntryPoint);
	void ScreenChanged__DelegateSignature();
};

