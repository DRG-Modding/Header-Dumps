#ifndef UE4SS_SDK_ITM_MisSel_ObjectiveSecondary_HPP
#define UE4SS_SDK_ITM_MisSel_ObjectiveSecondary_HPP

class UITM_MisSel_ObjectiveSecondary_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DataMissionReward;
    UTextBlock* DATAMissionSecondaryObjective;
    UImage* Image_0;

    void SetData(TSubclassOf<UObjective> Objective, float missionLength, float HazardBonus);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, TSubclassOf<UObjective> K2Node_CustomEvent_Objective, float K2Node_CustomEvent_missionLength, float K2Node_CustomEvent_HazardBonus, int32 CallFunc_GetObjectiveCredits_ReturnValue, FText CallFunc_GetObjectiveDescriptionFromClass_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, FText CallFunc_Conv_FloatToText_ReturnValue);
}

#endif
