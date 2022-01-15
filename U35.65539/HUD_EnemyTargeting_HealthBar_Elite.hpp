#ifndef UE4SS_SDK_HUD_EnemyTargeting_HealthBar_Elite_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_HealthBar_Elite_HPP

class UHUD_EnemyTargeting_HealthBar_Elite_C : ULookingAtContentWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimGlow;
    UWidgetAnimation* WeakPointHit;
    UWidgetAnimation* NormalHit;
    UProgressBar* GhostHealthBar;
    UTextBlock* Header;
    UProgressBar* HealthBar;
    UBorder* HealthbarBorder;
    UCanvasPanel* HealthBarCanvas;
    USizeBox* HealthBarSize;
    UImage* HexagonBackground;
    UImage* HexagonIcon;
    UImage* HexagonInner;
    UImage* HexagonShimmer;
    UImage* Icon_Shield;
    UTextBlock* TargetName;
    TScriptInterface<IHealth> PreviousHealthBar;
    UWidgetAnimation* HitAnimation;

    void GetCharacter(UPlayerCharacter*& Character, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
    void Refresh(bool Reset, bool IsAlive, bool ResetHealthBar, bool IsShield, float CurrentHealth, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, float Temp_float_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_IsAlive_ReturnValue, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, float Temp_float_Variable_1, FLinearColor K2Node_Select_Default, float K2Node_Select_Default_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, EHealthbarType CallFunc_GetHealthbarType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_2, float CallFunc_GetHealth_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_3, bool CallFunc_SelectVisibility_VisibilityChanged_3, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_3);
    void PreConstruct(bool IsDesignTime);
    void ReceiveNewTarget(AActor* InCurrentTarget);
    void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
    void Construct();
    void ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite(int32 EntryPoint, bool Temp_bool_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, AActor* K2Node_Event_InCurrentTarget_1, AActor* K2Node_Event_InCurrentTarget, float K2Node_Event_DeltaTime, UWidgetAnimation* K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
