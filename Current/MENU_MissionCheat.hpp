#ifndef UE4SS_SDK_MENU_MissionCheat_HPP
#define UE4SS_SDK_MENU_MissionCheat_HPP

class UMENU_MissionCheat_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* Anomaly;
    class UComboBoxString* Biome;
    class UButton* BTN_Close;
    class UButton* BTN_DeepDives;
    class UButton* BTN_MissionFromMap;
    class UButton* BTN_StartMission;
    class UButton* Button_177;
    class UComboBoxString* Complexity;
    class UComboBoxString* Difficulty;
    class UImage* Image_101;
    class UImage* Image_166;
    class UComboBoxString* MissionType;
    class UComboBoxString* Secondary;
    class UEditableTextBox* TB_GlobalSeed;
    class UEditableTextBox* TB_MissionSeed;
    class UEditableTextBox* TB_PLSSeed;
    class UEditableTextBox* TB_Seed;
    class UEditableTextBox* TB_TestSeed;
    class UTextBlock* TXT_MissionName;
    class UUI_ForceOtherSpecialEvent_C* UI_ForceOtherSpecialEvent;
    class UUI_ForceSeasonEvent_C* UI_ForceSeasonEvent;
    class UUI_ForceMachineEvent_C* UI_ForceSpecialEvent;
    class UComboBoxString* Warning_A;
    class UComboBoxString* Warning_B;
    bool ShouldCloseWindow;
    FMENU_MissionCheat_COnMissionCreated OnMissionCreated;
    void OnMissionCreated();

    void RefreshComplexity();
    void GenerateWarningBOptions();
    void GenerateWarningAOptions();
    void GenerateMutatorOptions();
    void GenerateDifficultyOptions();
    void GenerateMissionTypeOptions();
    void GenerateBiomeOptions();
    void SetMissionName(class UGeneratedMission* mission);
    void GetDifficulty(class UDifficultySetting*& Output);
    void RefreshSecondaries();
    void GetSecondary(TArray<class TSubclassOf<UObjective>>& Output);
    bool IsCustomMissionAllowed();
    void Get Warning B(class UMissionWarning*& Output);
    void Get Warning A(class UMissionWarning*& Output);
    void GetAnomaly(class UMissionMutator*& Output);
    void GetDuration(class UMissionDuration*& Output);
    void GetComplexity(class UMissionComplexity*& Output);
    void GetSelectedMissionType(class UMissionTemplate*& Template);
    void GetSelectedBiome(class UBiome*& Biome);
    void OnFailure_7138AEF44F9FC9F667DF87911EB7E3E2();
    void OnSuccess_7138AEF44F9FC9F667DF87911EB7E3E2();
    void BndEvt__BTN_StartMission_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MissionType_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BTN_MissionFromMap_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void SetGeneratedMission(class UGeneratedMission* mission, int32 PLS_Seed);
    void BndEvt__TB_GlobalSeed_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Construct();
    void Reset();
    void BndEvt__MENU_MissionCheat_Button_177_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MENU_MissionCheat_BTN_DeepDives_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_MENU_MissionCheat(int32 EntryPoint);
    void OnMissionCreated__DelegateSignature();
};

#endif
