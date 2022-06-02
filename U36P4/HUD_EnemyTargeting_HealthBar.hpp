#ifndef UE4SS_SDK_HUD_EnemyTargeting_HealthBar_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_HealthBar_HPP

class UHUD_EnemyTargeting_HealthBar_C : public ULookingAtContentWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* WeakPointHit;
    class UWidgetAnimation* NormalHit;
    class UProgressBar* GhostHealthBar;
    class UProgressBar* HealthBar;
    class UCanvasPanel* HealthBarCanvas;
    class USizeBox* HealthBarSize;
    class UImage* Icon_Shield;
    class UTextBlock* OwnerNameLabel;
    class UTextBlock* TargetName;
    TScriptInterface<class IHealth> PreviousHealthBar;
    class UWidgetAnimation* HitAnimation;

    void SetHealthMapped(class UProgressBar* HealthBar, float InPercent);
    void RefreshOwnerName(bool InReset);
    void GetCharacter(class APlayerCharacter*& Character);
    void Refresh(bool Reset);
    void PreConstruct(bool IsDesignTime);
    void ReceiveNewTarget(class AActor* InCurrentTarget);
    void ReceiveUpdateTarget(class AActor* InCurrentTarget, float DeltaTime);
    void Construct();
    void ExecuteUbergraph_HUD_EnemyTargeting_HealthBar(int32 EntryPoint);
};

#endif
