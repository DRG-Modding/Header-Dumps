#ifndef UE4SS_SDK_HUD_CrosCryospray_HPP
#define UE4SS_SDK_HUD_CrosCryospray_HPP

class UHUD_CrosCryospray_C : public UCrosshairWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DotFade;
    class UImage* CH_ArrowLeft;
    class UImage* CH_ArrowRight;
    class UImage* CH_LeftBottom;
    class UImage* CH_LeftTop;
    class UImage* CH_RightTop;
    class UImage* Dot;
    class UImage* Image_1;
    float Opacity High;
    class APlayerCharacter* Character;
    float Opacity Low;

    void SetData(class AItem* Item);
    void Construct();
    void OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    void PreConstruct(bool IsDesignTime);
    void OnDamagedEnemy_Event(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_HUD_CrosCryospray(int32 EntryPoint, FExecuteUbergraph_HUD_CrosCryosprayK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AItem* K2Node_Event_item, float K2Node_CustomEvent_HorizontalSpread, float K2Node_CustomEvent_VerticalSpread, bool K2Node_CustomEvent_isAtRest, bool K2Node_Event_IsDesignTime, const TScriptInterface<class IHealth> K2Node_CustomEvent_EnemyHealth, float K2Node_CustomEvent_Damage, float K2Node_CustomEvent_DamageModifier, float K2Node_CustomEvent_HealthRemaining, bool K2Node_CustomEvent_IsWeakpoint, bool K2Node_CustomEvent_IsRadial, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor CallFunc_MenuColors_OutputColor);
};

#endif
