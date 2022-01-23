#ifndef UE4SS_SDK_ITM_MissionBar_Objective_HPP
#define UE4SS_SDK_ITM_MissionBar_Objective_HPP

class UITM_MissionBar_Objective_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATA_Amount;
    class UTextBlock* DATA_Objective;
    bool SecondaryObjective;
    FText ObjectiveText;

    void SetObjective(class UGeneratedMission* mission, TSubclassOf<class UObjective> ObjectiveType, float missionLength, bool Temp_bool_Variable, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_GetObjectiveCredits_ReturnValue, float CallFunc_GetTotalHazardBonus_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_GetMissionScale_ReturnValue, FText CallFunc_GetObjectiveDescriptionFromClass_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MissionBar_Objective(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_2, int32 K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo_1, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default_2);
};

#endif
