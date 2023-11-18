#ifndef UE4SS_SDK_UI_InfoScreen_MerchLink_HPP
#define UE4SS_SDK_UI_InfoScreen_MerchLink_HPP

class UUI_InfoScreen_MerchLink_C : public UUI_MerchEntry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* Idle;
    class USizeBox* Button_SizeBox;
    class UOverlay* GlowOverlay;
    class UButton* LinkButton;
    class UBasic_Image_C* MainImage;
    class UVerticalBox* TitelBox;
    class UTextBlock* TitelLabel;
    FText Title;
    class UTexture2D* MerchTexture;
    class UTexture2D* OverlayTexture;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_InfoScreen_MerchLink(int32 EntryPoint);
};

#endif
