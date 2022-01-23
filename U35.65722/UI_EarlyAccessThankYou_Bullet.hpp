#ifndef UE4SS_SDK_UI_EarlyAccessThankYou_Bullet_HPP
#define UE4SS_SDK_UI_EarlyAccessThankYou_Bullet_HPP

class UUI_EarlyAccessThankYou_Bullet_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BulletImage;
    class URichTextBlock* TextBlock;
    int32 BulletSize;
    FMargin BulletPadding;
    class UTexture2D* BulletTexture;
    TEnumAsByte<ENUM_MenuColors::Type> BulletTint;
    FText Text;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_EarlyAccessThankYou_Bullet(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_Conv_IntToFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
};

#endif
