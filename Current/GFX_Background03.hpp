#ifndef UE4SS_SDK_GFX_Background03_HPP
#define UE4SS_SDK_GFX_Background03_HPP

class UGFX_Background03_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BackgroundWiggle;
    class UImage* BackgroundOverlay;
    class UImage* Image_0;

    void Construct();
    void ExecuteUbergraph_GFX_Background03(int32 EntryPoint);
};

#endif
