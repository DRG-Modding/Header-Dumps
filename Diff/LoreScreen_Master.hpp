#ifndef UE4SS_SDK_LoreScreen_Master_HPP
#define UE4SS_SDK_LoreScreen_Master_HPP

class ULoreScreen_Master_C : public ULoreScreenMasterWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OutandIntro;
    class UWidgetAnimation* Intro;
    class UMinersManual* MinersManual;

    void OnShown();
    void RefreshContent();
    void PlayIntroAnim();
    void ExecuteUbergraph_LoreScreen_Master(int32 EntryPoint);
};

#endif
