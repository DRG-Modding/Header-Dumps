#ifndef UE4SS_SDK_ITM_DeepDiveInfo_HPP
#define UE4SS_SDK_ITM_DeepDiveInfo_HPP

class UITM_DeepDiveInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    class UITM_WarningAndMutator_C* DeepDive_WarningAndMutator;
    class UHorizontalBox* DeepDiveStage;
    class UBasic_Label_C* DeepDiveStageNumber;
    class UTextBlock* MissionName;
    class UTextBlock* TextBlock_Codename;

    void Update(class UGeneratedMission* mission);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDiveInfo(int32 EntryPoint, class UGeneratedMission* K2Node_CustomEvent_Mission, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, class UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
};

#endif
