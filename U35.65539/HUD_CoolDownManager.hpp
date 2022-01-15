#ifndef UE4SS_SDK_HUD_CoolDownManager_HPP
#define UE4SS_SDK_HUD_CoolDownManager_HPP

class UHUD_CoolDownManager_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHUD_CooldownWidget_C* CooldownWidget_2;
    UHUD_CooldownWidget_C* CooldownWidget_C_3;
    UHUD_CooldownWidget_C* CooldownWidget_C_4;
    UHUD_CooldownWidget_C* CooldownWidget_C_5;
    UVerticalBox* IconBox;

    void GetOrCreateWidget(UObject* CoolDownOwner, const FCoolDownProgressStyle& CoolDownStyle, UCoolDownProgressWidget*& Widget, TSubclassOf<UCoolDownProgressWidget> WidgetType, UCoolDownProgressWidget* newWidget, bool Temp_bool_Variable, TSubclassOf<UCoolDownProgressWidget> Temp_class_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FMargin K2Node_MakeStruct_Margin, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TSubclassOf<UCoolDownProgressWidget> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UCoolDownProgressWidget* K2Node_DynamicCast_AsCool_Down_Progress_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, UCoolDownProgressWidget* CallFunc_AddChildToVerticalBoxEx_ReturnValue, UCoolDownProgressWidget* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<UCoolDownProgressWidget> K2Node_Select_Default);
    void Construct();
    void OnCoolDownProgress_Event(UObject* CoolDownObject, const FCoolDownProgressStyle& Style, float Progress);
    void ExecuteUbergraph_HUD_CoolDownManager(int32 EntryPoint, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, CoolDownProgressDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UObject* K2Node_CustomEvent_CoolDownObject, const FCoolDownProgressStyle K2Node_CustomEvent_Style, float K2Node_CustomEvent_progress, UCoolDownProgressWidget* CallFunc_GetOrCreateWidget_Widget);
}

#endif
