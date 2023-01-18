#ifndef UE4SS_SDK_OnScreenIndicator_UsableItem_Simple_HPP
#define UE4SS_SDK_OnScreenIndicator_UsableItem_Simple_HPP

class UOnScreenIndicator_UsableItem_Simple_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowSmall_C* BasicWindow_BracketSmall;
    class UUI_AdvancedLabel_C* KeyLabel;
    class UProgressBar* ProgressBar_1;
    class APlayerCharacter* Character;
    class AItem* Item;
    class UUsableAggregator* Aggregator;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnItemEquipped(class AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void VisChanged(bool IsVisible);
    void ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple(int32 EntryPoint);
};

#endif
