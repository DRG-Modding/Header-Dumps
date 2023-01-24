#ifndef UE4SS_SDK_ITM_SocialMediaButton_HPP
#define UE4SS_SDK_ITM_SocialMediaButton_HPP

class UITM_SocialMediaButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonLargeImage_C* Button;
    class UTexture2D* Icon;
    FText Description;
    FString URL;

    void CreateToolTip();
    void BndEvt__ITM_SocialMediaButton_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_SocialMediaButton(int32 EntryPoint);
};

#endif
