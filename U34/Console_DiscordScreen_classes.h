// WidgetBlueprintGeneratedClass Console_DiscordScreen.Console_DiscordScreen_C
// Size: 0x411 (Inherited: 0x230)
struct UConsole_DiscordScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Disappear; // 0x238(0x08)
	struct UWidgetAnimation* CreditsBlinkAnimation; // 0x240(0x08)
	struct UWidgetAnimation* LogoAnimation; // 0x248(0x08)
	struct UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader; // 0x250(0x08)
	struct UVerticalBox* ClaimReward; // 0x258(0x08)
	struct UVerticalBox* COLLECT; // 0x260(0x08)
	struct UTextBlock* CollectTextLabel; // 0x268(0x08)
	struct UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x270(0x08)
	struct UUI_ImageTinted_C* CreditsBlink; // 0x278(0x08)
	struct UCanvasPanel* CreditsPanel; // 0x280(0x08)
	struct UITM_CommunityGoal_ConsoleScreenV2_C* CurrentProgress; // 0x288(0x08)
	struct UVerticalBox* FREEBEERS; // 0x290(0x08)
	struct UImage* Image_2; // 0x298(0x08)
	struct UImage* Image_3; // 0x2a0(0x08)
	struct UImage* Image_4; // 0x2a8(0x08)
	struct UITM_Community_Console_ClaimReward_C* ITM_Community_Console_ClaimReward; // 0x2b0(0x08)
	struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C* ITM_CommunityGoalRecruitment_ConsoleScreenV1; // 0x2b8(0x08)
	struct UITM_FactionLogo_C* ITM_FactionLogo; // 0x2c0(0x08)
	struct UITM_FactionLogo_C* ITM_FactionLogo_C_2; // 0x2c8(0x08)
	struct UITM_FactionLogo_C* ITM_FactionLogo_C_3; // 0x2d0(0x08)
	struct UVerticalBox* JOIN; // 0x2d8(0x08)
	struct UTextBlock* JoinTextLabel; // 0x2e0(0x08)
	struct UVerticalBox* LOADING; // 0x2e8(0x08)
	struct UWidgetSwitcher* MainWidgetSwitcher; // 0x2f0(0x08)
	struct UTextBlock* Name; // 0x2f8(0x08)
	struct UTextBlock* Online; // 0x300(0x08)
	struct UVerticalBox* Progress; // 0x308(0x08)
	struct UVerticalBox* RECRUITMENT; // 0x310(0x08)
	struct UVerticalBox* SELECTFACTION; // 0x318(0x08)
	struct USizeBox* SydicateLogoBox; // 0x320(0x08)
	struct UTextBlock* TextBlock_1; // 0x328(0x08)
	struct UTextBlock* TextBlock_2; // 0x330(0x08)
	struct UTextBlock* TextBlock_3; // 0x338(0x08)
	struct UTextBlock* TextBlock_4; // 0x340(0x08)
	struct UTextBlock* Total; // 0x348(0x08)
	struct UITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C* TotalProgress; // 0x350(0x08)
	struct UCircularThrobber* Twitch_Loading; // 0x358(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted; // 0x360(0x08)
	struct UUI_ImageTinted_C* UI_ImageTinted_C_3; // 0x368(0x08)
	struct ABP_PlayerController_SpaceRig_C* Player; // 0x370(0x08)
	float TimeSinceLastUpdate; // 0x378(0x04)
	bool IsUserIn; // 0x37c(0x01)
	char UnknownData_37D[0x3]; // 0x37d(0x03)
	int32_t CurrentPresence; // 0x380(0x04)
	int32_t CurrentMember; // 0x384(0x04)
	int32_t PreviousPresence; // 0x388(0x04)
	int32_t PreviousMember; // 0x38c(0x04)
	float TimeSinceLoadStarted; // 0x390(0x04)
	bool IsLoading; // 0x394(0x01)
	char UnknownData_395[0x3]; // 0x395(0x03)
	float LoadingTime; // 0x398(0x04)
	char UnknownData_39C[0x4]; // 0x39c(0x04)
	struct FText JoinText; // 0x3a0(0x18)
	struct FText CollectText; // 0x3b8(0x18)
	struct FText DoneText; // 0x3d0(0x18)
	bool State; // 0x3e8(0x01)
	char UnknownData_3E9[0x7]; // 0x3e9(0x07)
	struct FMulticastInlineDelegate ScreenChanged; // 0x3f0(0x10)
	struct TArray<struct UCommunityGoalFaction*> FactionData; // 0x400(0x10)
	enum class ECommunityUIState CurrentState; // 0x410(0x01)

	void Handle Community Goal Content state(); // Function Console_DiscordScreen.Console_DiscordScreen_C.Handle Community Goal Content state
	void Update Content Switcher Content(); // Function Console_DiscordScreen.Console_DiscordScreen_C.Update Content Switcher Content
	void MinersUnionTier(float DSMUTier); // Function Console_DiscordScreen.Console_DiscordScreen_C.MinersUnionTier
	void Set Goals(struct TArray<struct FString> Goals, struct TArray<float> Values, struct TArray<int32_t> Members); // Function Console_DiscordScreen.Console_DiscordScreen_C.Set Goals
	void StopAllLogos(); // Function Console_DiscordScreen.Console_DiscordScreen_C.StopAllLogos
	void FactionLogosOn(); // Function Console_DiscordScreen.Console_DiscordScreen_C.FactionLogosOn
	void SetUsable(bool Usable); // Function Console_DiscordScreen.Console_DiscordScreen_C.SetUsable
	void SetScreen(bool Appear, bool force); // Function Console_DiscordScreen.Console_DiscordScreen_C.SetScreen
	void LogoOn(); // Function Console_DiscordScreen.Console_DiscordScreen_C.LogoOn
	void CreditsOn(); // Function Console_DiscordScreen.Console_DiscordScreen_C.CreditsOn
	void ClearTextLabels(); // Function Console_DiscordScreen.Console_DiscordScreen_C.ClearTextLabels
	void StartLoad(float LoadingTime); // Function Console_DiscordScreen.Console_DiscordScreen_C.StartLoad
	void RefreshUI(); // Function Console_DiscordScreen.Console_DiscordScreen_C.RefreshUI
	void Construct(); // Function Console_DiscordScreen.Console_DiscordScreen_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Console_DiscordScreen.Console_DiscordScreen_C.Tick
	void UpdateUI(struct FDiscordServerData discordServerCount); // Function Console_DiscordScreen.Console_DiscordScreen_C.UpdateUI
	void UserInServer(bool isInServer); // Function Console_DiscordScreen.Console_DiscordScreen_C.UserInServer
	void Do Running Text(struct FText Text, int32_t Index, struct UTextBlock* Target); // Function Console_DiscordScreen.Console_DiscordScreen_C.Do Running Text
	void PreConstruct(bool IsDesignTime); // Function Console_DiscordScreen.Console_DiscordScreen_C.PreConstruct
	void Init(); // Function Console_DiscordScreen.Console_DiscordScreen_C.Init
	void Stop(); // Function Console_DiscordScreen.Console_DiscordScreen_C.Stop
	void TimedUserRequest(float Time); // Function Console_DiscordScreen.Console_DiscordScreen_C.TimedUserRequest
	void RequestUserInByTime(); // Function Console_DiscordScreen.Console_DiscordScreen_C.RequestUserInByTime
	void OnFactionsDataRecievedEvent(struct TArray<struct FString> Goals, struct TArray<float> Values, struct TArray<int32_t> Members); // Function Console_DiscordScreen.Console_DiscordScreen_C.OnFactionsDataRecievedEvent
	void OnCGSData(bool stateReceived); // Function Console_DiscordScreen.Console_DiscordScreen_C.OnCGSData
	void OnCheckUI(); // Function Console_DiscordScreen.Console_DiscordScreen_C.OnCheckUI
	void OnGoalInitialized(); // Function Console_DiscordScreen.Console_DiscordScreen_C.OnGoalInitialized
	void ExecuteUbergraph_Console_DiscordScreen(int32_t EntryPoint); // Function Console_DiscordScreen.Console_DiscordScreen_C.ExecuteUbergraph_Console_DiscordScreen
	void ScreenChanged__DelegateSignature(); // Function Console_DiscordScreen.Console_DiscordScreen_C.ScreenChanged__DelegateSignature
};

