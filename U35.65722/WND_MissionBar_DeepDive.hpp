#ifndef UE4SS_SDK_WND_MissionBar_DeepDive_HPP
#define UE4SS_SDK_WND_MissionBar_DeepDive_HPP

class UWND_MissionBar_DeepDive_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4;
    class UImage* BGgradient;
    class UBorder* Center;
    class UBorder* edgeL;
    class UBorder* edgeR;
    class UHorizontalBox* HorizontalBox_Attention;
    class UImage* Image_0;
    class UITM_DeepDive_Codename_C* ITM_DeepDive_Codename;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UITM_Gear_Bar_C* ITM_Gear_Bar;
    class UBorder* MtopBG;
    class UTextBlock* TextBlock_2;
    class UImage* TopSlantL;
    class UImage* TopSlantR;
    class UTextBlock* TXT_Attention;
    class UUI_GradientMasked_Image_C* UI_GradientMasked_Image;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WND_MissionBar_DeepDive(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsEliteDeepDive_ReturnValue, class UDeepDive* CallFunc_GetDeepDiveFromMission_ReturnValue, class UTexture2D* CallFunc_GetBiomeMissionBar_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_AreAllSelectedClassesQualified_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
};

#endif
