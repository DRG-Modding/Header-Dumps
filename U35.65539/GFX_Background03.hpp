#ifndef UE4SS_SDK_GFX_Background03_HPP
#define UE4SS_SDK_GFX_Background03_HPP

class UGFX_Background03_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* BackgroundWiggle;
    UImage* BackgroundOverlay;
    UImage* Image_0;

    void Construct();
    void ExecuteUbergraph_GFX_Background03(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
