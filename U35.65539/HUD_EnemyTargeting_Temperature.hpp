#ifndef UE4SS_SDK_HUD_EnemyTargeting_Temperature_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_Temperature_HPP

class UHUD_EnemyTargeting_Temperature_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Intro;
    UWidgetAnimation* Ping;
    USizeBox* BarSize;
    UImage* BorderInner;
    UImage* BorderOuter;
    UImage* TemperatureIcon;
    UProgressBar* TemperatureProgress;
    float Size;
    float effect;

    void SetColors(FLinearColor Fill Color, FLinearColor BackgroundColor, bool Revert, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable_1, FLinearColor Temp_struct_Variable_1, FLinearColor K2Node_Select_Default, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor K2Node_Select_Default_1, FSlateBrush K2Node_MakeStruct_SlateBrush, FProgressBarStyle K2Node_MakeStruct_ProgressBarStyle);
    void SetTemperatureEffect(float InEffect, bool Reset, float PreviousEffect, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable_1, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_2, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_3, float K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Abs_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_2, float CallFunc_Abs_ReturnValue_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_4, FLinearColor K2Node_Select_Default_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, FLinearColor K2Node_Select_Default_2, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_Greater_FloatFloat_ReturnValue_3, UTexture2D* K2Node_Select_Default_3);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_EnemyTargeting_Temperature(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin, FLinearColor CallFunc_MenuColors_OutputColor, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_Lerp_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
