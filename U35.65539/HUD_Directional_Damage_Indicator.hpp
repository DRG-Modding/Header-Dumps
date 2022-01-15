#ifndef UE4SS_SDK_HUD_Directional_Damage_Indicator_HPP
#define UE4SS_SDK_HUD_Directional_Damage_Indicator_HPP

class UHUD_Directional_Damage_Indicator_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* DamageImage;
    AActor* DamageCauser;
    FVector DamageOrigin;
    APlayerCharacter* Character;
    float Radius;

    void UpdatePosition(float InputPin, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_MoveTowards_Result, bool CallFunc_Less_FloatFloat_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_DegAcos_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue_1);
    void SetAngle(float Angle, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue);
    void MoveTowards(float Value, float End, float Delta, float& Result, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void Hit(float Damage, AActor* DamageCauser, UPlayerCharacter* Victim, UUserWidget*& Widget, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, FLinearColor K2Node_Select_Default);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_HUD_Directional_Damage_Indicator(int32 EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
}

#endif
