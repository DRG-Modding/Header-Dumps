#ifndef UE4SS_SDK_ITM_DeepDive_Codename_HPP
#define UE4SS_SDK_ITM_DeepDive_Codename_HPP

class UITM_DeepDive_Codename_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_MissionBiome;
    class UTextBlock* DATA_MissionName;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;

    void SetData(class UDeepDive* DeepDive);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDive_Codename(int32 EntryPoint, class UDeepDive* K2Node_CustomEvent_DeepDive, const FText CallFunc_GetBiomeName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, bool K2Node_Event_IsDesignTime);
};

#endif
