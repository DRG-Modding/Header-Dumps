#ifndef UE4SS_SDK_HUD_ItemWheel_HPP
#define UE4SS_SDK_HUD_ItemWheel_HPP

class UHUD_ItemWheel_C : public UItemsBar
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeInOut;
    class UUI_AdvancedLabel_C* dpaddown;
    class UUI_AdvancedLabel_C* dpadleft;
    class UUI_AdvancedLabel_C* dpadright;
    class UUI_AdvancedLabel_C* dpadup;
    class UWidgetSwitcher* ImageSwitcher;
    class UOverlay* ItemHolder0;
    class UOverlay* ItemHolder1;
    class UOverlay* ItemHolder2;
    class UOverlay* ItemHolder3;
    class UOverlay* SupplyItemHolder;
    TArray<class UOverlay*> ItemHolders;
    float VisibleDuration;
    bool WidgetVisible;

    void SwapUpperItems(class UWidget* Unselected, class UWidget* Selected);
    void OnItemAdded(class UItemsBarIcon* ItemIcon);
    void PreConstruct(bool IsDesignTime);
    void OnItemEquipped(class UItemsBarIcon* ItemIcon);
    void AddIcon(class UItemsBarIcon* Icon, int32 Index);
    void OnClear();
    void Construct();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void Show();
    void OnItemClicked();
    void OnSupplyItemAdded(class UItemsBarIcon* ItemIcon);
    void OnSupplyItemUnequipped(class UItemsBarIcon* ItemIcon);
    void OnSupplyItemEquipped(class UItemsBarIcon* ItemIcon);
    void OnFadeInOutFinished();
    void OnFadeInOutStarted();
    void ExecuteUbergraph_HUD_ItemWheel(int32 EntryPoint);
};

#endif
