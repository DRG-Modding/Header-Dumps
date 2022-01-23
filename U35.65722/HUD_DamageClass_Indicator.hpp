#ifndef UE4SS_SDK_HUD_DamageClass_Indicator_HPP
#define UE4SS_SDK_HUD_DamageClass_Indicator_HPP

class UHUD_DamageClass_Indicator_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AfflictionBox_Left;
    class UHorizontalBox* AfflictionBox_Right;
    class UHUD_PlayerTemperature_C* HUD_PlayerTemperature;
    class USpacer* Spacer_Left;
    class USpacer* Spacer_Right;
    bool IsOn;
    TMap<class UPawnAffliction*, class UHUD_DamageClass_Item_C*> Indicators;

    void UpdateThisSpacer(class UWidget* ThisSpacer, class UPanelWidget* ThisAfflictionBox, class UPanelWidget* OtherAfflictionBox, bool TemperatureIsVisible, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void UpdateSpacers(bool TempVisible, bool CallFunc_IsFlaggedVisible_IsFlaggedVisible, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void ClearIcons();
    class UHUD_DamageClass_Item_C* CreateIcon(class UPawnAffliction* Afflictionclass UHUD_DamageClass_Item_C* Widget, bool LeftSize, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsValid_ReturnValue_1, class UHUD_DamageClass_Item_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float K2Node_Select_Default, FVector2D CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UHorizontalBox* K2Node_Select_Default_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHUD_DamageClass_Item_C* CallFunc_Create_ReturnValue);
    void Construct();
    void OnAfflictionActivated(class UPawnAffliction* Affliction);
    void OnAfflictionDeactivated(class UPawnAffliction* Affliction);
    void Elapsed(class UHUD_DamageClass_Item_C* Item);
    void BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature(class UUserWidget* Widget, bool IsVisible);
    void ExecuteUbergraph_HUD_DamageClass_Indicator(int32 EntryPoint, FExecuteUbergraph_HUD_DamageClass_IndicatorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UPawnAffliction* K2Node_CustomEvent_affliction_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UHUD_DamageClass_Item_C* CallFunc_CreateIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPawnAffliction* K2Node_CustomEvent_affliction, class UHUD_DamageClass_Item_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UHUD_DamageClass_Item_C* K2Node_CustomEvent_Item, bool CallFunc_Map_Remove_ReturnValue, FExecuteUbergraph_HUD_DamageClass_IndicatorK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_DamageClass_IndicatorK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UUserWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_ComponentBoundEvent_IsVisible);
};

#endif
