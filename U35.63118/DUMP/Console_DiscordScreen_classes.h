// WidgetBlueprintGeneratedClass Console_DiscordScreen.Console_DiscordScreen_C
// Size: 0x411 (Inherited: 0x230)
struct UConsole_DiscordScreen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Disappear; // 0x238(0x08)
	UWidgetAnimation* CreditsBlinkAnimation; // 0x240(0x08)
	UWidgetAnimation* LogoAnimation; // 0x248(0x08)
	UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader; // 0x250(0x08)
	UVerticalBox* ClaimReward; // 0x258(0x08)
	UVerticalBox* COLLECT; // 0x260(0x08)
	UTextBlock* CollectTextLabel; // 0x268(0x08)
	UConsoleScreen_Notification_C* ConsoleScreen_Notification; // 0x270(0x08)
	UUI_ImageTinted_C* CreditsBlink; // 0x278(0x08)
	UCanvasPanel* CreditsPanel; // 0x280(0x08)
	UITM_CommunityGoal_ConsoleScreenV2_C* CurrentProgress; // 0x288(0x08)
	UVerticalBox* FreeBeers; // 0x290(0x08)
	UImage* Image_2; // 0x298(0x08)
	UImage* Image_3; // 0x2a0(0x08)
	UImage* Image_4; // 0x2a8(0x08)
	UITM_Community_Console_ClaimReward_C* ITM_Community_Console_ClaimReward; // 0x2b0(0x08)
	UITM_CommunityGoalRecruitment_ConsoleScreenV1_C* ITM_CommunityGoalRecruitment_ConsoleScreenV1; // 0x2b8(0x08)
	UITM_FactionLogo_C* ITM_FactionLogo; // 0x2c0(0x08)
	UITM_FactionLogo_C* ITM_FactionLogo_C_2; // 0x2c8(0x08)
	UITM_FactionLogo_C* ITM_FactionLogo_C_3; // 0x2d0(0x08)
	UVerticalBox* JOIN; // 0x2d8(0x08)
	UTextBlock* JoinTextLabel; // 0x2e0(0x08)
	UVerticalBox* LOADING; // 0x2e8(0x08)
	UWidgetSwitcher* MainWidgetSwitcher; // 0x2f0(0x08)
	UTextBlock* Name; // 0x2f8(0x08)
	UTextBlock* Online; // 0x300(0x08)
	UVerticalBox* Progress; // 0x308(0x08)
	UVerticalBox* RECRUITMENT; // 0x310(0x08)
	UVerticalBox* SELECTFACTION; // 0x318(0x08)
	USizeBox* SydicateLogoBox; // 0x320(0x08)
	UTextBlock* TextBlock_1; // 0x328(0x08)
	UTextBlock* TextBlock_2; // 0x330(0x08)
	UTextBlock* TextBlock_3; // 0x338(0x08)
	UTextBlock* TextBlock_4; // 0x340(0x08)
	UTextBlock* Total; // 0x348(0x08)
	UITM_CommunityGoal_TotalProgress_ConsoleScreenV2_C* TotalProgress; // 0x350(0x08)
	UCircularThrobber* Twitch_Loading; // 0x358(0x08)
	UUI_ImageTinted_C* UI_ImageTinted; // 0x360(0x08)
	UUI_ImageTinted_C* UI_ImageTinted_C_3; // 0x368(0x08)
	ABP_PlayerController_SpaceRig_C* Player; // 0x370(0x08)
	float TimeSinceLastUpdate; // 0x378(0x04)
	bool IsUserIn; // 0x37c(0x01)
	int32_t CurrentPresence; // 0x380(0x04)
	int32_t CurrentMember; // 0x384(0x04)
	int32_t PreviousPresence; // 0x388(0x04)
	int32_t PreviousMember; // 0x38c(0x04)
	float TimeSinceLoadStarted; // 0x390(0x04)
	bool IsLoading; // 0x394(0x01)
	float LoadingTime; // 0x398(0x04)
	FText JoinText; // 0x3a0(0x18)
	FText CollectText; // 0x3b8(0x18)
	FText DoneText; // 0x3d0(0x18)
	bool State; // 0x3e8(0x01)
	FMulticastInlineDelegate ScreenChanged; // 0x3f0(0x10)
	TArray<UCommunityGoalFaction*> FactionData; // 0x400(0x10)
	enum class ECommunityUIState CurrentState; // 0x410(0x01)

	void Handle Community Goal Content state();
	void Update Content Switcher Content();
	void MinersUnionTier(float DSMUTier);
	void Set Goals(TArray<FString> Goals, TArray<float> Values, TArray<int32_t> Members);
	void StopAllLogos();
	void FactionLogosOn();
	void SetUsable(bool Usable);
	void SetScreen(bool Appear, bool force);
	void LogoOn();
	void CreditsOn();
	void ClearTextLabels();
	void StartLoad(float LoadingTime);
	void RefreshUI();
	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void UpdateUI(FDiscordServerData discordServerCount);
	void UserInServer(bool isInServer);
	void Do Running Text(FText Text, int32_t Index, UTextBlock* Target);
	void PreConstruct(bool IsDesignTime);
	void Init();
	void Stop();
	void TimedUserRequest(float Time);
	void RequestUserInByTime();
	void OnFactionsDataRecievedEvent(TArray<FString> Goals, TArray<float> Values, TArray<int32_t> Members);
	void OnCGSData(bool stateReceived);
	void OnCheckUI();
	void OnGoalInitialized();
	void ExecuteUbergraph_Console_DiscordScreen(int32_t EntryPoint);
	void ScreenChanged__DelegateSignature();
};

