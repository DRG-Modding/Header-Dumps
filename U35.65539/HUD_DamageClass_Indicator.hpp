#ifndef UE4SS_SDK_HUD_DamageClass_Indicator_HPP
#define UE4SS_SDK_HUD_DamageClass_Indicator_HPP

class UHUD_DamageClass_Indicator_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* AfflictionBox_Left;
    UHorizontalBox* AfflictionBox_Right;
    UHUD_PlayerTemperature_C* HUD_PlayerTemperature;
    USpacer* Spacer_Left;
    USpacer* Spacer_Right;
    bool IsOn;
    TMap<UPawnAffliction*, UHUD_DamageClass_Item_C*> Indicators;

    void UpdateThisSpacer(UWidget* ThisSpacer, UPanelWidget* ThisAfflictionBox, UPanelWidget* OtherAfflictionBox, bool TemperatureIsVisible, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void UpdateSpacers(bool TempVisible, bool CallFunc_IsFlaggedVisible_IsFlaggedVisible, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void ClearIcons();
    UHUD_DamageClass_Item_C* CreateIcon(UPawnAffliction* AfflictionUHUD_DamageClass_Item_C* Widget, bool LeftSize, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsValid_ReturnValue_1, UHUD_DamageClass_Item_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float K2Node_Select_Default, FVector2D CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UHorizontalBox* K2Node_Select_Default_1, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UHUD_DamageClass_Item_C* CallFunc_Create_ReturnValue);
    void Construct();
    void OnAfflictionActivated(UPawnAffliction* Affliction);
    void OnAfflictionDeactivated(UPawnAffliction* Affliction);
    void Elapsed(UHUD_DamageClass_Item_C* Item);
    void BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature(UUserWidget* Widget, bool IsVisible);
    void ExecuteUbergraph_HUD_DamageClass_Indicator(int32 EntryPoint, AfflictionChangeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPawnAffliction* K2Node_CustomEvent_affliction_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UHUD_DamageClass_Item_C* CallFunc_CreateIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPawnAffliction* K2Node_CustomEvent_affliction, UHUD_DamageClass_Item_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UHUD_DamageClass_Item_C* K2Node_CustomEvent_Item, bool CallFunc_Map_Remove_ReturnValue, Elapsed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, AfflictionChangeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UUserWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_ComponentBoundEvent_IsVisible);
}

#endif
