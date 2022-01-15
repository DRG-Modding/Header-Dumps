#ifndef UE4SS_SDK_HUD_EnemyTargeting_Old_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_Old_HPP

class UHUD_EnemyTargeting_Old_C : ULookingAtWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* WeakPointHit;
    UWidgetAnimation* DeadAnim;
    UWidgetAnimation* NormalHit;
    UWidgetAnimation* Intro;
    UImage* DeadIcon;
    UProgressBar* GhostHealthBar;
    UProgressBar* HealthBar;
    UCanvasPanel* HealthBarCanvas;
    USizeBox* HealthBarSize;
    UHUD_EnemyTargeting_AfflictionBox_C* HUD_EnemyTargeting_AfflictionBox;
    UImage* Icon_Shield;
    UHUD_EnemyTargeting_Temperature_C* Icon_Temperature;
    UHorizontalBox* StatusIconBox;
    UTextBlock* TargetName;
    UCanvasPanel* VisibilityCanvas;
    UObjectInfoComponent* TargetInfo;
    TScriptInterface<IHealth> PreviousHealthBar;
    FVector LastTargetLocation;
    UWidgetAnimation* HitAnimation;

    void UpdateScreenPosition(float MaxHeight, FVector2D ScreenPos, bool CallFunc_IsValid_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsLookingAtUsable_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Select_Default, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const FTransform CallFunc_GetTransform_ReturnValue, UHealthComponentBase* K2Node_DynamicCast_AsHealth_Component_Base, bool K2Node_DynamicCast_bSuccess, const FVector CallFunc_GetActorTargetCenter_ReturnValue, FVector CallFunc_GetHealthBarWorldOffset_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_TransformDirection_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, FVector2D CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_FMin_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void ClampToScreenHeight(float CoordinateY, float Bound, float& ClampedY, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
    void UpdateHealthBars(bool Reset, float TemperatureEffect, bool IsAlive, bool ResetHealthBar, bool IsShield, float CurrentHealth, FLinearColor Temp_struct_Variable, float Temp_float_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, float CallFunc_GetCharacterTemperatureEffect_TemperatureEffect, bool CallFunc_GetCharacterTemperatureEffect_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, bool CallFunc_IsAlive_ReturnValue, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_3, bool CallFunc_SelectVisibility_VisibilityChanged_3, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_3, float Temp_float_Variable_1, FLinearColor K2Node_Select_Default, float K2Node_Select_Default_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, EHealthbarType CallFunc_GetHealthbarType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_2, float CallFunc_GetHealth_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_4, bool CallFunc_SelectVisibility_VisibilityChanged_4, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_4);
    void HandleTargetDamaged(InterfaceProperty Health, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial, AActor* HealthOwner, UEnemyHealthComponent* HealthComponent, bool Temp_bool_Variable, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsHudGroupVisible_ReturnValue, UWidgetAnimation* K2Node_Select_Default, bool CallFunc_IsValidTarget_ReturnValue, UHealthComponentBase* CallFunc_GetLookingAtHealth_ReturnValue, UEnemyHealthComponent* K2Node_DynamicCast_AsEnemy_Health_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WasRecentlyRendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, UEnemyHealthComponent* K2Node_DynamicCast_AsEnemy_Health_Component_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue);
    void UpdateCurrentTarget();
    void SetIsVisible(bool IsVisible);
    void ReceiveTargetLost();
    void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
    void ReceiveNewTarget(AActor* InCurrentTarget);
    void Construct();
    void OnDamagedEnemy(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void PreConstruct(bool IsDesignTime);
    void OnWeakPointHitFinished();
    void ExecuteUbergraph_HUD_EnemyTargeting_Old(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, DamagedEnemyEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UObjectInfoComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const FText CallFunc_GetInGameName_ReturnValue, bool K2Node_CustomEvent_isVisible, AActor* K2Node_Event_InCurrentTarget_1, float K2Node_Event_DeltaTime, AActor* K2Node_Event_InCurrentTarget, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, const InterfaceProperty K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
