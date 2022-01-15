#ifndef UE4SS_SDK_UI_Guntower_ProgressBar_ModuleIcon_HPP
#define UE4SS_SDK_UI_Guntower_ProgressBar_ModuleIcon_HPP

class UUI_Guntower_ProgressBar_ModuleIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FlashActive;
    UWidgetAnimation* FlashGreen;
    UImage* Icon;
    bool Active;

    void SetAccessGranted(bool IsAccessGranted, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetActive(bool IsActive, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void ExecuteUbergraph_UI_Guntower_ProgressBar_ModuleIcon(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
