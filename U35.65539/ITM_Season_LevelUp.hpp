#ifndef UE4SS_SDK_ITM_Season_LevelUp_HPP
#define UE4SS_SDK_ITM_Season_LevelUp_HPP

class UITM_Season_LevelUp_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Intro;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_3;
    UImage* Image_Background_Black;
    UImage* Image_Background_Smoke;
    UTextBlock* TextBlock_60;
    int32 Level;

    void PreConstruct(bool IsDesignTime);
    void PlayIntro();
    void ExecuteUbergraph_ITM_Season_LevelUp(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
