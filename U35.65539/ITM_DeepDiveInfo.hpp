#ifndef UE4SS_SDK_ITM_DeepDiveInfo_HPP
#define UE4SS_SDK_ITM_DeepDiveInfo_HPP

class UITM_DeepDiveInfo_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    UITM_WarningAndMutator_C* DeepDive_WarningAndMutator;
    UHorizontalBox* DeepDiveStage;
    UBasic_Label_C* DeepDiveStageNumber;
    UTextBlock* MissionName;
    UTextBlock* TextBlock_Codename;

    void Update(UGeneratedMission* mission);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDiveInfo(int32 EntryPoint, UGeneratedMission* K2Node_CustomEvent_Mission, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
}

#endif
