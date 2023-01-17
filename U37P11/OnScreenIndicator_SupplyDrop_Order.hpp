#ifndef UE4SS_SDK_OnScreenIndicator_SupplyDrop_Order_HPP
#define UE4SS_SDK_OnScreenIndicator_SupplyDrop_Order_HPP

class UOnScreenIndicator_SupplyDrop_Order_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    class UUI_AdvancedLabel_C* KeyLabel;
    class UTextBlock* Text_Cost;
    class UTextBlock* Text_Name;

    void SetDetails(FText Name, int32 Cost, class UResourceData* ResourceRequired);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order(int32 EntryPoint);
};

#endif
