#ifndef UE4SS_SDK_Lore_DamageTypeIcon_HPP
#define UE4SS_SDK_Lore_DamageTypeIcon_HPP

class ULore_DamageTypeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UButton* Button_0;
    class UImage* Icon;
    FVector2D IconSize;
    FDamageTypeDescription DamageType;

    class UWidget* GetToolTipWidget_0(class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void Construct();
    void SetData(FDamageTypeDescription DamageType);
    void PlayIntro(float Delay);
    void ExecuteUbergraph_Lore_DamageTypeIcon(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDamageTypeDescription K2Node_CustomEvent_DamageType, float K2Node_CustomEvent_Delay, FSlateColor K2Node_MakeStruct_SlateColor, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
};

#endif
