#ifndef UE4SS_SDK_OnScreenIndicator_SentryGun_Armed_HPP
#define UE4SS_SDK_OnScreenIndicator_SentryGun_Armed_HPP

class UOnScreenIndicator_SentryGun_Armed_C : UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_46;
    UTextBlock* TextBlock_1;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_SentryGun_Armed(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime);
}

#endif
