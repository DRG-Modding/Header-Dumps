#ifndef UE4SS_SDK_WidgetCabinPlayerName_HPP
#define UE4SS_SDK_WidgetCabinPlayerName_HPP

class UWidgetCabinPlayerName_C : public UUserWidget
{
    class UImage* Image_0;
    class UTextBlock* NameText;

    void SetColor(FLinearColor Color, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetPlayerName(FText NewName);
};

#endif
