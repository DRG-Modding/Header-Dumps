#ifndef UE4SS_SDK_HUD_CrosshairManager_HPP
#define UE4SS_SDK_HUD_CrosshairManager_HPP

class UHUD_CrosshairManager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UWidgetSwitcher* CrosshairSwitcher;
    class UHUD_HitIndicator_C* HUD_HitIndicator;
    class UCanvasPanel* MainCanvas;
    class UImage* NoCrosshair;
    class UOnScreen_Indicator_UsableZipLine_C* OnScreen_Indicator_UsableZipLine;
    class UUserWidget* CurrentCrosshair;
    bool PlayIntroAnim;
    class APlayerCharacter* Character;
    TMap<class AItem*, class UUserWidget*> CrosshairCache;

    void UnregisterEvents();
    void UpdateVisibility();
    void SetCrosshair(class AItem* InEquippedItem);
    void OnToggleMapTool(bool Visible);
    void OnDepositingEnd_Event(class UResourceBank* ResourceBank);
    void OnDepositingBegin_Event(class UResourceBank* ResourceBank);
    void OnCameraModeChanged_Event(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void OnCharacterStateChanged(ECharacterState NewState);
    void Destruct();
    void Construct();
    void On Inventory Ready();
    void OnItemsLoaded();
    void ExecuteUbergraph_HUD_CrosshairManager(int32 EntryPoint);
};

#endif
