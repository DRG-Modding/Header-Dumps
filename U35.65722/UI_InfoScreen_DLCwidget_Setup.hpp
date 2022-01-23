#ifndef UE4SS_SDK_UI_InfoScreen_DLCwidget_Setup_HPP
#define UE4SS_SDK_UI_InfoScreen_DLCwidget_Setup_HPP

class UUI_InfoScreen_DLCwidget_Setup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Idle;
    class UButton* Button_0;
    class UImage* Image_BG;
    class UImage* Image_Flash;
    class UTexture2D* Image;
    class UGameDLC* GameDLC;
    FUI_InfoScreen_DLCwidget_Setup_COnClicked OnClicked;
    void OnClicked(class UGameDLC* dlc);
    FUI_InfoScreen_DLCwidget_Setup_COnHovered OnHovered;
    void OnHovered(class UGameDLC* dlc);
    FUI_InfoScreen_DLCwidget_Setup_COnUnhovered OnUnhovered;
    void OnUnhovered(class UGameDLC* dlc);

    void PlayAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_InfoScreen_DLCwidget_Setup(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetBanner_ReturnValue, bool K2Node_Event_IsDesignTime);
    void OnUnhovered__DelegateSignature(class UGameDLC* dlc);
    void OnHovered__DelegateSignature(class UGameDLC* dlc);
    void OnClicked__DelegateSignature(class UGameDLC* dlc);
};

#endif
