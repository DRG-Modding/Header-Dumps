#ifndef UE4SS_SDK_HUD_PlayerDown_HPP
#define UE4SS_SDK_HUD_PlayerDown_HPP

class UHUD_PlayerDown_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Brackets01;
    class UImage* Brackets02;
    class UUI_AdvancedLabel_C* CamCycleLabel;
    class UWidgetSwitcher* CanvasSwitcher;
    class UTextBlock* ClassLabel;
    class UUI_AdvancedLabel_C* HelpLabel;
    class UHUD_ActivatablePerks_C* HUD_ActivatablePerks;
    class UHUD_Armor_Base_C* HUD_Armor_Base;
    class UHUD_Health_Base_C* HUD_Health_Base;
    class UCanvasPanel* PlayerCanvas;
    class UTextBlock* PlayerName;
    class UScreenOverlay_Incapacitated_C* ScreenOverlay_Incapacitated;
    class UCanvasPanel* ShouldCamCanvas;
    class UTextBlock* TextBlock_0;
    class UAudioComponent* StaticNoiseAudio;

    ESlateVisibility GetCycleCameraVisibility();
    void Construct();
    void OnDownCameraTargetChanged(class APlayerCharacter* Target);
    void PreConstruct(bool IsDesignTime);
    void End Player Down();
    void ReceiveNewVisibility(ESlateVisibility NewVisibility);
    void Start Player Down();
    void ExecuteUbergraph_HUD_PlayerDown(int32 EntryPoint);
};

#endif
