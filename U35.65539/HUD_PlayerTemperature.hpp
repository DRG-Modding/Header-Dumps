#ifndef UE4SS_SDK_HUD_PlayerTemperature_HPP
#define UE4SS_SDK_HUD_PlayerTemperature_HPP

class UHUD_PlayerTemperature_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Appear;
    UWidgetAnimation* Pulse;
    UWidgetAnimation* Fade;
    UWidgetAnimation* Warning;
    UImage* Arrow01;
    UImage* Arrow02;
    UImage* Arrow03;
    UVerticalBox* ArrowBox;
    UImage* BG;
    UImage* Glow;
    UImage* Icon_Temp;
    USizeBox* RootSize;
    UProgressBar* TempBar;
    TArray<UImage*> Arrows;
    FLinearColor Tint_Freeze;
    bool Faded;
    FLinearColor Tint_Overheated;

    void SetFaded(bool FadeOut, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, uint8 K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void UpdateTemperature(float InTemperature, float InChange, EPlayerTemperatureState State, bool Burning, float Temperature, bool Temp_bool_Variable, bool Temp_bool_Variable_1, SoftObjectProperty Temp_softobject_Variable, SoftObjectProperty Temp_softobject_Variable_1, EPlayerTemperatureState Temp_byte_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, EPlayerTemperatureState Temp_byte_Variable_1, FLinearColor Temp_struct_Variable_2, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, SoftObjectProperty K2Node_Select_Default, float CallFunc_Abs_ReturnValue, FLinearColor K2Node_Select_Default_1, FLinearColor K2Node_Select_Default_2, FLinearColor K2Node_Select_Default_3, FSlateColor K2Node_MakeStruct_SlateColor, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetCurrentTemperatureNormalized_ReturnValue);
    void UpdateArrows(UImage* CurrentArrow, int32 Speed, int32 ArrowCount, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetCurrentTemperatureNormalized_ReturnValue, UImage* CallFunc_Array_Get_Item, float CallFunc_SignOfFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetTemperatureChangedSpeed_ReturnValue, FLinearColor K2Node_Select_Default, int32 CallFunc_SignOfInteger_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Min_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1);
    void Construct();
    void OnTemperatureChanged(float Temperature, float Change);
    void PreConstruct(bool IsDesignTime);
    void OnTemperatureChangeRate_Event(int32 ChangeRate);
    void ShowTemperature();
    void OnBarVisibilityChanged(bool barVisible);
    void OnTemperatureStateChanged(EPlayerTemperatureState State);
    void ExecuteUbergraph_HUD_PlayerTemperature(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, PlayerTemperatureChangeRateSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, PlayerTemperatureShowBar__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, PlayerTemperatureStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, PlayerTemperatureChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_CustomEvent_Temperature, float K2Node_CustomEvent_Change, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_ChangeRate, bool K2Node_CustomEvent_barVisible, TArray<UImage*>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, EPlayerTemperatureState K2Node_CustomEvent_State, bool CallFunc_NotEqual_ByteByte_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
