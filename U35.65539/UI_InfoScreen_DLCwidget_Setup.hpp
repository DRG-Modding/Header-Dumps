#ifndef UE4SS_SDK_UI_InfoScreen_DLCwidget_Setup_HPP
#define UE4SS_SDK_UI_InfoScreen_DLCwidget_Setup_HPP

class UUI_InfoScreen_DLCwidget_Setup_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Idle;
    UButton* Button_0;
    UImage* Image_BG;
    UImage* Image_Flash;
    UTexture2D* Image;
    UGameDLC* GameDLC;
    FUI_InfoScreen_DLCwidget_Setup_COnClicked OnClicked;
    void OnClicked(UGameDLC* dlc);
    FUI_InfoScreen_DLCwidget_Setup_COnHovered OnHovered;
    void OnHovered(UGameDLC* dlc);
    FUI_InfoScreen_DLCwidget_Setup_COnUnhovered OnUnhovered;
    void OnUnhovered(UGameDLC* dlc);

    void PlayAnim(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_InfoScreen_DLCwidget_Setup(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, UTexture2D* CallFunc_GetBanner_ReturnValue, bool K2Node_Event_IsDesignTime);
    void OnUnhovered__DelegateSignature(UGameDLC* dlc);
    void OnHovered__DelegateSignature(UGameDLC* dlc);
    void OnClicked__DelegateSignature(UGameDLC* dlc);
}

#endif
