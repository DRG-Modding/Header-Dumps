#ifndef UE4SS_SDK_HUD_CooldownWidget_HPP
#define UE4SS_SDK_HUD_CooldownWidget_HPP

class UHUD_CooldownWidget_C : public UCoolDownProgressWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFinished;
    class UWidgetAnimation* AnimBegin;
    class UImage* CoolDownImage;
    class USizeBox* Sizer;
    class UImage* SplashImage;
    float Size;
    float CurrentProgress;
    class UMaterialInstanceDynamic* ProgressMaterial;
    float HeightScale;
    FLinearColor FillTint;
    FLinearColor BackgroundTint;

    void SetBackgroundTint(FLinearColor Value);
    void SetFillTint(FLinearColor Value);
    void SetPercent(float InPercent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void ReceiveInitWidget();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetHeightScale(float Scale);
    void OnAnimFadeoutFinished();
    void ReceiveUpdateProgress(float InProgress);
    void ExecuteUbergraph_HUD_CooldownWidget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FExecuteUbergraph_HUD_CooldownWidgetK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, float K2Node_CustomEvent_Scale, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_Event_InProgress, float CallFunc_FClamp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2);
};

#endif
