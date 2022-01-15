#ifndef UE4SS_SDK_HUD_CharacterTrackingIcon_HPP
#define UE4SS_SDK_HUD_CharacterTrackingIcon_HPP

class UHUD_CharacterTrackingIcon_C : UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimPlayerDown;
    UWidgetAnimation* AnimInView;
    UImage* Arrow;
    UBorder* BorderInfo;
    USizeBox* BoxSizer;
    UHUD_DefaultLabel_C* Distance;
    UImage* IconClass;
    UImage* IconDown;
    UTextBlock* PlayerName;
    UCanvasPanel* RootCanvas;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;
    APlayerCharacter* targetCharacter;
    bool IconInView;
    bool PlayerDown;

    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void OnInViewChanged(bool inView, float Angle);
    void OnTargetSet(AActor* NewTarget);
    void OnTargetDistanceChanged(float Distance);
    void OnUpdateName(FString NewName);
    void OnCharacterChanged(UPlayerCharacter* PlayerCharacter);
    void OnCharacterStateChanged(ECharacterState NewState);
    void Construct();
    void UpdateClassIcon();
    void ExecuteUbergraph_HUD_CharacterTrackingIcon(int32 EntryPoint, PlayerNameChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_InView, float K2Node_CustomEvent_Angle, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_inView, float K2Node_Event_Angle, bool CallFunc_NotEqual_BoolBool_ReturnValue, AActor* K2Node_Event_NewTarget, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Distance, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FString K2Node_CustomEvent_NewName, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Format_ReturnValue, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue_1, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue_2, FString CallFunc_GetPlayerName_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, ECharacterState K2Node_CustomEvent_newState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool Temp_bool_Variable, ECharacterState CallFunc_GetCurrentState_ReturnValue, ESlateVisibility K2Node_Select_Default, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
