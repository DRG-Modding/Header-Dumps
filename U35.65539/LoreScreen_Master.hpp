#ifndef UE4SS_SDK_LoreScreen_Master_HPP
#define UE4SS_SDK_LoreScreen_Master_HPP

class ULoreScreen_Master_C : ULoreScreenMasterWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* OutandIntro;
    UWidgetAnimation* Intro;
    UMinersManual* MinersManual;

    void OnShown();
    void RefreshContent();
    void PlayIntroAnim();
    void ExecuteUbergraph_LoreScreen_Master(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
