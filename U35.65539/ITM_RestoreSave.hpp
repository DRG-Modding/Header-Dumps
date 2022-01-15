#ifndef UE4SS_SDK_ITM_RestoreSave_HPP
#define UE4SS_SDK_ITM_RestoreSave_HPP

class UITM_RestoreSave_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimShow;
    UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    UBasic_ButtonScalable2_C* BTN_No;
    UBasic_ButtonScalable2_C* BTN_Yes;
    UHorizontalBox* buttons;
    UTextBlock* DATA_Content;
    UTextBlock* DATA_Header;
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
    void ExecuteUbergraph_ITM_RestoreSave(int32 EntryPoint, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsOnSpaceRig_OnSpaceRig, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_HasBackupWithMoreProgress_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsDesignTime);
    void OnShowRestoreSaveClicked__DelegateSignature();
    void ImageReady__DelegateSignature(FString URL);
}

#endif
