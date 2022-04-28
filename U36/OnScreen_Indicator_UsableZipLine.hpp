#ifndef UE4SS_SDK_OnScreen_Indicator_UsableZipLine_HPP
#define UE4SS_SDK_OnScreen_Indicator_UsableZipLine_HPP

class UOnScreen_Indicator_UsableZipLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_ImageTinted_C* BoostIcon;
    class UUI_AdvancedLabel_C* BoostInputLabel;
    class UProgressBar* BoostProgress;
    class UVerticalBox* BoxBoost;
    class USpacer* BoxSpacer;
    class UImage* IconControllerBoost;
    class UWidgetSwitcher* InputSwitcherIcon;
    class UUI_AdvancedLabel_C* ReverseInputLabel;
    class UCanvasPanel* RootCanvas;
    class USizeBox* SizeBoostProgress;
    class UZipLineStateComponent* ZiplineState;
    float Size;

    void Refresh();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void OnInputSourceChanged_Event(EFSDInputSource InputSource);
    void ExecuteUbergraph_OnScreen_Indicator_UsableZipLine(int32 EntryPoint);
};

#endif
