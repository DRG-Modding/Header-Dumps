#ifndef UE4SS_SDK_UI_JettyBoots_HighScore_HPP
#define UE4SS_SDK_UI_JettyBoots_HighScore_HPP

class UUI_JettyBoots_HighScore_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* Name_Label;
    class UBasic_Label_C* Position_Label;
    class UBasic_Label_C* Score_Label;
    int32 Preview;

    void SetHighScore(int32 InIndex, FJettyBootsScore InHighscore, bool InHighlight);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_JettyBoots_HighScore(int32 EntryPoint);
};

#endif
