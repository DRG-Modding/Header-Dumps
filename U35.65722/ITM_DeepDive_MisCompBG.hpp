#ifndef UE4SS_SDK_ITM_DeepDive_MisCompBG_HPP
#define UE4SS_SDK_ITM_DeepDive_MisCompBG_HPP

class UITM_DeepDive_MisCompBG_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBackgroundFloat;
    class UBlurBackground_C* BlurBackground;
    class UImage* ImageBackground;

    void SetBackgroundFromBiome(class UBiome* Biome, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetBiomeLargeImage_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_DeepDive_MisCompBG(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
