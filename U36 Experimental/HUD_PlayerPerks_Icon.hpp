#ifndef UE4SS_SDK_HUD_PlayerPerks_Icon_HPP
#define UE4SS_SDK_HUD_PlayerPerks_Icon_HPP

class UHUD_PlayerPerks_Icon_C : public UPerkHUDIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimCoolingDown;
    class UWidgetAnimation* AnimCoolDownFinished;
    class UImage* BackgroundImage;
    class UBorder* CounterBorder;
    class UBasic_Label_C* CounterLabel;
    class UImage* FlashOverlay;
    class UOverlay* OverlayTexture;
    class UOverlay* OverlayWidget;
    class UImage* PerkIcon;
    class UImage* PerkShadow;
    class UProgressBar* ProgressBarCoolDown;
    class UImage* Ring_1;
    class UImage* Ring_2;
    class UImage* Ring_3;
    class UUI_RoundedCanvas_C* UI_RoundedCanvas;
    FTimerHandle RefreshHandle;

    float GetCooldownDuration();
    float GetCoolDownProgress();
    int32 GetMaxUseCharges();
    int32 GetRemainingUseCharges();
    void RefreshCounterAndProgress(bool& CoolDownActive);
    void SetCounter(int32 InCount);
    void SetProgress(float InProgress, float& OutProgress);
    void OnTick_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime);
    void Completed_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime);
    void ReceivePerkAssetChanged();
    void Construct();
    void OnAnimCoolDownFinished();
    void Begin Cool Down(float Duration);
    void PreConstruct(bool IsDesignTime);
    void RefreshUseCharges(class UPerkAsset* Perk, int32 Value);
    void CoolDownTick();
    void ExecuteUbergraph_HUD_PlayerPerks_Icon(int32 EntryPoint);
};

#endif
