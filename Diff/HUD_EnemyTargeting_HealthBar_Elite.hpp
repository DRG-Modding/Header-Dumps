#ifndef UE4SS_SDK_HUD_EnemyTargeting_HealthBar_Elite_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_HealthBar_Elite_HPP

class UHUD_EnemyTargeting_HealthBar_Elite_C : public ULookingAtContentWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimGlow;
    class UWidgetAnimation* WeakPointHit;
    class UWidgetAnimation* NormalHit;
    class UProgressBar* GhostHealthBar;
    class UTextBlock* Header;
    class UProgressBar* HealthBar;
    class UBorder* HealthbarBorder;
    class UCanvasPanel* HealthBarCanvas;
    class USizeBox* HealthBarSize;
    class UImage* HexagonBackground;
    class UImage* HexagonIcon;
    class UImage* HexagonInner;
    class UImage* HexagonShimmer;
    class UImage* Icon_Shield;
    class UTextBlock* TargetName;
    TScriptInterface<class IHealth> PreviousHealthBar;
    class UWidgetAnimation* HitAnimation;

    void GetCharacter(class APlayerCharacter*& Character);
    void Refresh(bool Reset);
    void PreConstruct(bool IsDesignTime);
    void ReceiveNewTarget(class AActor* InCurrentTarget);
    void ReceiveUpdateTarget(class AActor* InCurrentTarget, float DeltaTime);
    void Construct();
    void ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite(int32 EntryPoint);
};

#endif
