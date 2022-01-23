#ifndef UE4SS_SDK_UI_Guntower_ProgressBar_ModuleIcon_HPP
#define UE4SS_SDK_UI_Guntower_ProgressBar_ModuleIcon_HPP

class UUI_Guntower_ProgressBar_ModuleIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FlashActive;
    class UWidgetAnimation* FlashGreen;
    class UImage* Icon;
    bool Active;

    void SetAccessGranted(bool IsAccessGranted, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetActive(bool IsActive, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void ExecuteUbergraph_UI_Guntower_ProgressBar_ModuleIcon(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
