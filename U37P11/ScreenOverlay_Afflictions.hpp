#ifndef UE4SS_SDK_ScreenOverlay_Afflictions_HPP
#define UE4SS_SDK_ScreenOverlay_Afflictions_HPP

class UScreenOverlay_Afflictions_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* RootCanvas;
    class APlayerCharacter* Player;
    class UHealthComponent* HealthComponent;
    TMap<class UPlayerAfflictionOverlay*, class UPlayerAfflictionOverlayWidget*> ActiveOverlays;

    void FindOverlayWidget(class UPlayerAfflictionOverlay* OverlayData, bool CreateIfNew, class UPlayerAfflictionOverlayWidget*& OutWidget);
    void Construct();
    void OnShowOverlay_Event(class UPlayerAfflictionOverlay* Overlay);
    void OnHideOverlay_Event(class UPlayerAfflictionOverlay* Overlay);
    void ExecuteUbergraph_ScreenOverlay_Afflictions(int32 EntryPoint);
};

#endif
