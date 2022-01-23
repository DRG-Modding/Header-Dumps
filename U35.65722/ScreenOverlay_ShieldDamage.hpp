#ifndef UE4SS_SDK_ScreenOverlay_ShieldDamage_HPP
#define UE4SS_SDK_ScreenOverlay_ShieldDamage_HPP

class UScreenOverlay_ShieldDamage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* SplatImage;
    float Duration;
    float Time;
    FLinearColor Color;
    FLinearColor StartColor;
    class APlayerCharacter* Player;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnArmorDamaged(float Amount);
    void Begin Splat(float Duration, FLinearColor Color);
    void Construct();
    void OnCharacterStateChanged(ECharacterState NewState);
    void End Splat();
    void OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void ExecuteUbergraph_ScreenOverlay_ShieldDamage(int32 EntryPoint, FExecuteUbergraph_ScreenOverlay_ShieldDamageK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ScreenOverlay_ShieldDamageK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FExecuteUbergraph_ScreenOverlay_ShieldDamageK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_Amount, float K2Node_CustomEvent_Duration, FLinearColor K2Node_CustomEvent_Color, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, ECharacterState K2Node_CustomEvent_newState, ECharacterCameraMode K2Node_CustomEvent_NewCameraMode, ECharacterCameraMode K2Node_CustomEvent_OldCameraMode, bool CallFunc_IsDown_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

#endif
