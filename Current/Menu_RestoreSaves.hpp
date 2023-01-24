#ifndef UE4SS_SDK_Menu_RestoreSaves_HPP
#define UE4SS_SDK_Menu_RestoreSaves_HPP

class UMenu_RestoreSaves_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_Back;
    class UITM_TopBar_ResourceCounter_C* CreditsCounter;
    class UTextBlock* FailedCloudText;
    class UTextBlock* Header;
    class UITM_TopBar_CharacterIcon_C* ITM_CharacterIcon_C_0;
    class UITM_RestoreSave_Resources_C* ITM_RestoreSave_Resources;
    class UITM_RestoreSaveCategoryList_Entry_C* ITM_RestoreSaveCategoryList_Entry;
    class UITM_TopBar_CharacterLevel_C* ITM_TopBar_CharacterLevel_C_0;
    class UITM_TopBar_PlayerRank_C* ITM_TopBar_PlayerRank_C_0;
    class UCircularThrobber* LoadingCloudsaves;
    class UBasic_ButtonScalable2_C* LoadMoreCloudsavesButton;
    class UBasic_Menu_LargeWindowWithHeader_C* MainWindow;
    class UVerticalBox* RetrieveCloudBox;
    class UTextBlock* RetrieveText;
    class UScrollBox* SavesScrollBox;
    class UCircularThrobber* WaitinForCloudCircularThrobber;
    class UBasic_ButtonTab_C* ActiveTabButton;
    TArray<class UFSDSaveGame*> SaveFilesForUser;
    class AFSDPlayerState* PlayerState;
    TArray<class UFSDSaveGame*> CloudSavesForUser;
    bool GottenCloudsaves;
    int32 CloudSaveOffset;
    FTimerHandle TimeoutTimerHandle;

    void LoadCloudSaves(int32 Offset);
    void UpdateCloudSaveUI();
    void CreateCloudSaveList(TArray<class UFSDSaveGame*>& Array);
    void ClearList();
    void CreateSaveList();
    void Construct();
    void BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void Back();
    void OnShown();
    void OnClosed();
    void Refresh();
    void CloudFailed();
    void CloadSaveGames(const TArray<class UFSDSaveGame*>& savegames);
    void BndEvt__LoadMoreCloudsavesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ReceiveOkCommand();
    void PreConstruct(bool IsDesignTime);
    void ReenableLoadmoreButton();
    void Timeout();
    void ExecuteUbergraph_Menu_RestoreSaves(int32 EntryPoint);
};

#endif
