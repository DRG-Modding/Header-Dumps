#ifndef UE4SS_SDK_ITM_RestoreSave_HPP
#define UE4SS_SDK_ITM_RestoreSave_HPP

class UITM_RestoreSave_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimShow;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UHorizontalBox* buttons;
    class UTextBlock* DATA_Content;
    class UTextBlock* DATA_Header;
    FITM_RestoreSave_CImageReady ImageReady;
    void ImageReady(FString URL);
    FITM_RestoreSave_COnShowRestoreSaveClicked OnShowRestoreSaveClicked;
    void OnShowRestoreSaveClicked();

    void ShowWindow();
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature();
    void HideUIDelayed();
    void Check Savegame();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_RestoreSave(int32 EntryPoint);
    void OnShowRestoreSaveClicked__DelegateSignature();
    void ImageReady__DelegateSignature(FString URL);
};

#endif
