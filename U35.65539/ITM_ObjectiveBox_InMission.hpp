#ifndef UE4SS_SDK_ITM_ObjectiveBox_InMission_HPP
#define UE4SS_SDK_ITM_ObjectiveBox_InMission_HPP

class UITM_ObjectiveBox_InMission_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* CounterIcon;
    UHUD_DefaultLabel_C* CounterText;
    UHUD_DefaultLabel_C* ObjectiveText;
    UObjective* Objective;
    bool primary;

    void UpdateText(const FText& InText, FText InCounterText, UTexture2D* InCounterIcon, bool Completed, bool Temp_bool_Variable, FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue, uint8 Temp_byte_Variable, FText CallFunc_TextToUpper_ReturnValue, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, bool Temp_bool_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_IsValid_ReturnValue, uint8 K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, int32 K2Node_Select_Default_1, uint8 K2Node_Select_Default_2);
    void Set Objective(UObjective* Objective, bool IsPrimary);
    void OnObjectiveUpdated(UObjective* Objective);
    void SetCustom(FText Text, bool Completed);
    void ExecuteUbergraph_ITM_ObjectiveBox_InMission(int32 EntryPoint, ObjectiveUpdatedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UObjective* K2Node_CustomEvent_Objective_1, bool K2Node_CustomEvent_IsPrimary, UObjective* K2Node_CustomEvent_Objective, bool CallFunc_IsValid_ReturnValue, FText CallFunc_GetInMissionText_ReturnValue, bool CallFunc_IsCompleted_ReturnValue, FText K2Node_CustomEvent_Text, bool K2Node_CustomEvent_Completed, FText CallFunc_GetInMissionCounterText_ReturnValue, UTexture2D* CallFunc_GetInMissionCounterIcon_ReturnValue);
}

#endif
