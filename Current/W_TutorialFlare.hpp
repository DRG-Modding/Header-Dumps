#ifndef UE4SS_SDK_W_TutorialFlare_HPP
#define UE4SS_SDK_W_TutorialFlare_HPP

class UW_TutorialFlare_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 FlaresCast;
    int32 NumberToCast;

    void OnShown();
    void OnFlareThrown();
    void UpdateText();
    void ExecuteUbergraph_W_TutorialFlare(int32 EntryPoint);
};

#endif
