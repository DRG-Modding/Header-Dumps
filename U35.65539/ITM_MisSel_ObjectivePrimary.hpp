#ifndef UE4SS_SDK_ITM_MisSel_ObjectivePrimary_HPP
#define UE4SS_SDK_ITM_MisSel_ObjectivePrimary_HPP

class UITM_MisSel_ObjectivePrimary_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATAPrimaryObjective;
    UTextBlock* DATAReward_PrimaryObjective;
    UImage* Image_0;

    void SetData(TSubclassOf<UObjective> Objective, float MissionScale, float HazardBonus);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_ObjectivePrimary(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, TSubclassOf<UObjective> K2Node_CustomEvent_Objective, float K2Node_CustomEvent_MissionScale, float K2Node_CustomEvent_HazardBonus, FSlateColor K2Node_MakeStruct_SlateColor, int32 CallFunc_GetObjectiveCredits_ReturnValue, FText CallFunc_GetObjectiveDescriptionFromClass_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
