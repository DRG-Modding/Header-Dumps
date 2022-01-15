#ifndef UE4SS_SDK_WidgetGravitySwitch_HPP
#define UE4SS_SDK_WidgetGravitySwitch_HPP

class UWidgetGravitySwitch_C : UUserWidget
{
    UTextBlock* NameText;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_1;

    void SetColor(FLinearColor Color, FSlateColor K2Node_MakeStruct_SlateColor);
    void SetPlayerName(FText NewName);
}

#endif
