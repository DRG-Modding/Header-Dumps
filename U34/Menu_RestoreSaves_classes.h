// WidgetBlueprintGeneratedClass Menu_RestoreSaves.Menu_RestoreSaves_C
// Size: 0x324 (Inherited: 0x270)
struct UMenu_RestoreSaves_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x278(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Back; // 0x280(0x08)
	struct UITM_TopBar_ResourceCounter_C* CreditsCounter; // 0x288(0x08)
	struct UTextBlock* FailedCloudText; // 0x290(0x08)
	struct UTextBlock* Header; // 0x298(0x08)
	struct UITM_TopBar_CharacterIcon_C* ITM_CharacterIcon_C_1; // 0x2a0(0x08)
	struct UITM_RestoreSave_Resources_C* ITM_RestoreSave_Resources; // 0x2a8(0x08)
	struct UITM_RestoreSaveCategoryList_Entry_C* ITM_RestoreSaveCategoryList_Entry; // 0x2b0(0x08)
	struct UITM_TopBar_CharacterLevel_C* ITM_TopBar_CharacterLevel_C_1; // 0x2b8(0x08)
	struct UITM_TopBar_PlayerRank_C* ITM_TopBar_PlayerRank_C_1; // 0x2c0(0x08)
	struct UBasic_Menu_LargeWindowWithHeader_C* MainWindow; // 0x2c8(0x08)
	struct UVerticalBox* RetrieveCloudBox; // 0x2d0(0x08)
	struct UTextBlock* RetrieveText; // 0x2d8(0x08)
	struct UScrollBox* SavesScrollBox; // 0x2e0(0x08)
	struct UCircularThrobber* WaitinForCloudCircularThrobber; // 0x2e8(0x08)
	struct UBasic_ButtonTab_C* ActiveTabButton; // 0x2f0(0x08)
	struct TArray<struct UFSDSaveGame*> SaveFilesForUser; // 0x2f8(0x10)
	struct AFSDPlayerState* PlayerState; // 0x308(0x08)
	struct TArray<struct UFSDSaveGame*> CloudSavesForUser; // 0x310(0x10)
	int32_t WaitForCloudAmountToLoad; // 0x320(0x04)

	void UpdateCloudSaveUI(); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.UpdateCloudSaveUI
	void CreateCloudSaveList(struct TArray<struct UFSDSaveGame*> Array); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateCloudSaveList
	void ClearList(); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.ClearList
	void CreateSaveList(); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateSaveList
	void Construct(); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.Construct
	void BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void Back(); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.Back
	void OnShown(); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnShown
	void OnClosed(); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnClosed
	void Refresh(); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.Refresh
	void CloudFailed(); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloudFailed
	void CloadSaveGames(struct TArray<struct UFSDSaveGame*> savegames); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloadSaveGames
	void ExecuteUbergraph_Menu_RestoreSaves(int32_t EntryPoint); // Function Menu_RestoreSaves.Menu_RestoreSaves_C.ExecuteUbergraph_Menu_RestoreSaves
};

