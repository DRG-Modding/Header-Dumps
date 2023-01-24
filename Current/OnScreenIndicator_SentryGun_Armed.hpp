#ifndef UE4SS_SDK_OnScreenIndicator_SentryGun_Armed_HPP
#define UE4SS_SDK_OnScreenIndicator_SentryGun_Armed_HPP

class UOnScreenIndicator_SentryGun_Armed_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_46;
    class UTextBlock* TextBlock_1;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_SentryGun_Armed(int32 EntryPoint);
};

#endif
