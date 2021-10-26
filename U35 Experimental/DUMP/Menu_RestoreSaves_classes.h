// WidgetBlueprintGeneratedClass Menu_RestoreSaves.Menu_RestoreSaves_C
// Size: 0x340 (Inherited: 0x270)
struct UMenu_RestoreSaves_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBlurBackground_C* BlurBackground; // 0x278(0x08)
	UBasic_ButtonScalable2_C* BTN_Back; // 0x280(0x08)
	UITM_TopBar_ResourceCounter_C* CreditsCounter; // 0x288(0x08)
	UTextBlock* FailedCloudText; // 0x290(0x08)
	UTextBlock* Header; // 0x298(0x08)
	UITM_TopBar_CharacterIcon_C* ITM_CharacterIcon_C_1; // 0x2a0(0x08)
	UITM_RestoreSave_Resources_C* ITM_RestoreSave_Resources; // 0x2a8(0x08)
	UITM_RestoreSaveCategoryList_Entry_C* ITM_RestoreSaveCategoryList_Entry; // 0x2b0(0x08)
	UITM_TopBar_CharacterLevel_C* ITM_TopBar_CharacterLevel_C_1; // 0x2b8(0x08)
	UITM_TopBar_PlayerRank_C* ITM_TopBar_PlayerRank_C_1; // 0x2c0(0x08)
	UCircularThrobber* LoadingCloudsaves; // 0x2c8(0x08)
	UBasic_ButtonScalable2_C* LoadMoreCloudsavesButton; // 0x2d0(0x08)
	UBasic_Menu_LargeWindowWithHeader_C* MainWindow; // 0x2d8(0x08)
	UVerticalBox* RetrieveCloudBox; // 0x2e0(0x08)
	UTextBlock* RetrieveText; // 0x2e8(0x08)
	UScrollBox* SavesScrollBox; // 0x2f0(0x08)
	UCircularThrobber* WaitinForCloudCircularThrobber; // 0x2f8(0x08)
	UBasic_ButtonTab_C* ActiveTabButton; // 0x300(0x08)
	TArray<UFSDSaveGame*> SaveFilesForUser; // 0x308(0x10)
	AFSDPlayerState* PlayerState; // 0x318(0x08)
	TArray<UFSDSaveGame*> CloudSavesForUser; // 0x320(0x10)
	bool GottenCloudsaves; // 0x330(0x01)
	int32_t CloudSaveOffset; // 0x334(0x04)
	FTimerHandle TimeoutTimerHandle; // 0x338(0x08)

	void LoadSteamCloudSaves(int32_t Offset);
	void UpdateCloudSaveUI();
	void CreateCloudSaveList(TArray<UFSDSaveGame*> Array);
	void ClearList();
	void CreateSaveList();
	void Construct();
	void BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void Back();
	void OnShown();
	void OnClosed();
	void Refresh();
	void CloudFailed();
	void CloadSaveGames(TArray<UFSDSaveGame*> savegames);
	void BndEvt__LoadMoreCloudsavesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ReceiveOkCommand();
	void PreConstruct(bool IsDesignTime);
	void ReenableLoadmoreButton();
	void Timeout();
	void ExecuteUbergraph_Menu_RestoreSaves(int32_t EntryPoint);
};

