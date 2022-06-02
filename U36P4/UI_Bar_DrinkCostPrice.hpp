#ifndef UE4SS_SDK_UI_Bar_DrinkCostPrice_HPP
#define UE4SS_SDK_UI_Bar_DrinkCostPrice_HPP

class UUI_Bar_DrinkCostPrice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATAAmount;
    class USizeBox* SizeBox_Height;
    class UResourceData* Resource;
    float Amount;
    float Height;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_Bar_DrinkCostPrice(int32 EntryPoint);
};

#endif
