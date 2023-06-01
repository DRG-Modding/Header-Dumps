#ifndef UE4SS_SDK_HUD_LaserPointerDisplay_HPP
#define UE4SS_SDK_HUD_LaserPointerDisplay_HPP

class UHUD_LaserPointerDisplay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIconIn;
    class UWidgetAnimation* Intro;
    class UTextBlock* Description;
    class UTextBlock* DistLabel;
    class UHUD_LaserPointerScanProgress_C* HUD_LaserPointerScanProgress;
    class UTextBlock* ItemLabel;
    class UUI_AdvancedLabel_C* LBL_LeftMouse;
    class UUI_AdvancedLabel_C* LBL_RightMouse;
    class UHorizontalBox* ResourceIconHolder;
    class UImage* ResourceIconL;
    class UImage* ResourceIconR;
    class UTextBlock* TextBlock_Unknown;
    class UWidgetSwitcher* WidgetSwitcher_Scanbox;
    class APlayerCharacter* Character;
    FHitResult LastHit;
    bool IsNew;
    float ScanTimeLeft;
    float ScanTotalTime;
    FHUD_LaserPointerDisplay_CScanComplete ScanComplete;
    void ScanComplete();
    bool IsScanVisible;
    FTimerHandle Handle_Show;

    void SetIconAndTint(class UTexture2D* Texture, FLinearColor Tint);
    void UpdateCommands();
    void Finished_2FB3B1024A257294FCE363AC76E7AAF6();
    void Point Of Interest(class UTexture2D* Texture, FLinearColor Tint);
    void PreConstruct(bool IsDesignTime);
    void OnBoscoChanged(class ABosco* Bosco);
    void StartScan();
    void StopScan();
    void OnUnequipped();
    void Update Display(FHitResult Hit, float Distance, FLaserPointerData Data);
    void OnEquipped();
    void Construct();
    void StartShow();
    void ExecuteUbergraph_HUD_LaserPointerDisplay(int32 EntryPoint);
    void ScanComplete__DelegateSignature();
};

#endif
