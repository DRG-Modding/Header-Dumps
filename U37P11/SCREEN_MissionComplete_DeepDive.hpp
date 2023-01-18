#ifndef UE4SS_SDK_SCREEN_MissionComplete_DeepDive_HPP
#define UE4SS_SDK_SCREEN_MissionComplete_DeepDive_HPP

class USCREEN_MissionComplete_DeepDive_C : public USCREEN_MissionComplete_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable2_C* BTN_Continue;
    class UTextBlock* Data_CodeName;
    class UFSDLabelWidget* DATA_MissionTime;
    class UTextBlock* Data_Region;
    class UHorizontalBox* DATA_Resources;
    class UITM_DeepDive_MisCompBG_C* ITM_DeepDive_MisCompBG;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UITM_DeepDiveStatus_Stage_C* ITM_DeepDiveStage_0;
    class UITM_DeepDiveStatus_Stage_C* ITM_DeepDiveStage_1;
    class UITM_DeepDiveStatus_Stage_C* ITM_DeepDiveStage_2;
    class UITM_DeepDiveStatus_Animator_C* ITM_DeepDiveStatus_Animator;
    class UITM_CharacterDeepDive_C* Player1;
    class UITM_CharacterDeepDive_C* Player2;
    class UITM_CharacterDeepDive_C* Player3;
    class UITM_CharacterDeepDive_C* Player4;
    class UTextBlock* TXT_Codename;
    class UTextBlock* TXT_Region;
    TArray<class UITM_CharacterDeepDive_C*> CharacterItems;
    TArray<class UITM_DeepDiveStatus_Stage_C*> stages;
    bool CountDownBegun;
    bool ContinueClicked;
    bool AnimationsFinished;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    class UDeepDive* GetCurrentDeepDive();
    void AddResource(class UCappedResource* Resource);
    bool IsValidResource(class UCappedResource* Resource);
    void CreateResources();
    void BeginScreen();
    void PreConstruct(bool IsDesignTime);
    void UpdateMissionTime(int32 Value);
    void BndEvt__BTN_Continue_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnUpdateCountDown();
    void Setup Count Down();
    void Click Continue();
    void Update Continue Button();
    void OnDeepDiveContinueCountdownChanged();
    void InitializeScreen();
    void ExecuteUbergraph_SCREEN_MissionComplete_DeepDive(int32 EntryPoint);
};

#endif
