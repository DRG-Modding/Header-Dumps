#ifndef UE4SS_SDK_ITM_DeepDive_MisCompBG_HPP
#define UE4SS_SDK_ITM_DeepDive_MisCompBG_HPP

class UITM_DeepDive_MisCompBG_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBackgroundFloat;
    class UBlurBackground_C* BlurBackground;
    class UImage* ImageBackground;

    void SetBackgroundFromBiome(class UBiome* Biome);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_DeepDive_MisCompBG(int32 EntryPoint);
};

#endif
