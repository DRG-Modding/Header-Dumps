#ifndef UE4SS_SDK_UI_DebugDeepDiveStage_HPP
#define UE4SS_SDK_UI_DebugDeepDiveStage_HPP

class UUI_DebugDeepDiveStage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* Anomaly;
    class UComboBoxString* Complexity;
    class UComboBoxString* DDObj;
    class UTextBlock* LBL_Stage;
    class UComboBoxString* MissionType;
    class UComboBoxString* Warning_A;
    int32 Stage;
    class UDeepDiveTemplate* Template;

    void RefreshDDSecondaries();
    void GetDDSecondary(TSubclassOf<class UObjective>& Output);
    void GetDeepDiveStage(FDeepDiveTesterItem& Stage);
    void RefreshComplexity();
    void GenerateWarningAOptions();
    void GenerateMutatorOptions();
    void GenerateMissionTypeOptions();
    void Get Warning A(class UMissionWarning*& Output);
    void GetAnomaly(class UMissionMutator*& Output);
    void GetDuration(class UMissionDuration*& Output);
    void GetComplexity(class UMissionComplexity*& Output);
    void GetSelectedMissionType(class UMissionTemplate*& Template);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_DebugDeepDiveStage_MissionType_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void SetTemplate(class UDeepDiveTemplate* Template);
    void ExecuteUbergraph_UI_DebugDeepDiveStage(int32 EntryPoint);
};

#endif
