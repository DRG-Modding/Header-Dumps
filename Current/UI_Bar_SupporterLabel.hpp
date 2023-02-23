#ifndef UE4SS_SDK_UI_Bar_SupporterLabel_HPP
#define UE4SS_SDK_UI_Bar_SupporterLabel_HPP

class UUI_Bar_SupporterLabel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* SupporterBox;
    class UTextBlock* SupporterHeader;
    class UImage* SupportIconLeft;
    int32 Font Size;
    float Icon Size;

    void SetDrinkable(class UDrinkableDataAsset* Drinkable, bool& IsSpecialEdition, class UDrinkableDataAsset*& OutDrinkable);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Bar_SupporterLabel(int32 EntryPoint);
};

#endif
