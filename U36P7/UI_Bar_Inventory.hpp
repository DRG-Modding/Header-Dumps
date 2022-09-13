#ifndef UE4SS_SDK_UI_Bar_Inventory_HPP
#define UE4SS_SDK_UI_Bar_Inventory_HPP

class UUI_Bar_Inventory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* InventoryBox;
    TArray<class UResourceData*> Resources;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Bar_Inventory(int32 EntryPoint);
};

#endif
