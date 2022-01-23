#ifndef UE4SS_SDK_ITM_ObjectiveBox_InMission_HPP
#define UE4SS_SDK_ITM_ObjectiveBox_InMission_HPP

class UITM_ObjectiveBox_InMission_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CounterIcon;
    class UHUD_DefaultLabel_C* CounterText;
    class UHUD_DefaultLabel_C* ObjectiveText;
    class UObjective* Objective;
    bool primary;

    void UpdateText(const FText& InText, FText InCounterText, class UTexture2D* InCounterIcon, bool Completed, bool Temp_bool_Variable, FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, FText CallFunc_TextToUpper_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable_1, TEnumAsByte<ENUM_AcuminCondensedTypeface::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_AcuminCondensedTypeface::Type> Temp_byte_Variable_3, bool Temp_bool_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_IsValid_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, int32 K2Node_Select_Default_1, TEnumAsByte<ENUM_AcuminCondensedTypeface::Type> K2Node_Select_Default_2);
    void Set Objective(class UObjective* Objective, bool IsPrimary);
    void OnObjectiveUpdated(class UObjective* Objective);
    void SetCustom(FText Text, bool Completed);
    void ExecuteUbergraph_ITM_ObjectiveBox_InMission(int32 EntryPoint, FExecuteUbergraph_ITM_ObjectiveBox_InMissionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UObjective* K2Node_CustomEvent_Objective_1, bool K2Node_CustomEvent_IsPrimary, class UObjective* K2Node_CustomEvent_Objective, bool CallFunc_IsValid_ReturnValue, FText CallFunc_GetInMissionText_ReturnValue, bool CallFunc_IsCompleted_ReturnValue, FText K2Node_CustomEvent_Text, bool K2Node_CustomEvent_Completed, FText CallFunc_GetInMissionCounterText_ReturnValue, class UTexture2D* CallFunc_GetInMissionCounterIcon_ReturnValue);
};

#endif
