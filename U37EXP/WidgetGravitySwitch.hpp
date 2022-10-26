#ifndef UE4SS_SDK_WidgetGravitySwitch_HPP
#define UE4SS_SDK_WidgetGravitySwitch_HPP

class UWidgetGravitySwitch_C : public UUserWidget
{
    class UTextBlock* NameText;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;

    void SetColor(FLinearColor Color);
    void SetPlayerName(FText NewName);
};

#endif
