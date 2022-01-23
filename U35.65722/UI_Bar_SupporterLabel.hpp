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

    void SetDrinkable(class UDrinkableDataAsset* Drinkable, bool& IsSupporterEdition, class UDrinkableDataAsset*& OutDrinkable, bool CallFunc_HasSupporterUpgrade_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasSupporterEdition_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Bar_SupporterLabel(int32 EntryPoint, FVector2D CallFunc_MakeVector2D_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
