#ifndef UE4SS_SDK_HUD_Flares_HPP
#define UE4SS_SDK_HUD_Flares_HPP

class UHUD_Flares_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* FlareBox;
    class UUI_AdvancedLabel_C* InputLabel;
    TArray<class UHUD_FlareIcon_C*> Icons;
    TSet<FName> reasons;
    bool LaserpointerPressed;
    int32 NextIndex;
    float Progress;
    bool RechargingFirst;

    void SetFlareProduction(int32 InNextIndex, float InProgress);
    void CreateIcons(int32 IconCount);
    void OnItemsLoaded();
    void OnFlareProduction(int32 NextIndex, float Progress);
    void Setup Dynamic HUD();
    void OnFlareCountChanged(int32 CurrentCount, class UInventoryComponent* Inventory);
    void Construct();
    void UpdateVisibility();
    void OnLaserPointerPressed();
    void OnLaserPointerReleased_Event();
    void PreConstruct(bool IsDesignTime);
    void OnMaxFlareCountChanged_Event(int32 CurrentCount, class UInventoryComponent* Inventory);
    void ExecuteUbergraph_HUD_Flares(int32 EntryPoint);
};

#endif
