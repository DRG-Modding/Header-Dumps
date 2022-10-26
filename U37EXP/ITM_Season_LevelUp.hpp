#ifndef UE4SS_SDK_ITM_Season_LevelUp_HPP
#define UE4SS_SDK_ITM_Season_LevelUp_HPP

class UITM_Season_LevelUp_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_3;
    class UImage* Image_Background_Black;
    class UImage* Image_Background_Smoke;
    class UTextBlock* TextBlock_60;
    int32 Level;

    void PreConstruct(bool IsDesignTime);
    void PlayIntro();
    void ExecuteUbergraph_ITM_Season_LevelUp(int32 EntryPoint);
};

#endif
