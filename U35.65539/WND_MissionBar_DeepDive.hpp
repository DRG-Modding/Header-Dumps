#ifndef UE4SS_SDK_WND_MissionBar_DeepDive_HPP
#define UE4SS_SDK_WND_MissionBar_DeepDive_HPP

class UWND_MissionBar_DeepDive_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Intro;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4;
    UImage* BGgradient;
    UBorder* Center;
    UBorder* edgeL;
    UBorder* edgeR;
    UHorizontalBox* HorizontalBox_Attention;
    UImage* Image_0;
    UITM_DeepDive_Codename_C* ITM_DeepDive_Codename;
    UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    UITM_Gear_Bar_C* ITM_Gear_Bar;
    UBorder* MtopBG;
    UTextBlock* TextBlock_2;
    UImage* TopSlantL;
    UImage* TopSlantR;
    UTextBlock* TXT_Attention;
    UUI_GradientMasked_Image_C* UI_GradientMasked_Image;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WND_MissionBar_DeepDive(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsEliteDeepDive_ReturnValue, UDeepDive* CallFunc_GetDeepDiveFromMission_ReturnValue, UTexture2D* CallFunc_GetBiomeMissionBar_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_AreAllSelectedClassesQualified_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
}

#endif
