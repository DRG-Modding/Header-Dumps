#ifndef UE4SS_SDK_OnScreenIndicator_Actor_Shout_HPP
#define UE4SS_SDK_OnScreenIndicator_Actor_Shout_HPP

class UOnScreenIndicator_Actor_Shout_C : public UShoutWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CharacterIcon;
    class UTextBlock* DATA_Class;
    class UTextBlock* DATA_Distance;
    class UTextBlock* DATA_Message;
    class UBasic_HUD_BracketWindowSmall_C* NormalShout;
    class URetainerBox* RetainerBox_2;
    class UWidgetSwitcher* ShoutTypeSwitcher;
    class UBorder* SubtitleShout;
    class UTextBlock* SubtitleText;
    class APlayerCharacter* Character;
    FVector2D LastPos;
    float TimeActive;
    float Opacity;
    FLinearColor BackgroundColor;
    float ShoutActive;

    void SetShoutLocation(class UUserWidget* Widget, FVector2D Position, bool OwnShout, FAnchors K2Node_MakeStruct_Anchors, FAnchors K2Node_MakeStruct_Anchors_1);
    void UpdateIcon(bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    bool IsOwnShout(bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Shout();
    FVector2D CalculateScreenPos(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector2D CallFunc_GetDesiredSize_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, FVector2D CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FMargin K2Node_MakeStruct_Margin, FVector CallFunc_FindScreenPosition_ScreenCord, float CallFunc_FindScreenPosition_Angle, bool CallFunc_FindScreenPosition_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue);
    void InViewport(FVector2D Pos, bool& Result, float CallFunc_GetViewportScale_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_GetViewportSize_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
    bool IsSenderBehind(FVector& ToSenderFVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void Construct();
    void Update Widget();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnShout();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_Actor_Shout(int32 EntryPoint, bool Temp_bool_Variable, FText Temp_text_Variable, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_Lerp_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor, FVector2D CallFunc_CalculateScreenPos_ReturnValue, bool Temp_bool_Variable_2, float CallFunc_Add_FloatFloat_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsOwnShout_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsOwnShout_ReturnValue_1, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsOwnShout_ReturnValue_2, FText CallFunc_Format_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, const FText CallFunc_GetHeroName_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, ESlateVisibility K2Node_Select_Default_1, FText K2Node_Select_Default_2);
};

#endif
