#ifndef UE4SS_SDK_HUD_TeamDisplay_Bosco_HPP
#define UE4SS_SDK_HUD_TeamDisplay_Bosco_HPP

class UHUD_TeamDisplay_Bosco_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* StateIconAnim;
    class UBorder* Border_0;
    class UImage* BorderImage;
    class UUI_MaskedImage_C* CharacterIcon;
    class UImage* Gradient;
    class UHUD_BoscoAbillityCounter_C* HUD_AbillityCharges;
    class UTextBlock* PlayerName;
    class UHorizontalBox* ReviveBox;
    class UImage* StateIcon;
    class ABosco* Bosco;
    class UHUDVisibilityGroup* VisibilityGroup;
    bool LaserpointerEquipped;
    class AActor* BoscoFollowTarget;

    void SetVisibilityIfVisibleMode(ESlateVisibility InVisibility);
    void UpdateReviveCharges(int32 CurrentCharges, int32 MaxCharges);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnBoscoChanged(class ABosco* Bosco);
    void OnStateChanged(EDroneAIState aCurrentState);
    void Update State Icon(class UTexture2D* Texture, FLinearColor InColorAndOpacity);
    void OnReviveused(const int32 ReviveCount);
    void UpdateHUDVisibility();
    void OnLaserPointerPressed();
    void OnLaserPointerReleased();
    void BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    void FollowTargetChanged(class AActor* FollowTarget);
    void ExecuteUbergraph_HUD_TeamDisplay_Bosco(int32 EntryPoint);
};

#endif
