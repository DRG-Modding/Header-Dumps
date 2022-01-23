#ifndef UE4SS_SDK_HUD_CoolDownManager_HPP
#define UE4SS_SDK_HUD_CoolDownManager_HPP

class UHUD_CoolDownManager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_CooldownWidget_C* CooldownWidget_2;
    class UHUD_CooldownWidget_C* CooldownWidget_C_3;
    class UHUD_CooldownWidget_C* CooldownWidget_C_4;
    class UHUD_CooldownWidget_C* CooldownWidget_C_5;
    class UVerticalBox* IconBox;

    void GetOrCreateWidget(class UObject* CoolDownOwner, const FCoolDownProgressStyle& CoolDownStyle, class UCoolDownProgressWidget*& Widget, TSubclassOf<class UCoolDownProgressWidget> WidgetType, class UCoolDownProgressWidget* newWidget, bool Temp_bool_Variable, TSubclassOf<class UCoolDownProgressWidget> Temp_class_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FMargin K2Node_MakeStruct_Margin, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TSubclassOf<class UCoolDownProgressWidget> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCoolDownProgressWidget* K2Node_DynamicCast_AsCool_Down_Progress_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, class UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, class UCoolDownProgressWidget* CallFunc_AddChildToVerticalBoxEx_ReturnValue, class UCoolDownProgressWidget* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<class UCoolDownProgressWidget> K2Node_Select_Default);
    void Construct();
    void OnCoolDownProgress_Event(class UObject* CoolDownObject, const FCoolDownProgressStyle& Style, float Progress);
    void ExecuteUbergraph_HUD_CoolDownManager(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_HUD_CoolDownManagerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_CoolDownObject, const FCoolDownProgressStyle K2Node_CustomEvent_Style, float K2Node_CustomEvent_progress, class UCoolDownProgressWidget* CallFunc_GetOrCreateWidget_Widget);
};

#endif
