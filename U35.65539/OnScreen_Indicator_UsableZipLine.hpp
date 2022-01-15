#ifndef UE4SS_SDK_OnScreen_Indicator_UsableZipLine_HPP
#define UE4SS_SDK_OnScreen_Indicator_UsableZipLine_HPP

class UOnScreen_Indicator_UsableZipLine_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UUI_ImageTinted_C* BoostIcon;
    UUI_AdvancedLabel_C* BoostInputLabel;
    UProgressBar* BoostProgress;
    UVerticalBox* BoxBoost;
    USpacer* BoxSpacer;
    UImage* IconControllerBoost;
    UWidgetSwitcher* InputSwitcherIcon;
    UUI_AdvancedLabel_C* ReverseInputLabel;
    UCanvasPanel* RootCanvas;
    USizeBox* SizeBoostProgress;
    UZipLineStateComponent* ZiplineState;
    float Size;

    void Refresh(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GetSpeedBoostActivated_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_SelectMenuColor_OutputColor, FLinearColor CallFunc_SelectMenuColor_OutputColor_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void OnInputSourceChanged_Event(EFSDInputSource InputSource);
    void ExecuteUbergraph_OnScreen_Indicator_UsableZipLine(int32 EntryPoint, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool Temp_bool_Variable, InputSourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, int32 Temp_int_Variable_1, EFSDTargetPlatform Temp_byte_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, UTexture2D* Temp_object_Variable_4, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UTexture2D* K2Node_Select_Default, UZipLineStateComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, ECharacterState K2Node_CustomEvent_newState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 K2Node_Select_Default_1);
}

#endif
