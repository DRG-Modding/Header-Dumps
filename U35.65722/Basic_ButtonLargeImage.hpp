#ifndef UE4SS_SDK_Basic_ButtonLargeImage_HPP
#define UE4SS_SDK_Basic_ButtonLargeImage_HPP

class UBasic_ButtonLargeImage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hover;
    class UButton* Button_0;
    class UImage* Overlay;
    class USizeBox* Sizer;
    class UImage* TextureHolder;
    FBasic_ButtonLargeImage_COnClicked OnClicked;
    void OnClicked();
    FBasic_ButtonLargeImage_COnPressed OnPressed;
    void OnPressed();
    FBasic_ButtonLargeImage_COnReleased OnReleased;
    void OnReleased();
    float ButtonSize;
    class UTexture2D* Texture;

    void SetTexture(class UTexture2D* Texture);
    void IsPressed(bool& IsPressed, bool CallFunc_IsPressed_ReturnValue);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_ButtonLargeImage(int32 EntryPoint, class UBasic_ToolTip_C* K2Node_DynamicCast_AsBasic_Tool_Tip, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void OnReleased__DelegateSignature();
    void OnPressed__DelegateSignature();
    void OnClicked__DelegateSignature();
};

#endif
