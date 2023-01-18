#ifndef UE4SS_SDK_ITM_MisSel_Timer_HPP
#define UE4SS_SDK_ITM_MisSel_Timer_HPP

class UITM_MisSel_Timer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBlurBackground_C* BlurBackground;
    class UTextBlock* Counter;

    void Construct();
    void UpdateTime();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_Timer(int32 EntryPoint);
};

#endif
