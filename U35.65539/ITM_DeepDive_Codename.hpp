#ifndef UE4SS_SDK_ITM_DeepDive_Codename_HPP
#define UE4SS_SDK_ITM_DeepDive_Codename_HPP

class UITM_DeepDive_Codename_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_MissionBiome;
    UTextBlock* DATA_MissionName;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_1;

    void SetData(UDeepDive* DeepDive);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDive_Codename(int32 EntryPoint, UDeepDive* K2Node_CustomEvent_DeepDive, const FText CallFunc_GetBiomeName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, bool K2Node_Event_IsDesignTime);
}

#endif
