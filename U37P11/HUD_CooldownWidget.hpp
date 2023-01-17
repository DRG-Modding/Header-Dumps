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
    void SetPercent(float InPercent);
    void ReceiveInitWidget();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetHeightScale(float Scale);
    void OnAnimFadeoutFinished();
    void ReceiveUpdateProgress(float InProgress);
    void ExecuteUbergraph_HUD_CooldownWidget(int32 EntryPoint);
};

#endif
