#ifndef UE4SS_SDK_ITM_DeepDive_MisCompBG_HPP
#define UE4SS_SDK_ITM_DeepDive_MisCompBG_HPP

class UITM_DeepDive_MisCompBG_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimBackgroundFloat;
    UBlurBackground_C* BlurBackground;
    UImage* ImageBackground;

    void SetBackgroundFromBiome(UBiome* Biome, bool CallFunc_IsValid_ReturnValue, UTexture2D* CallFunc_GetBiomeLargeImage_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_DeepDive_MisCompBG(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
